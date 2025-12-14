/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115344
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
    var_12 &= ((/* implicit */signed char) (+(var_4)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_3])) + (min((((arr_1 [i_0 - 1] [i_2]) << (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1))))));
                        var_14 = ((/* implicit */int) min((var_14), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((long long int) min(((+(2169399258059221086LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 13851399838978156223ULL)) ? (((/* implicit */int) (unsigned short)48048)) : (((/* implicit */int) (_Bool)0))))))));
                        arr_13 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1])))) ? (var_5) : ((+(((var_10) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) var_3))))))));
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2 - 2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9174230747562097418ULL))));
                        arr_17 [i_0] [i_2 - 1] [i_4] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_4 + 1] [i_4] [5U]);
                        arr_18 [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (arr_15 [i_1] [i_1] [i_4 + 3] [5ULL] [i_4] [3ULL])));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (min((6521868217768956666ULL), (((/* implicit */unsigned long long int) (unsigned short)47898)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_4 - 4])))));
                            arr_22 [i_0 - 1] [i_0] [(unsigned char)5] [i_0 - 1] = ((/* implicit */int) (signed char)55);
                            var_16 = ((/* implicit */_Bool) 13851399838978156223ULL);
                            var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_8 [5] [i_1] [i_1] [i_1] [i_1] [i_1])) - (960)))))) ? (((/* implicit */int) max(((unsigned short)17637), (((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) < (2ULL))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) var_4);
                            var_19 += ((/* implicit */unsigned int) var_0);
                        }
                    }
                    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_9 [i_0 - 1] [i_1] [i_2] [i_2 - 2]), (arr_9 [i_0 - 1] [i_2] [i_0 - 1] [i_2]))))));
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))) >> (((/* implicit */int) ((14ULL) != (arr_15 [i_0 - 1] [i_0] [i_2 + 1] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) var_9);
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_23 = ((/* implicit */int) arr_25 [i_0] [i_7] [i_7]);
            var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (9174230747562097411ULL) : (((/* implicit */unsigned long long int) 2009861316))));
            arr_28 [i_0 - 1] [8ULL] [8ULL] = ((/* implicit */unsigned int) var_9);
            var_25 = ((/* implicit */unsigned long long int) var_7);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_7])) + (((int) 749391493)))))));
        }
        arr_29 [i_0] = var_11;
    }
    var_27 = ((/* implicit */unsigned short) var_1);
}
