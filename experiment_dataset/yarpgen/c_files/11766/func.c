/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11766
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 63ULL)) ? (737336882U) : (((/* implicit */unsigned int) -1)))))))), ((-(((var_6) | (((/* implicit */unsigned long long int) var_5)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) var_5);
                arr_4 [(signed char)18] [i_1] [(signed char)18] |= ((max((((/* implicit */unsigned int) (!(var_10)))), (((((/* implicit */_Bool) arr_0 [(signed char)2] [(signed char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [6U] [6U]))))) % (min((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [10LL])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2ULL]))))), (arr_0 [10ULL] [i_1]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [13ULL] [i_0]))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65522)), (2894080461U)))) ? (max((((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_1])))), (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 1])))) : (min((((((/* implicit */int) var_0)) | (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) 3503199988U)) ? (((/* implicit */int) (signed char)90)) : (-1)))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [2] [i_3] [i_1])) : (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(arr_1 [i_0]))))))) ? (min((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3]))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1]))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_0])))))));
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_3] [i_1] [i_3 - 2] [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3 - 2] [(_Bool)1])) ? (var_11) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_3 - 2] [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_8 [i_0] [(unsigned short)5] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) : (((((/* implicit */_Bool) (~(var_11)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_0)))))))));
                    var_21 = ((/* implicit */long long int) (-(arr_6 [i_0] [i_0] [i_5])));
                    var_22 -= ((/* implicit */_Bool) var_3);
                }
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    var_23 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) var_10)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10))))))));
                    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_6])))) <= (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0])))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_7] = var_5;
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((791767307U) >> (((((/* implicit */int) arr_7 [20] [i_1] [i_1] [i_7])) - (19416)))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7] [i_7])) ? (arr_15 [i_0] [i_1] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))))));
                    arr_22 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                }
                var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15224413640064666176ULL)) ? (((/* implicit */int) (_Bool)1)) : (268435454)))), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
}
