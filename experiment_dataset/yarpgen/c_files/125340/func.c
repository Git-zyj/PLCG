/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125340
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
    var_16 = ((/* implicit */int) ((_Bool) min((max((var_3), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_12)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) (unsigned char)250);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        arr_4 [i_0] = ((((/* implicit */_Bool) var_1)) ? (2699416682602708709LL) : (((/* implicit */long long int) (+((-(-915172920)))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12243)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)31491))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)250))))) : (((((/* implicit */long long int) arr_5 [i_1])) % (var_4))))))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9223372036854775793LL)))) ? (min((((/* implicit */long long int) -386168229)), ((~(var_12))))) : (((/* implicit */long long int) arr_5 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_14 [i_2] = arr_11 [i_4];
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_18 [i_2] [i_3] [i_5] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_4 - 2] [i_4 + 1])))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */long long int) min((386168220), (((/* implicit */int) arr_17 [i_2] [i_3]))))), (9223372036854775807LL))))));
                        arr_19 [i_4 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_2] [i_3])), (arr_5 [i_3])))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((3434416132U), (((/* implicit */unsigned int) (short)22005))))) <= (-2699416682602708712LL))))) : (((((-9223372036854775793LL) <= (arr_6 [i_3]))) ? (((/* implicit */long long int) (-(arr_11 [i_2])))) : (arr_15 [i_2] [i_3] [i_4 + 1] [i_5] [i_5])))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            arr_24 [i_2] [i_3] = ((/* implicit */unsigned char) min((arr_9 [i_7]), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_8 [i_3])))))))));
                            var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1131988217U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_4] [i_2])))))));
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_22 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_25 [i_4]))))) ? (((/* implicit */int) max(((unsigned short)31318), (((/* implicit */unsigned short) arr_8 [i_4]))))) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_4 - 1]))))));
                            arr_28 [i_2] [i_3] [i_4 - 1] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) (unsigned char)57);
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_26 [i_2] [i_3] [i_4] [i_6] [i_9] [i_6] [i_4 + 1]), (arr_26 [i_2] [i_3] [i_4 - 1] [i_6] [i_9] [i_2] [i_4 - 2])))), (((((((/* implicit */_Bool) (short)8219)) ? (((/* implicit */unsigned int) 2147483647)) : (643588761U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_6] [i_4] [i_3] [i_2]))) <= (var_4)))))))));
                            arr_31 [i_2] [i_3] [i_4 - 2] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)39))));
                        }
                        for (short i_10 = 4; i_10 < 21; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */int) (unsigned short)57845);
                            var_25 = ((/* implicit */int) arr_27 [i_2] [i_3] [i_4] [i_6] [i_6] [i_10 + 2] [i_10]);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((-9223372036854775793LL) % (var_12)))))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_6]) <= (((/* implicit */int) arr_21 [i_2] [i_4] [i_6] [i_10])))))) : (max((((/* implicit */unsigned int) arr_22 [i_2])), (4294967295U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_2] [i_2]))))) ? (((int) 4294967295U)) : ((+(((/* implicit */int) (_Bool)1)))))))));
                        }
                        var_27 = ((/* implicit */int) (-(((long long int) arr_20 [i_2] [i_3] [i_4] [i_4] [i_6] [i_6]))));
                        var_28 = ((/* implicit */long long int) (+((-(((/* implicit */int) ((34292629504LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))))));
                        arr_34 [i_2] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_3] [i_6] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_11 [i_6])))) ? (7867486313577137986LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3])))));
                        var_29 &= ((/* implicit */int) min(((-((+(826457384662647836LL))))), (((/* implicit */long long int) (-((-(arr_13 [i_2] [i_2] [i_2]))))))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? ((-(((/* implicit */int) (signed char)102)))) : ((+(((/* implicit */int) var_14))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2])) : (var_4))), (((((/* implicit */_Bool) 643588761U)) ? (-7867486313577137987LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_2]))))))))));
    }
    var_31 = ((/* implicit */long long int) var_8);
}
