/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168690
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) arr_4 [i_4] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) arr_0 [i_0]))))))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1173472928))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) arr_10 [i_1] [i_5] [i_2] [i_1] [i_1]);
                        arr_16 [i_0] [5] [i_5] [i_2] [i_2] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-10842)) ? (arr_15 [i_5] [i_1] [i_2]) : (((/* implicit */unsigned long long int) -966157356993053606LL)))), (((/* implicit */unsigned long long int) (unsigned char)9))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6] [i_1])) ? (max((9667837821225153720ULL), (((/* implicit */unsigned long long int) var_15)))) : ((~(min((var_7), (((/* implicit */unsigned long long int) (short)-10842))))))));
                        arr_19 [i_0] [i_0] [i_0] [(unsigned char)17] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)0] [i_2] [i_6]))) : (var_4)))) ? (((/* implicit */unsigned long long int) min((2492803212900359666LL), (((/* implicit */long long int) arr_11 [(short)17] [(short)10] [(short)17] [(short)17] [i_6] [i_6]))))) : (((unsigned long long int) 18446744073709551615ULL))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12))));
                        var_20 = ((/* implicit */short) ((var_7) <= (((/* implicit */unsigned long long int) var_4))));
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) 0U))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) <= (((/* implicit */int) var_14))))))))));
                        var_23 &= ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((1116892707587883008LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157)))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)120)) != ((~(((/* implicit */int) arr_0 [i_1]))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) 16847827666932034719ULL))));
                    }
                }
            } 
        } 
    } 
    var_26 = var_8;
}
