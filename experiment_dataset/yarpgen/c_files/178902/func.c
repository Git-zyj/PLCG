/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178902
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
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) & (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_13))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_1] [i_1] [i_2]))) : (arr_4 [i_0]))) << (((arr_8 [(unsigned short)1] [i_4 - 1]) + (1246119447237813501LL)))));
                            arr_13 [i_2] [i_3] [i_3] |= ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (arr_5 [i_3] [i_1] [i_2]) : (arr_5 [i_3] [(short)3] [i_0])));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [10] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_1])));
                            var_19 = (unsigned char)42;
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_3] [i_3] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)58760)) % (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) max((var_20), ((-(((/* implicit */int) ((short) (_Bool)1)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_1] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 - 1] [i_1] [i_5 - 1] [i_5] [i_1] [i_2]))) : (112U)));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)2] [i_5] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_5] [i_2] [i_5 - 1])) : (((/* implicit */int) arr_10 [3LL] [3LL] [3LL] [3LL] [i_5 - 1]))));
                        }
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_1]))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_3] [i_3] [4] [i_1] [i_3] [i_0]))));
                        arr_19 [i_1] [i_1] [6U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_4 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_25 = ((/* implicit */unsigned char) arr_20 [i_1] [i_1]);
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (arr_4 [i_0]) : (((/* implicit */long long int) -2056520383))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        arr_25 [i_1] = ((/* implicit */unsigned short) (-((((+(2056520385))) - (((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((-4511460132601077911LL) != (-1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_7])))))) : (min((((/* implicit */long long int) var_3)), (arr_2 [i_0] [i_2]))))))));
                    }
                    arr_26 [i_1] [i_1] [(short)2] = ((/* implicit */unsigned long long int) (!(min((((((/* implicit */_Bool) (unsigned short)18525)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), ((_Bool)1)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) max((var_29), (((min((var_5), ((~(((/* implicit */int) var_2)))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1353633772)) && (((/* implicit */_Bool) var_2))))))))));
}
