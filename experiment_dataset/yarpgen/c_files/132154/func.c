/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132154
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
    var_16 = ((/* implicit */signed char) var_12);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), (min((((/* implicit */unsigned char) var_10)), (var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (var_13))))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    var_19 = ((/* implicit */signed char) min((var_15), (((/* implicit */short) var_14))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_0), (((/* implicit */signed char) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) (unsigned short)57751))))))));
                        var_20 *= ((/* implicit */signed char) var_7);
                        var_21 = ((/* implicit */unsigned int) max((var_21), ((~((((~(22U))) << (((var_7) - (2290140304U)))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((max((arr_5 [i_0]), (((/* implicit */long long int) var_7)))) >> ((((+(arr_5 [i_0]))) + (7145259345655240594LL)))))) : (((/* implicit */_Bool) ((max((arr_5 [i_0]), (((/* implicit */long long int) var_7)))) >> ((((((+(arr_5 [i_0]))) - (7145259345655240594LL))) + (2870367353030469092LL))))));
                        arr_12 [9ULL] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? ((+(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_4))))));
                        arr_16 [i_4] [i_0] [i_0] [i_0] = var_4;
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_9 [i_1] [i_0] [i_2 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))));
                        arr_17 [0LL] [i_0] [i_2] = ((/* implicit */unsigned char) (((!(var_13))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_15))))) : (arr_3 [i_0])));
                    }
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_14), (((/* implicit */unsigned char) var_1))))), (((var_13) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2]))) : (((/* implicit */unsigned long long int) var_3))));
                    arr_19 [i_1] &= ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_23 [i_5] [i_0] [i_0] [(signed char)1] = ((/* implicit */short) max(((+(min((((/* implicit */int) var_10)), (var_2))))), (((var_5) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_0))))));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7791))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(var_6)));
                        var_25 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_6] [i_1] [i_1]);
                        arr_28 [i_0] [i_1] [i_2] [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)57751))));
                    }
                }
            } 
        } 
    } 
}
