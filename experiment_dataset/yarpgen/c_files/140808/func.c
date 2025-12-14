/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140808
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */int) max((var_16), ((~(((((/* implicit */int) arr_8 [i_3 - 1])) ^ (((/* implicit */int) arr_8 [i_3 - 2]))))))));
                                var_17 = (!(((/* implicit */_Bool) ((unsigned int) arr_11 [i_2] [i_3 - 2] [i_4 + 4] [i_4 - 1]))));
                                arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_3 [i_3 - 2] [i_0])));
                            }
                            for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned short) ((short) 1648447654));
                                arr_18 [i_2] [i_2] [i_2] = ((_Bool) ((arr_10 [i_3 + 1]) - (arr_10 [i_3 - 2])));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))))));
                            }
                            var_19 = ((((long long int) arr_13 [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2])) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))));
                        }
                    } 
                } 
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) arr_17 [i_1] [i_0])));
            }
        } 
    } 
    var_20 *= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_6)))));
    var_21 = ((/* implicit */int) var_10);
    var_22 *= ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) var_6))))))));
}
