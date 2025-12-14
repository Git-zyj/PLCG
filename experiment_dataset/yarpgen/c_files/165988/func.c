/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165988
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (64)))));
        var_20 = ((/* implicit */int) ((unsigned short) (-(6926243098694977494LL))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [7] = ((((/* implicit */_Bool) (+((+(6926243098694977494LL)))))) ? (((/* implicit */int) ((signed char) -6926243098694977494LL))) : ((~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])))));
        var_21 = ((/* implicit */unsigned short) (((+((-(12769674355826920425ULL))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) (unsigned char)234))), ((+(var_9))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((signed char) var_0));
        arr_8 [(signed char)9] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
        var_23 |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 1])) : (-1442095547)))) ? (var_18) : (((/* implicit */int) var_4)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    var_24 = -6926243098694977494LL;
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_5] = ((/* implicit */unsigned char) ((8165773151213542586ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_5] [i_2 + 1] [i_2])) == (((/* implicit */int) (short)32767))))))));
                            arr_21 [i_2 + 2] [(unsigned short)3] [(unsigned short)10] [i_4] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14968)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_17 [i_5]))))) : (((arr_17 [i_5]) >> (((/* implicit */int) (_Bool)1))))));
                            var_25 = ((((/* implicit */_Bool) min((((/* implicit */int) ((385484264U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5600)))))), (max((2147483647), (((/* implicit */int) (unsigned char)90))))))) ? (min((((/* implicit */long long int) (unsigned short)64402)), (((arr_15 [i_2 - 1] [i_3] [i_4 - 1] [i_5] [i_6 - 2]) % (((/* implicit */long long int) ((/* implicit */int) var_16))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18197))));
                            var_26 = ((/* implicit */unsigned int) (~(min((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (unsigned short)50568)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)14960))))))));
                            arr_22 [i_2] [i_3 + 2] [i_5] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (var_15) : (18014398509481983ULL)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 902606853992759920LL)) ? (((/* implicit */int) (unsigned short)32563)) : (((/* implicit */int) var_8)))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_3] [i_4] [6ULL] &= ((/* implicit */long long int) arr_23 [11U] [i_3] [i_4] [(unsigned char)10] [i_7]);
                            arr_26 [i_5] [i_3] [i_3] [i_4] [i_3] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) var_6);
                            arr_31 [i_5] [i_8] [i_5 + 2] [i_4] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (max((max((16618078693708102396ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((-592499392), (((/* implicit */int) var_7)))))))));
                            arr_32 [i_2 + 2] [i_3 - 1] [(unsigned short)8] [i_5 + 1] [i_2 + 2] &= ((/* implicit */unsigned short) var_11);
                            arr_33 [i_5] = ((/* implicit */unsigned char) (unsigned short)5);
                        }
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_37 [i_4] [i_3] [i_4 + 1] [i_5 - 1] [i_9] [i_5] [i_3] = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) (unsigned char)227)), (18446744073709551606ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << ((((~(((/* implicit */int) var_0)))) + (20315)))));
                            arr_38 [i_5] [i_3] = ((/* implicit */unsigned int) var_10);
                            arr_39 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_4 + 1] [i_3 + 1])))))));
                            arr_40 [i_3] [i_4 - 1] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_7 [i_9]))) & (max((((/* implicit */int) (_Bool)1)), (arr_30 [i_2 + 1] [i_5])))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            arr_43 [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((var_15) & (((/* implicit */unsigned long long int) var_18)))))));
                            var_28 = var_16;
                            arr_44 [i_10] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3379775370693996195ULL)))))) > ((~(196832357U))))))));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_15) << (((((/* implicit */int) arr_27 [i_2] [i_2 + 1] [i_2] [(unsigned short)6] [i_2])) + (4535)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) arr_1 [2ULL])))) : (var_11)));
    }
    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_16)), (var_3)));
        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) || (((/* implicit */_Bool) -1942784873))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
    {
        arr_49 [i_12] = ((/* implicit */signed char) ((2967960229U) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_12] [i_12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)255)))) / (var_18))))));
    }
}
