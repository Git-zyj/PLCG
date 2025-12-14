/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137853
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)117))))) ? (((/* implicit */unsigned long long int) min((max((var_0), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) : (var_3)));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_17), (((/* implicit */long long int) (short)-18205))))))) ? (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_19)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_4);
        arr_3 [i_0] [i_0] = 8709087071514124713LL;
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)48)) > (((/* implicit */int) (short)-30019))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48831))) / (6175494782272898134LL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_12 [i_0] &= (((+(8709087071514124713LL))) <= (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (8709087071514124684LL) : (arr_6 [i_1 - 1] [(unsigned short)3]))))));
                    arr_13 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+((((-(arr_11 [5LL] [5LL] [i_2]))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-126)), (arr_10 [i_0] [i_0] [3ULL])))))))));
                }
            } 
        } 
    }
}
