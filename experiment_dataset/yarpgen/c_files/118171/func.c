/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118171
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), ((-(-1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)14157))))) + (max((max((((/* implicit */long long int) var_1)), (arr_1 [(unsigned short)7]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-103)), (33554431U))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) 6284919701545860054LL))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3 + 1] [i_3] [i_1])) : ((+(-758386891)))))));
                            var_18 += ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)69)))) | ((-(arr_4 [i_3 + 1] [(unsigned short)2])))));
                            arr_12 [i_3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((long long int) arr_6 [i_2] [i_1]));
                            var_19 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58563))));
                            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 2] [i_3] [(signed char)10] [i_3 + 2] [i_3 + 2])) ? (2147483647) : (((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 - 1]))))), (((((/* implicit */_Bool) max((-1), (((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */long long int) var_14))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_7 [i_1])));
                    var_20 |= max((var_0), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_16 [5LL] [5LL])))) >= (arr_15 [i_0] [i_1] [i_4])))));
                    arr_18 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((arr_6 [i_1] [i_1]) | (((/* implicit */unsigned int) var_8))))) ? (var_8) : (((((/* implicit */int) (unsigned char)139)) | (16)))))));
                    var_21 = ((/* implicit */unsigned short) var_1);
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_0] |= ((/* implicit */long long int) (~((~(var_14)))));
                    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_8))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 2147483635);
                    var_23 |= ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_6]);
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) -6284919701545860045LL)))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)128));
                            var_25 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_2)))))) : (((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_7] [i_7] [i_8])) | (var_11)))))));
                            var_26 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) max((var_14), (((/* implicit */int) var_13))))) + (((((/* implicit */_Bool) (signed char)-119)) ? (arr_1 [i_1]) : (1269197972116498488LL))))), (((/* implicit */long long int) (signed char)122))));
                            arr_32 [7LL] [7LL] [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned short) var_4));
                            var_27 = ((/* implicit */int) arr_20 [i_8] [i_8] [i_7]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    for (long long int i_12 = 3; i_12 < 7; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (~(min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -6822987381686848444LL))))))))))));
                            var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((((-(((/* implicit */int) var_13)))) * (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)93))));
                        }
                    } 
                } 
                arr_46 [i_9] [8LL] [i_10] = var_7;
                arr_47 [2U] = ((/* implicit */int) max((max((max((((/* implicit */unsigned short) (signed char)-14)), (var_0))), (((/* implicit */unsigned short) var_5)))), (var_9)));
            }
        } 
    } 
}
