/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112861
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 4237037277U)) ? (arr_3 [21U] [i_1] [22U]) : (((/* implicit */unsigned long long int) -3751682720053696940LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [(short)17] [2U]))))) / ((~(((unsigned long long int) var_6))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_0] = ((/* implicit */long long int) (unsigned char)3);
                                var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) min((var_0), (((/* implicit */long long int) arr_8 [i_0] [i_2] [(short)3] [i_4]))))))) * (max(((-(3616653938917185776LL))), (((/* implicit */long long int) (!(arr_5 [i_4] [i_3] [7LL] [i_1]))))))));
                                var_12 = ((/* implicit */long long int) (short)5871);
                                arr_14 [i_4] [i_3] [18LL] [17LL] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)19] [22LL]))) : (((long long int) (unsigned char)200)))));
                                arr_15 [i_0] [i_1] [13LL] [20LL] [0LL] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)12630)), (4237037256U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)10573)))))));
                                var_14 = ((/* implicit */_Bool) min((max((-9223372036854775799LL), (((/* implicit */long long int) 2226661659U)))), ((-(arr_18 [i_5 - 3] [i_5 + 1] [i_6] [i_5 - 3] [i_5] [i_5 + 3])))));
                                arr_21 [i_6] [i_1] [10U] [i_5] [(unsigned char)12] = ((/* implicit */unsigned char) arr_16 [(short)17] [i_0] [i_5] [i_5 - 2]);
                                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_6] [(unsigned char)19] [i_1] [i_0])), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [18LL] [i_6])))))), (max((arr_12 [(short)17] [(unsigned char)18] [i_2] [i_5] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_0 [i_5]))))))));
                                arr_22 [i_6] = ((/* implicit */_Bool) ((min((arr_20 [i_6] [i_5 + 1] [i_5 - 3] [i_5 - 3] [i_5 - 1] [i_5 + 2]), (arr_20 [i_6] [i_5 + 2] [i_5 + 3] [i_5 - 1] [i_5 - 2] [i_5 + 2]))) ? (min((min((-3616653938917185773LL), (var_2))), (((/* implicit */long long int) (unsigned char)238)))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [(short)11] [i_6])))));
                            }
                        } 
                    } 
                }
                arr_23 [i_1] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (var_8)))), (((arr_2 [3ULL]) * (arr_17 [i_0] [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((-4181289775716030789LL) / (min((3138092804948832607LL), (((/* implicit */long long int) arr_10 [(_Bool)1] [(unsigned char)7] [i_0] [i_0] [(short)3] [12LL] [21ULL])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_1);
    var_17 = ((/* implicit */long long int) ((((var_5) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */unsigned long long int) var_2))));
    var_18 = (~((((~(var_4))) | ((~(var_2))))));
}
