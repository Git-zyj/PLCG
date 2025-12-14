/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180023
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((min((var_8), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (9807662432081361937ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < ((~(8639081641628189671ULL))))))));
    var_13 = min(((~((+(9807662432081361930ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (min((-13LL), (((/* implicit */long long int) (short)32757)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [(signed char)10] |= ((/* implicit */signed char) 9807662432081361939ULL);
        arr_3 [i_0] = ((/* implicit */long long int) min((8639081641628189659ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) min(((short)23415), (((/* implicit */short) var_11))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (short)32737)))));
                        arr_11 [i_0] [i_1] [i_2 + 3] [i_3] = ((/* implicit */signed char) ((((9807662432081361918ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_0])))) : (((/* implicit */int) ((signed char) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))))));
                    }
                } 
            } 
        } 
    }
}
