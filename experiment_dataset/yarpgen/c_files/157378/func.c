/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157378
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_13)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : ((~(-2147483636)))))), ((~(min((((/* implicit */long long int) 2010546924U)), (var_3)))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2284420348U) > (((/* implicit */unsigned int) var_8)))))) % (max((((/* implicit */unsigned int) (short)31947)), (2010546940U)))))) : ((+(((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */long long int) var_8)) : (94450320467889058LL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0] [i_1 - 1] [i_2] [i_0 - 1]));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_3] &= ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_11 [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1]))))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(-9375869317203603LL))))));
                    }
                    for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */long long int) 2284420355U)) % (3259555330134628281LL)));
                        var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1]) > (arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 1])))), (min((arr_11 [i_0 - 2] [i_0 + 2] [i_0 + 2]), (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            arr_21 [i_1] [i_2] [i_4] [12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_5])) ? (((/* implicit */long long int) 2010546916U)) : (arr_15 [i_5 + 1] [i_4 + 1] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((arr_15 [i_2 - 1] [i_5 + 2] [i_5 + 1] [i_2 - 1]) + (9223372036854775807LL))) >> (((arr_15 [i_2 - 1] [i_5 - 2] [i_5] [i_5]) + (5011334882077334749LL))))))));
                            arr_22 [i_0 + 1] [i_1] [i_2] [i_4 + 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_20 [(signed char)12] [i_1] [(signed char)12] [(signed char)12] [14LL] [i_5 - 2] [14LL]))))))) || (((/* implicit */_Bool) var_13))));
                            arr_23 [i_0] [6LL] [i_1] [14ULL] [i_2 + 1] [i_4 - 2] [i_1] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_4] [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) (~(var_9)))) != (arr_19 [i_0] [i_0] [i_1] [i_0 + 1] [4]))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_1 + 1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_2 [i_0] [i_1 + 4]) / (var_5))) * (min((var_10), (((/* implicit */unsigned long long int) arr_6 [i_1]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 + 1] [i_4])))))))) : ((~(arr_6 [i_1])))));
                            var_20 = ((/* implicit */unsigned char) 2147483635);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0 - 2] [i_1 - 1] [i_1] [i_4 + 1] [i_1] = ((/* implicit */signed char) arr_10 [(unsigned short)4] [i_1] [i_2] [i_7]);
                            arr_30 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((-4204764392425321387LL), (((/* implicit */long long int) (-2147483647 - 1))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_1] [(signed char)4] [i_4 - 2]))) / (arr_19 [i_0] [i_1] [i_1] [i_4 + 1] [i_7])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_24 [i_1])))) * (max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2 - 1] [i_4 - 2] [i_1])), (18446744073709551604ULL))))) : (((/* implicit */unsigned long long int) max((-2147483646), (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_21 ^= ((/* implicit */int) ((unsigned char) ((long long int) arr_1 [i_1 - 1])));
                        arr_31 [i_1] = max((((/* implicit */int) (!(((/* implicit */_Bool) -2147483636))))), (((((/* implicit */int) ((unsigned char) arr_27 [i_0] [i_1] [6LL] [i_0 + 2] [i_0] [i_0 + 1]))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_28 [6] [i_1 + 1] [i_1] [i_2] [i_4])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((unsigned long long int) min((var_14), (((/* implicit */long long int) arr_27 [i_0] [i_1] [i_2] [(signed char)15] [i_8] [i_0]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(2010546922U)))) * (min((((/* implicit */long long int) arr_32 [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_8])), (arr_13 [i_0 - 2] [i_0] [13LL] [i_0 + 1]))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)105))))))));
                        var_24 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) var_13)))) ? ((~(arr_2 [i_0] [i_1]))) : (min((0ULL), (((/* implicit */unsigned long long int) 2284420372U))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_1)), (var_4))), (((/* implicit */unsigned int) var_13))))) || (((/* implicit */_Bool) var_2))));
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2284420369U))));
}
