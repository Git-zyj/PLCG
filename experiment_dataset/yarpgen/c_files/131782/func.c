/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131782
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) <= (((/* implicit */int) ((unsigned char) ((14680064U) != (4294967295U)))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0 - 1] [4] [4] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(signed char)16]))))) : (max((var_12), (var_12))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_10) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)4095)))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)2047);
                    arr_10 [i_2 - 1] [i_2 - 1] [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) arr_5 [13] [i_1])) < (((/* implicit */int) arr_5 [i_1] [i_2 - 1]))))));
                }
                for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_14 = ((/* implicit */short) var_1);
                    var_15 *= ((/* implicit */_Bool) max((((/* implicit */int) (short)28)), ((~(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_0 [(unsigned char)14])))))))));
                    var_16 = ((/* implicit */short) min((min((((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344)))))), (((((/* implicit */int) var_10)) - (((/* implicit */int) (short)112)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)96))))) != (var_3))))));
                    var_17 = ((/* implicit */short) ((int) (short)448));
                }
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
}
