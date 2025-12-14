/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174368
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
    var_19 = var_10;
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_9)))));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [i_0])))) ? (3262924005U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_23 = arr_4 [i_1] [i_1];
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                                var_24 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))));
                                arr_23 [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]))) ? (((var_7) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-7474))))));
                                var_25 = ((unsigned long long int) ((((/* implicit */_Bool) 2777478035U)) ? (((arr_13 [i_1] [i_3] [i_4] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) -4503599627370496LL))));
                                arr_24 [i_1] [i_1] |= ((/* implicit */int) max((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (9297074681239688777ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (var_5)));
                            }
                        } 
                    } 
                    var_26 = (-2147483647 - 1);
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_27 = arr_13 [i_0] [i_0] [i_0] [i_0];
                    var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_19 [i_1] [i_6])))));
                    var_29 = ((/* implicit */_Bool) 4503599627370507LL);
                }
                arr_28 [i_0] [i_1] = ((/* implicit */short) 1032043290U);
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2147483641)), (((((/* implicit */_Bool) var_6)) ? (16389966399104858946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_4)));
            }
        } 
    } 
}
