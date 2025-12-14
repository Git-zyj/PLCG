/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109219
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((unsigned int) (short)17189);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17198))) : (max((((/* implicit */unsigned int) (short)0)), (1104245437U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 ^= ((((/* implicit */long long int) 1104245452U)) != (max((((/* implicit */long long int) ((8688400663239947809ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17189)))))), ((+(-7661427779748486240LL))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_15 [i_3] [i_1] [(unsigned char)9] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) < (((/* implicit */int) (short)17160)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) : (8321276677687790909ULL)))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_3])) : (((((/* implicit */_Bool) 3869718485363609267LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))) : (min((((var_7) ? (((/* implicit */int) arr_10 [i_3] [(short)10] [i_3])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((var_10) < (((/* implicit */int) arr_2 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] [i_4] [(short)17] [i_4] = ((/* implicit */unsigned char) max((((2281025806487293019ULL) * (((/* implicit */unsigned long long int) arr_0 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [(short)13] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_11))))) : (((-3869718485363609275LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))))))))));
                                var_16 = arr_9 [12] [i_4 - 3] [i_5];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((((/* implicit */_Bool) 3869718485363609267LL)) && (((/* implicit */_Bool) ((unsigned long long int) 7661427779748486241LL))));
    var_18 = ((/* implicit */unsigned char) ((var_8) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)181))))), (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))))));
}
