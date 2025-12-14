/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186913
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
    var_11 = (-(((/* implicit */int) var_5)));
    var_12 = var_10;
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((_Bool) (-(arr_2 [(unsigned short)3] [i_1])));
                arr_6 [i_0] [i_1] [i_0] = arr_3 [i_1] [i_0] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 += ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_7)))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_18 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) var_6)))));
                        var_15 *= ((/* implicit */long long int) 1530679255);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_6] [i_4 - 1] [i_4] [7LL] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_19 [i_2] [i_4 - 1] [i_2] [i_6] [2ULL] [i_6])) : (((/* implicit */int) arr_16 [i_3] [i_4 - 1] [i_2] [0U] [i_4] [i_3]))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 334867157)) / (10424462944507695879ULL)));
                        arr_22 [i_2] [i_3] [i_3] [i_2] [i_6] [i_4] = ((_Bool) arr_16 [2ULL] [i_6] [(short)0] [i_4 - 1] [i_4 - 1] [i_2]);
                        var_18 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_2 [i_4 - 1] [i_3])))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4 - 1])) >= (((int) 683389136))));
                            var_20 -= ((/* implicit */unsigned int) var_8);
                        }
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) ((((/* implicit */int) ((short) arr_10 [i_2] [i_2]))) >= ((-(((/* implicit */int) var_8))))))) << (((arr_23 [i_2]) - (15617281469572952652ULL)))))));
        var_22 = ((/* implicit */unsigned char) min((min(((-(((/* implicit */int) (unsigned char)94)))), (((/* implicit */int) (signed char)66)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2716241079U)))))));
        var_23 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [2]))))));
        var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (8022281129201855736ULL)))));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned int) ((((_Bool) var_3)) ? ((+(2784340115663559182ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        var_26 = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */short) (((+(((((/* implicit */int) (signed char)123)) * (((/* implicit */int) var_9)))))) | (((((/* implicit */_Bool) arr_17 [(_Bool)1])) ? (((((-1164124608) + (2147483647))) << (((((((/* implicit */int) (signed char)-69)) + (100))) - (30))))) : ((+(((/* implicit */int) (_Bool)0))))))));
                                var_28 = ((/* implicit */int) ((unsigned int) var_2));
                                arr_40 [10] [i_9] [10] [10] [10] = ((unsigned long long int) (+(((int) (signed char)7))));
                                var_29 = ((/* implicit */unsigned long long int) (+(min((arr_1 [i_10]), (((/* implicit */int) ((_Bool) 10660960828736854433ULL)))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] = ((/* implicit */long long int) arr_19 [i_10] [i_10] [i_10] [i_9] [(short)8] [i_8]);
                    arr_42 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (-(arr_2 [i_9] [i_8])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                arr_48 [i_13] [(_Bool)1] [i_14] = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_8] [i_13]));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_30 -= ((((((/* implicit */_Bool) -1951873484)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_0))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_15] [i_15] [i_15])) ? (1427109266) : (arr_1 [i_14])))));
                    var_31 += ((/* implicit */short) (-(-591287442)));
                    arr_51 [10ULL] [i_13] [i_13] [i_13] [10U] = ((/* implicit */_Bool) ((arr_32 [i_13]) % (arr_32 [6])));
                }
            }
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_43 [i_8] [i_13])) ? (((/* implicit */int) arr_12 [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_8] [i_8])))))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_8] [i_13])) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_10))))))));
        }
        for (unsigned int i_16 = 1; i_16 < 10; i_16 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_61 [i_8] [i_16] [i_8] = ((/* implicit */unsigned char) arr_34 [i_8] [i_16]);
                            var_33 = ((/* implicit */unsigned short) (-((-(1258947029)))));
                            var_34 -= ((/* implicit */short) ((((((/* implicit */_Bool) 10424462944507695853ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-1)), (-964766260)))) : (1824773396U))) + ((-(134217728U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        {
                            arr_68 [i_16] [(short)10] [i_17] [i_20] [i_17] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_16] [i_16 + 1] [i_16] [i_8])), (arr_31 [i_16] [i_16] [i_16])))) ? (((unsigned int) arr_66 [i_20 - 1] [i_16 - 1] [i_17] [10] [i_21])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (arr_1 [i_16]))))))))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((int) ((arr_67 [i_8] [i_16 - 1] [i_17] [i_8] [i_21]) / (arr_67 [i_8] [i_16 + 1] [i_17] [i_8] [i_21])))))));
                            var_36 *= ((/* implicit */unsigned long long int) ((unsigned int) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) arr_59 [(_Bool)1] [i_17] [i_20] [i_8])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 11; i_22 += 4) 
                {
                    for (unsigned int i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */int) (+(11890706230604225822ULL)));
                            var_38 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                            var_39 = ((/* implicit */signed char) arr_0 [11ULL]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    for (long long int i_26 = 2; i_26 < 10; i_26 += 4) 
                    {
                        {
                            arr_83 [i_24] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_80 [i_16] [i_16 - 1]) : (arr_80 [i_16] [i_16 + 1])));
                            arr_84 [i_8] [i_16] [i_26] [i_25] [i_16] [i_16] = ((((/* implicit */_Bool) arr_43 [i_16] [i_16])) ? (((/* implicit */int) ((_Bool) arr_8 [i_16] [i_16]))) : (((/* implicit */int) arr_3 [i_8] [i_25] [i_24])));
                            arr_85 [i_16] [i_26 + 1] [i_25] [i_24] [9LL] [1ULL] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_50 [i_16 - 1] [i_26] [7ULL] [i_26 - 1] [5ULL] [i_16]))));
                        }
                    } 
                } 
                var_40 = (signed char)123;
            }
            var_41 -= ((/* implicit */signed char) arr_74 [i_16 + 1] [i_16 + 1] [i_16] [i_16]);
        }
    }
}
