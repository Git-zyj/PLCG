/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18906
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((max((var_15), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((1411765532) / (min((-1411765532), (((/* implicit */int) var_8)))))) * (((/* implicit */int) var_13))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) min((arr_5 [i_2]), (var_13)))) != (max((261512117), (((/* implicit */int) arr_5 [i_0]))))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_3 + 1] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((var_1), (var_13)))), (min((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1])))))) * (min((max((var_7), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1411765532)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_1] [i_1]))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            arr_20 [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_10 [i_4] [i_4] [i_4] [i_5] [i_4])))), (min((((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_4] [i_4] [i_4])), (var_15)))));
            arr_21 [i_5] [i_4] = ((/* implicit */signed char) ((((int) var_13)) != (((((/* implicit */int) var_1)) * (min((((/* implicit */int) var_0)), (var_6)))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_21 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) || (((/* implicit */_Bool) arr_0 [i_4]))))), ((+(((/* implicit */int) ((261512117) != (arr_8 [i_4] [i_4] [i_4] [i_5] [i_5] [i_4]))))))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    arr_28 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */short) var_7);
                    arr_29 [i_4] [i_4] [i_6] [i_7] &= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((signed char) var_12))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)8886)))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_5]))) != (var_7))))) * (((long long int) arr_13 [i_7] [i_5]))));
                }
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (+(1411765532))))) ? (var_14) : (((/* implicit */long long int) max((arr_24 [i_4] [i_4] [i_4] [i_4]), (arr_24 [i_4] [i_5] [i_4] [i_9]))))));
                        arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!(((((int) var_11)) != (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_5] [i_5] [i_4]))))));
                        var_24 &= ((/* implicit */unsigned long long int) var_2);
                    }
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_38 [i_4] [i_4] [i_4] [i_4] [i_8] [i_4] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-108)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) != ((~(((unsigned long long int) (signed char)-120))))));
                        arr_39 [i_10] [i_8] [i_6] [i_5] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) var_9))), (max((min((((/* implicit */unsigned long long int) 1411765532)), (var_4))), (((/* implicit */unsigned long long int) max((var_5), ((signed char)-64))))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(arr_16 [i_5]))), (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_8] [i_8] [i_6] [i_5] [i_4])) | (((/* implicit */int) arr_0 [i_6])))))))), (((((/* implicit */_Bool) var_0)) ? (min((var_15), (((/* implicit */unsigned long long int) arr_1 [i_4])))) : (((/* implicit */unsigned long long int) (~(var_10)))))))))));
                        var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) -1411765533))), (min((((/* implicit */unsigned long long int) ((signed char) var_10))), (min((arr_30 [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_35 [i_4] [i_5] [i_8]))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_27 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10)))))));
                        var_28 = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_8])) && (((/* implicit */_Bool) arr_22 [i_4]))))), (((signed char) min((arr_10 [i_4] [i_5] [i_5] [i_8] [i_11]), (((/* implicit */int) var_16)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */short) ((max((min((arr_9 [i_4] [i_5] [i_6] [i_8] [i_4] [i_12]), (((/* implicit */int) (signed char)-113)))), (((int) var_12)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9860346670769809998ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */int) var_12)), (var_11))) : (((/* implicit */int) max((var_16), (var_12))))))));
                        var_30 += ((/* implicit */int) var_9);
                    }
                }
                var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_4] [i_4])))) : (min((var_4), (((/* implicit */unsigned long long int) var_16)))))) != (((((/* implicit */_Bool) -432346813)) ? (arr_40 [i_5] [i_5] [i_4] [i_4] [i_4] [i_4]) : (max((var_17), (((/* implicit */unsigned long long int) var_18))))))));
                arr_47 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-120))))) : (((long long int) var_3))));
            }
            var_32 = ((/* implicit */unsigned char) arr_14 [i_4]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_51 [i_4] [i_5] [i_5] &= ((/* implicit */unsigned long long int) arr_36 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5] [i_13]);
                arr_52 [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2)))));
                arr_53 [i_5] = ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                var_33 = arr_0 [i_4];
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        for (short i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                arr_65 [i_4] [i_15] [i_17] = ((/* implicit */int) var_15);
                                arr_66 [i_4] [i_14] [i_15] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */int) (((+(((5098979208625708500ULL) * (((/* implicit */unsigned long long int) var_18)))))) * (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-113)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_18 = 1; i_18 < 8; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (34359738367LL)))) ? (min((((/* implicit */unsigned long long int) ((var_11) != (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned long long int) var_9)), (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((signed char) 1748113456))))))))));
                        arr_69 [i_4] [i_14] [i_4] [i_18] [i_18] [i_4] = ((/* implicit */signed char) ((short) ((min((var_15), (var_4))) * (((/* implicit */unsigned long long int) (-(-1152026231)))))));
                    }
                    /* vectorizable */
                    for (short i_19 = 1; i_19 < 8; i_19 += 3) 
                    {
                        var_35 = ((long long int) ((signed char) arr_36 [i_4] [i_4] [i_4] [i_4] [i_14] [i_15] [i_4]));
                        arr_73 [i_4] [i_4] [i_15] [i_19] [i_19] = ((/* implicit */long long int) (~(var_7)));
                    }
                    arr_74 [i_14] [i_14] [i_15] = ((/* implicit */signed char) min((((/* implicit */int) (short)15578)), (((int) max((arr_71 [i_14]), (((/* implicit */unsigned long long int) var_11)))))));
                }
            } 
        } 
    }
    for (signed char i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) && (((/* implicit */_Bool) var_2))))), (var_18)))) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_20] [i_20] [i_20])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_8))))), (min((6548070130495619639LL), (((/* implicit */long long int) var_6))))))));
        var_37 -= ((/* implicit */unsigned char) var_6);
        var_38 = ((/* implicit */int) min(((unsigned char)46), (((/* implicit */unsigned char) (signed char)69))));
        arr_78 [i_20] [i_20] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_57 [i_20] [i_20])) : (((/* implicit */int) var_9))))));
    }
    var_39 = ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) max((((/* implicit */short) var_13)), (((short) 596075324)))))));
    var_40 = ((/* implicit */int) var_5);
}
