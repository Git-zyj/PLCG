/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159023
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((2798548507U) >> (((((/* implicit */int) (signed char)92)) - (69)))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)11361)), (arr_0 [i_1 + 1])))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_21 = ((/* implicit */long long int) ((unsigned short) arr_8 [i_1] [i_1] [7ULL] [(signed char)3]));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_4] [i_4] [(unsigned char)5] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 + 1] [i_1] [i_1 + 1]))) < (3129846806781767177ULL)));
                                var_22 *= ((/* implicit */signed char) arr_13 [i_3] [i_0] [i_3] [(unsigned short)0] [i_4] [(unsigned char)8]);
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                    arr_18 [0LL] [i_1] [(unsigned short)5] [3U] = (!(((/* implicit */_Bool) arr_15 [i_1] [i_1 - 2])));
                }
                var_24 = ((/* implicit */unsigned int) ((short) (~(((arr_6 [i_1] [(short)1] [i_1]) ? (-2689854097450062591LL) : (((/* implicit */long long int) 1128101131)))))));
                arr_19 [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) arr_14 [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_11))))))), (var_8)));
}
