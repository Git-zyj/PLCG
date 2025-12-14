/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168925
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((max((arr_1 [0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 16U)) / (9037069862955913393LL)))))) << ((((-(((((/* implicit */_Bool) 1464235467032389447ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))))) - (18446744073709534612ULL))))))));
                    arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [(signed char)5] [13] [3LL] [i_0] [(unsigned char)7])))))));
                        var_14 *= ((/* implicit */unsigned char) var_1);
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_9 [i_0] [i_0] [(signed char)11] [(_Bool)1]));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))))), (max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) (signed char)-101))))))))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_16 += ((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_0]);
                        arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)8] [i_2])) : (var_10)))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) min((arr_3 [(unsigned char)5] [i_4]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (926788619)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(short)2] [i_0])) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)152)))))))))));
                    }
                }
            } 
        } 
        arr_14 [5ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26))));
        arr_15 [i_0] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [(unsigned short)11] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) (short)14872)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (arr_4 [i_0] [i_0] [i_0])))))) - (((max((7595403278878742054ULL), (((/* implicit */unsigned long long int) -926788611)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [0U] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    }
    for (int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) max((-926788619), (((/* implicit */int) arr_9 [i_5] [i_5] [13ULL] [i_5]))))) != (-535573137751824619LL))))));
        arr_19 [i_5] = var_6;
    }
    var_17 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
}
