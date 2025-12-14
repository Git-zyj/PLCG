/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140182
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
    var_20 = ((/* implicit */int) (unsigned short)23721);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_21 -= ((/* implicit */_Bool) arr_2 [i_1]);
                        arr_12 [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_2 + 2]) / (((var_16) - (((/* implicit */int) (unsigned short)23710))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [10U] [i_1] [i_2 - 1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) == (((/* implicit */int) (signed char)-26))))) : (((-1004967190) & (arr_3 [(unsigned short)11] [i_1])))));
                            arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))) == (arr_14 [i_2 + 1] [i_2] [i_2] [i_3] [22])));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) arr_17 [i_5] [(signed char)7] [i_3] [i_2] [i_0 + 2] [i_0 + 2]))))));
                            arr_19 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) arr_3 [i_1] [i_0 + 3]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) var_4);
                            var_25 &= ((/* implicit */unsigned char) (((-(arr_14 [i_0] [i_1] [i_3] [i_6] [i_6]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)61850)))))));
                            var_26 = ((/* implicit */_Bool) -1692902087614455163LL);
                            arr_22 [i_0] [i_6] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)23735))));
                        }
                    }
                    arr_23 [i_2] [i_2 + 2] = (((+(((((/* implicit */int) (signed char)-36)) / (((/* implicit */int) (unsigned short)23735)))))) < (((((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)-119)))) ? (((((/* implicit */_Bool) -1004967190)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)43308)))) : (((/* implicit */int) arr_2 [i_0 - 2])))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)12)), (arr_28 [i_8] [i_7] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)21)) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_7 - 1])))))))) ? (max((((/* implicit */int) var_3)), (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */int) ((signed char) arr_0 [i_0]))) & (arr_8 [i_8] [22] [i_8] [i_8])))));
                                arr_30 [i_8] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) max((min((var_16), (max((((/* implicit */int) (_Bool)1)), (var_17))))), (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)101))))));
                                var_28 = (!(((/* implicit */_Bool) ((unsigned int) max((-1004967205), (arr_29 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_0] [i_2]))))));
                                var_29 = ((/* implicit */short) -74348046);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((((2ULL) & (((/* implicit */unsigned long long int) var_1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) ? (((((/* implicit */int) min((var_6), ((unsigned short)61848)))) << (((min((268435455), (((/* implicit */int) (unsigned char)53)))) - (37))))) : (((((/* implicit */_Bool) min((var_2), (var_3)))) ? (((/* implicit */int) (short)1984)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3668)))))))));
}
