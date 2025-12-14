/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119762
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((max((arr_11 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) + (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) min((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_2])))) & (var_12)));
                                var_19 = ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)1)));
                            }
                            for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                            {
                                arr_17 [i_1] = ((/* implicit */signed char) ((long long int) var_4));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_1 [i_0]) : (arr_1 [i_3])))) ? (((((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_10 [i_5] [i_1] [i_2] [i_1] [i_0]))) / (((var_5) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_3 [i_2] [i_1])), (var_3))), (max((((/* implicit */int) var_5)), (arr_2 [i_2] [i_5]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 67108863U)) ? (arr_10 [i_0] [i_2] [i_2] [i_3] [i_5]) : (((/* implicit */unsigned long long int) 57344)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (unsigned short)45775))))))))))));
                                var_22 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5] [i_0])) ? (arr_5 [i_5] [i_2] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))))) <= (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_5 [i_0] [i_1] [i_5] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))));
                            }
                            for (int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                            {
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-28), (((/* implicit */signed char) arr_13 [i_0] [i_1] [i_6] [i_2] [i_2])))))) : (-9223372036854775807LL)))) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */_Bool) arr_7 [i_6] [i_3] [i_2] [i_1])) ? (arr_18 [i_0] [i_1] [i_2] [i_0] [i_6] [i_2] [i_2]) : (arr_5 [i_0] [i_6] [i_6] [i_6])))));
                                arr_22 [i_0] [i_6] [i_6] [i_3] [i_1] = ((/* implicit */long long int) var_3);
                                arr_23 [i_6] [i_6] [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (11894112205501569385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_6]))))))))));
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((arr_12 [i_2] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41)))))) == (((/* implicit */int) arr_20 [i_0] [i_0]))));
                            }
                        }
                    } 
                } 
                arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))) - (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            {
                arr_32 [i_8] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_21 [i_7] [i_8] [i_7] [i_8] [i_7]);
                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31))));
                arr_33 [i_7] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) (signed char)52))), (((var_2) ? (((arr_13 [i_7] [i_7] [i_7] [i_8] [i_8 + 2]) ? (arr_1 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7] [i_7])) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_30 [i_7] [i_8])))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))), (((var_2) ? (13373967754772301778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) var_17))));
}
