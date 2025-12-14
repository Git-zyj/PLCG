/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13299
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_2] [i_1] = ((/* implicit */_Bool) arr_6 [i_2]);
                    arr_11 [i_1] [(signed char)20] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1] [i_0 + 3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])))))))) || ((!(((/* implicit */_Bool) arr_4 [(signed char)4]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_0 + 3] [i_1] [i_0 + 3] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_1])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_2] [i_4]))))) ? (((((/* implicit */int) var_12)) % (((((/* implicit */int) arr_8 [i_4] [9U] [(unsigned short)3])) % (((/* implicit */int) arr_4 [18LL])))))) : (((((((((/* implicit */int) var_11)) ^ (arr_9 [i_2] [i_4]))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_14)))))))));
                                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_14))))), (var_14))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(unsigned short)19] [(signed char)9] [i_1] [i_0])) * ((-(((/* implicit */int) var_15)))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_14);
                                var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [2ULL] [i_1] [(signed char)13] [i_2] [i_5] [i_6] [i_6])) | (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_8 [i_0] [i_2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_2]))))))) : (((/* implicit */int) ((signed char) ((int) (unsigned char)56))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                {
                    arr_24 [(unsigned short)4] [(unsigned short)4] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_1] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_7])))) : ((+(arr_5 [i_1] [i_1] [i_0])))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_7] [i_1] [i_0 - 1])) != (((arr_6 [i_0 - 2]) + (arr_9 [i_0] [6U])))));
                    arr_25 [i_7] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_7]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_17)) ? (arr_15 [i_0] [i_0] [i_0] [i_1] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_0 + 4] [i_0 + 4])))))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_34 [i_0 + 4] [i_0 + 1] [(unsigned char)13] [i_0 + 4] [i_0 + 4] [i_9] [i_10] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_1])) ? (arr_23 [i_10] [i_8 - 2] [(unsigned short)4]) : (((/* implicit */int) arr_21 [i_10] [i_9] [i_8] [(unsigned char)0] [i_1] [i_0]))))));
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 + 4])) ? ((~(arr_3 [(unsigned char)11]))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_4)) - (77)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))))))));
    var_25 = var_9;
}
