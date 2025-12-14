/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116288
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)29423)) ? (((((/* implicit */_Bool) -795119806)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) var_8)))) + (((((/* implicit */_Bool) var_0)) ? (-795119814) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    arr_11 [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */int) (short)-29439)) + (2147483647))) >> (((max((((/* implicit */unsigned int) -395814650)), (47567941U))) - (3899152640U))))), (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_8)))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) 18446744073709551615ULL));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((795119792) >> (((((/* implicit */int) (short)-15729)) + (15741))))) : (-795119835)));
                        var_14 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) -795119827)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) : (arr_10 [1U] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (1664011034U)))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */short) min((((((/* implicit */_Bool) 795119813)) ? (arr_10 [20U] [i_1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 3])) / (var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_2 + 1] [i_1 - 2])) ? (arr_5 [i_0] [i_1] [i_1 + 2]) : (((/* implicit */int) var_8)))))));
                        var_16 = ((/* implicit */unsigned char) ((short) var_2));
                    }
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (max((-795119816), (((/* implicit */int) var_11)))))))));
                    var_18 -= ((/* implicit */short) min((min((var_3), (arr_5 [i_1 - 1] [i_1 - 1] [i_0]))), (arr_5 [i_5] [i_1 + 2] [i_5])));
                    var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)-29424)))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_1])) > (((/* implicit */int) arr_9 [i_1] [i_0]))))) ^ (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_9)));
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    arr_27 [i_6] [i_6] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_6] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_30 [i_7] [i_7] [i_6] [i_1 - 2] [i_0])))) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_11)))) * (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [(signed char)8] [i_0] [i_8 + 2] [i_8 - 1] [i_8 - 1]))))))));
                                var_20 *= ((/* implicit */signed char) 524287);
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) < (var_10)))))));
                                arr_34 [i_6] [i_7] [i_6 - 1] [i_1 + 3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) ((var_6) <= (1912781318U))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_6] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) var_9);
                }
                arr_35 [15ULL] [15ULL] = ((/* implicit */signed char) arr_24 [i_1] [i_1] [i_1] [i_0]);
                var_23 = var_12;
            }
        } 
    } 
}
