/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127522
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
    var_10 ^= ((/* implicit */short) -1406938906);
    var_11 = ((((/* implicit */_Bool) min((((unsigned long long int) var_1)), (var_8)))) ? (var_2) : (((/* implicit */unsigned long long int) 1406938910)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((max(((+(2675828656730698221ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1])))))));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_0 [(short)14] [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
                arr_7 [i_1] = ((/* implicit */short) ((((unsigned long long int) (!(((/* implicit */_Bool) -991812717))))) + (((((/* implicit */_Bool) min((268435455), (((/* implicit */int) (short)-17157))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (unsigned short)25641))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(short)13]))) : (var_1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((-1406938915), (arr_9 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0]), (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((unsigned long long int) 16983361203976735585ULL))))))) : (14401611920149268058ULL)));
                                arr_17 [i_4] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) 18446744073709551613ULL);
                                arr_18 [i_0] [i_2] &= ((/* implicit */signed char) ((unsigned long long int) arr_4 [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) 12861730705738352968ULL);
                                var_13 = ((/* implicit */int) max(((-(var_2))), (min((max((arr_22 [i_2]), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))))))));
                                var_14 = ((/* implicit */int) (-(arr_13 [i_0] [i_1] [9ULL] [i_2] [11ULL] [6ULL])));
                                arr_24 [i_0] [i_1] [15ULL] [i_1] [i_1] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))))))));
                            }
                        } 
                    } 
                    arr_25 [i_1] [i_2] [i_1] = 12861730705738352968ULL;
                    arr_26 [i_0] [15ULL] [i_2] [i_1] = ((13045266490983228889ULL) << (((-387463385) + (387463425))));
                }
            }
        } 
    } 
}
