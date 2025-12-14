/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182757
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_13 |= ((/* implicit */unsigned int) (+((-(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 2334741867U))));
                        var_15 |= ((/* implicit */short) max((((unsigned long long int) 3636247299U)), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_3]))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 3636247299U))));
                            arr_13 [i_1] [i_2] [i_1] |= ((/* implicit */unsigned int) arr_1 [i_3]);
                            arr_14 [i_0] [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (~(arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            var_17 = max((max((max((((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_2])), (arr_11 [i_0] [i_2] [i_2] [i_3] [i_4]))), (((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [i_2] [i_1])))), (((/* implicit */long long int) ((short) min((0LL), (((/* implicit */long long int) 1002587953)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((short) max((arr_12 [i_5] [i_5] [i_3] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) 268435456)))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((int) arr_10 [i_2] [i_1] [i_2]));
                            var_19 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) 3636247303U)) - (((((((/* implicit */int) (short)-32754)) < (arr_1 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_3] [i_1])))) : ((+(arr_7 [i_1] [i_1] [i_1] [i_1])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((max((462514083U), (((/* implicit */unsigned int) (unsigned char)237)))) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_0 + 1] [i_0 - 1]), (((/* implicit */short) (unsigned char)18))))))));
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_6] |= ((/* implicit */short) 19LL);
                            var_20 = ((/* implicit */unsigned short) (-((+(-268435456)))));
                        }
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(-8900733099189760621LL)))));
        var_21 = ((/* implicit */unsigned long long int) 8388607U);
    }
    var_22 = ((/* implicit */signed char) max((((max((((/* implicit */long long int) (unsigned char)111)), (var_6))) << (((((((/* implicit */int) (short)-32723)) + (32781))) - (58))))), (((/* implicit */long long int) 8388630U))));
}
