/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158361
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_1), (var_1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_3))))))) : (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)249))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    arr_8 [i_0] [i_2] [(signed char)8] = ((/* implicit */signed char) arr_6 [i_2] [i_1] [i_0]);
                }
            } 
        } 
        arr_9 [(signed char)9] = ((/* implicit */signed char) arr_4 [(unsigned char)13] [i_0] [i_0]);
    }
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (unsigned char)0))), ((~(((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_1))))))));
}
