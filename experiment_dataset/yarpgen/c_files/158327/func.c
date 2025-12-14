/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158327
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]);
                            arr_11 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = min(((~(arr_5 [i_3] [i_3 - 1] [i_2 + 2] [i_0 + 1]))), (((/* implicit */long long int) ((signed char) arr_5 [i_3] [i_3 - 1] [i_2 + 2] [i_0 - 1]))));
                            arr_12 [6LL] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) var_16)), (var_12))), (var_10))), (min((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_0] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171)))))), (var_10)))));
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) 3424154079U);
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) var_13);
                var_18 *= ((/* implicit */unsigned long long int) (+(3424154079U)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) max((3424154079U), (((/* implicit */unsigned int) (unsigned char)84))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 3; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned char) var_7);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_7 - 3] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52356))) : (arr_22 [i_4] [i_7 - 2] [i_7] [i_7])));
                        arr_25 [i_7] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_7] [i_7] [i_7 - 3] [i_7]))));
                    }
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) ((arr_24 [i_6 - 2] [i_6] [i_8 + 1] [i_8]) ? (arr_27 [i_6 - 2] [i_8] [i_8 + 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))));
                        arr_28 [i_4] [i_5] [i_6] [i_8] = ((/* implicit */long long int) 1583558920U);
                        var_23 = (~(arr_22 [i_4] [i_6 - 2] [i_8 - 1] [i_8 - 2]));
                    }
                    arr_29 [i_4] = arr_26 [i_4] [i_5] [i_4] [i_4];
                    arr_30 [i_4] [i_4] = arr_26 [i_4] [i_5] [i_6] [i_6];
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */long long int) arr_32 [i_4] [i_5] [i_4] [i_4])) : (arr_21 [i_4] [i_4]))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_27 [i_4] [i_4] [i_5] [i_9]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_4] [i_4] [i_5] [i_9]))))), (arr_22 [i_4] [i_5] [i_5] [i_4])))) : ((-(((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_21 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_17))) ? (arr_33 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4] [i_4])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967293U)) % (var_1)))), (arr_17 [i_4])))));
                                var_27 = ((/* implicit */_Bool) (signed char)-54);
                                var_28 = ((/* implicit */signed char) (+((-(arr_37 [i_4] [i_4] [i_9] [i_10] [i_9])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5])) ? (var_11) : (var_9)))) ? (((((/* implicit */int) (unsigned char)171)) << (((((/* implicit */int) (unsigned char)89)) - (66))))) : (((/* implicit */int) arr_31 [i_9]))))));
                    var_30 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((long long int) var_15))), (7113819419159836722ULL)))));
                }
                var_31 = ((/* implicit */unsigned long long int) var_7);
                var_32 = ((/* implicit */unsigned int) arr_20 [i_4] [i_4] [i_5] [i_4]);
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_16);
}
