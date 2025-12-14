/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139926
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min(((((!(var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (min((arr_3 [i_0 - 2]), (((/* implicit */unsigned long long int) (short)-1616)))))), (3968090936836321688ULL))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) (((((!(var_3))) || (var_0))) ? (min((((/* implicit */unsigned long long int) 688418517U)), (13629073108672288327ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3845))) : (688418522U))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3 + 1] = ((_Bool) ((((/* implicit */_Bool) (short)1616)) ? (((/* implicit */int) arr_8 [i_3 + 2] [i_3] [i_3 - 1] [16])) : (((-1993078416) + (((/* implicit */int) var_15))))));
                        arr_11 [i_0] [i_1 - 2] = ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) % (((/* implicit */int) ((((/* implicit */_Bool) 3777715625U)) || (((/* implicit */_Bool) var_18)))))))) * (min((((/* implicit */unsigned long long int) var_6)), (var_17))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_14 [i_0 + 1] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 2] [i_2 + 1]))) : (var_16))), (min((0U), (((/* implicit */unsigned int) (short)-1619))))));
                            var_21 = ((/* implicit */short) ((unsigned int) (~(((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                        var_22 = (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_10))))))));
                    }
                }
            } 
        } 
    } 
    var_23 = 1545157033U;
}
