/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119569
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 72057456598974464LL)) ? (((/* implicit */int) (unsigned short)1233)) : (((/* implicit */int) (unsigned short)23269)))))))), ((+((-(((/* implicit */int) var_9))))))));
                var_14 = ((/* implicit */unsigned short) ((((unsigned long long int) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) >> (((((/* implicit */int) max(((unsigned short)11533), (((/* implicit */unsigned short) (signed char)-100))))) - (65375)))));
            }
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) var_5)));
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_17 [i_6] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */signed char) (-(arr_11 [i_5] [i_5 - 1] [i_4] [i_6])));
                            var_16 = ((/* implicit */long long int) min((var_16), (arr_13 [i_6 + 2] [i_6] [i_5 + 2] [i_4] [i_4] [i_4])));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) & (arr_11 [10LL] [i_3] [i_2] [i_3])));
            arr_18 [i_3] = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) var_10)) : (var_11)))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) << ((((~(((/* implicit */int) arr_12 [i_2] [i_7] [i_7] [i_2])))) + (38968)))));
            arr_21 [i_2] = ((/* implicit */unsigned short) var_1);
            arr_22 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2]))));
        }
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    arr_28 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81)))))) > (arr_27 [i_9])))) << ((((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])))) - (38907)))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (unsigned short)64302))));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_31 [i_10] [18LL] [18LL] [i_9] = var_1;
                        var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4611685949707911168LL))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_9]);
                        var_22 ^= ((arr_15 [i_2] [i_11 - 1] [i_2] [i_11 - 1]) != (((/* implicit */long long int) (-(((/* implicit */int) var_5))))));
                        arr_36 [i_2] [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */signed char) var_12);
                    }
                    /* vectorizable */
                    for (long long int i_12 = 2; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) (~(arr_32 [i_2] [i_2] [i_2] [i_12 + 1])));
                        arr_40 [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12] |= ((/* implicit */long long int) ((arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) == (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_11 [i_2] [i_8] [i_8] [i_12])))));
                    }
                    for (long long int i_13 = 2; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) arr_16 [i_2] [i_9]);
                        var_25 = var_6;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (_Bool)0);
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4735893868872505043LL)))) ? (-1606420455859649419LL) : (var_3)));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_2])) ? (((/* implicit */int) arr_16 [i_8] [i_9])) : (((/* implicit */int) var_8)))))));
                            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) >= ((-(arr_39 [i_2] [i_9] [i_14] [i_15])))));
                        }
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
                        {
                            arr_50 [i_16] [i_16] = ((/* implicit */unsigned short) (~(arr_43 [i_2] [i_2] [i_9] [i_9] [i_14] [i_16])));
                            arr_51 [i_8] [(unsigned short)17] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)60314)) ^ (((/* implicit */int) (unsigned short)5230))));
                            var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((4869229875317385782LL), (arr_23 [i_9] [i_9]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
                            var_31 = ((/* implicit */_Bool) var_11);
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_49 [0ULL] [i_8] [i_8] [i_8]))));
                            var_33 = ((((((/* implicit */_Bool) 281474972516352LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17] [i_14] [i_9] [19LL] [i_2] [i_2]))) : (var_6))) * (((arr_38 [i_14] [i_14] [i_8] [i_2]) / (7778659646744844696LL))));
                            arr_54 [i_2] [i_8] [i_9] [i_2] [i_17] = ((/* implicit */long long int) (unsigned short)38769);
                        }
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) ((signed char) var_0));
                            var_35 &= ((/* implicit */signed char) arr_41 [i_8] [i_8] [i_14]);
                            arr_57 [i_18] [i_9] [i_14] [i_9] [i_9] [i_8] [i_2] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */int) (!((_Bool)1)))), ((+(((/* implicit */int) (unsigned short)1233)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) & (((/* implicit */unsigned long long int) (~(var_6))))))) ? (((/* implicit */int) (signed char)49)) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)120)), (arr_60 [i_2] [i_9] [i_2] [i_9] [i_9])))))))))));
                            var_38 = arr_23 [i_9] [i_14];
                            var_39 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_38 [i_19] [i_14] [i_2] [i_2])))), (((max((arr_37 [i_9] [i_19]), (((/* implicit */unsigned long long int) arr_23 [i_8] [(signed char)1])))) % (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))));
                            var_40 = ((/* implicit */unsigned short) -307556881818726271LL);
                        }
                    }
                    arr_61 [i_9] [i_9] [i_8] [i_2] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        var_41 = ((/* implicit */long long int) min((var_41), (((((((((/* implicit */_Bool) var_5)) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_26 [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))))))))));
    }
    /* vectorizable */
    for (signed char i_20 = 3; i_20 < 14; i_20 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */_Bool) (-(arr_37 [i_20] [i_20 - 1])));
        var_43 = (+(arr_56 [i_20 + 2] [i_20 - 1]));
    }
    for (signed char i_21 = 3; i_21 < 14; i_21 += 3) /* same iter space */
    {
        arr_67 [i_21] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_34 [i_21] [i_21] [i_21 - 2]))) ? (((/* implicit */int) arr_16 [i_21] [i_21])) : (((/* implicit */int) arr_60 [i_21 + 1] [i_21 + 3] [i_21] [i_21] [i_21]))))), (max((((/* implicit */unsigned long long int) max(((unsigned short)47611), (((/* implicit */unsigned short) arr_65 [i_21]))))), (arr_66 [i_21])))));
        arr_68 [i_21] [i_21] = ((/* implicit */unsigned long long int) max(((+(((8251844324644263758LL) - (6368053966083629438LL))))), (4868416318310009467LL)));
        var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
        arr_69 [i_21] = ((/* implicit */_Bool) var_9);
    }
}
