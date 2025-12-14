/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185799
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
    var_19 ^= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)238))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 26U))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((18346356207843956491ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0])))) / (((/* implicit */unsigned long long int) arr_1 [5U]))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((short) (unsigned char)47));
                    arr_6 [i_0] [(short)8] [i_1] [i_0] = ((/* implicit */unsigned char) var_10);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (short)32767)) | (max((((((/* implicit */int) var_8)) - (-51671668))), (((((/* implicit */_Bool) 1073741823ULL)) ? (((/* implicit */int) (unsigned char)34)) : (1180308621))))))))));
                    arr_7 [7] [i_1] [7] = var_15;
                }
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1 - 2])) / (((/* implicit */int) (unsigned short)27521)))), ((+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)5] [i_1 - 2]))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_12)))))));
                    var_26 = (((~(min((arr_11 [i_0]), (((/* implicit */unsigned int) arr_10 [i_1])))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3]))))));
                }
            }
        } 
    } 
}
