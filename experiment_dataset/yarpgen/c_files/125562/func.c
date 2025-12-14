/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125562
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
    var_11 |= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(arr_1 [i_0 + 1]))))));
        arr_2 [i_0] [i_0 + 1] = min((min((var_2), (var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_1)))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_4))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [18LL]))) ? (((/* implicit */unsigned long long int) max((arr_4 [2ULL]), (arr_4 [6LL])))) : (((8959291445255496198ULL) + (((/* implicit */unsigned long long int) arr_4 [(_Bool)1]))))));
        arr_5 [14ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) >> (((((/* implicit */int) (signed char)54)) - (32)))))))) ? (((((/* implicit */_Bool) arr_4 [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (((long long int) arr_3 [i_1] [18])))) : (var_9)));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */int) (short)8064)) : ((-(((/* implicit */int) (signed char)124))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [14] [i_4] [i_3 + 1]))) : (arr_17 [i_1])));
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_16 [i_1] [i_1])))))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_5))));
                            var_18 = (!(((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [i_3 + 1])));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_2] [i_3 - 1] [i_3 + 1])) ? (arr_19 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-30))))))))));
                            var_20 = ((signed char) arr_13 [i_3 - 2] [6LL] [i_3 + 1] [3ULL]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3])) ? (arr_13 [i_3 - 2] [i_3 - 1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))));
                        }
                        var_22 |= ((/* implicit */signed char) var_1);
                        var_23 |= ((/* implicit */signed char) arr_4 [i_4]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = arr_17 [i_1];
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_1] [i_7] [i_9]);
                        }
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8] [i_7 + 1] [i_7 + 3] [5LL] [i_7] [(signed char)19] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [12LL] [i_7 + 1] [i_7] [(signed char)5] [i_7] [i_7 - 1] [i_1])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                arr_33 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) arr_25 [i_10]);
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_0))))))));
                            var_27 -= ((/* implicit */unsigned char) arr_24 [i_10] [(signed char)16] [(_Bool)1]);
                        }
                    } 
                } 
                arr_40 [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) : (4294967295U)));
                /* LoopNest 2 */
                for (unsigned short i_13 = 3; i_13 < 18; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_13 - 2] [i_2] [i_10] [i_13 + 2] [15]))));
                            var_29 = ((/* implicit */unsigned char) ((((arr_36 [i_13 - 2] [i_13 - 1] [i_13] [i_13] [i_13 - 1] [i_13] [i_10]) + (2147483647))) << (((((arr_36 [i_13 - 2] [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 1] [i_13 + 1] [i_13]) + (1657792387))) - (21)))));
                            arr_46 [i_10] [i_1] [i_14] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_10] [i_2]))));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_30 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_37 [i_1] [i_1] [(signed char)13] [i_2] [(unsigned char)4])) : (((/* implicit */int) arr_37 [i_1] [i_2] [i_1] [i_15] [i_15])));
                var_31 = ((/* implicit */int) arr_25 [i_1]);
                var_32 -= ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((_Bool) (signed char)-1))) : (((/* implicit */int) ((_Bool) arr_24 [i_2] [i_2] [i_15]))))))));
            }
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            var_34 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [(_Bool)1] [i_16] [i_16] [i_16] [i_16])) <= (((/* implicit */int) arr_15 [i_16] [i_1] [i_16] [i_1] [i_1]))));
            arr_54 [16LL] [i_1] [14] &= ((/* implicit */short) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_16])) * (((/* implicit */int) (unsigned char)90))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_31 [i_1])) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_14 [i_16] [i_1] [i_16] [i_16])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_45 [i_1] [i_1] [i_16] [(unsigned short)14] [i_16] [i_16] [i_16]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_17 = 2; i_17 < 19; i_17 += 3) 
        {
            var_37 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_17] [i_17 + 1] [i_17 - 2] [i_17]))))));
            /* LoopSeq 3 */
            for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
            {
                arr_61 [i_18] [i_1] [i_1] [i_1] = arr_51 [i_1];
                var_38 = ((/* implicit */long long int) ((signed char) arr_42 [i_1] [i_1] [i_1] [i_17 + 1] [i_17 - 1] [i_18]));
                var_39 = ((/* implicit */unsigned char) var_5);
                arr_62 [i_1] [i_1] [i_18] = ((/* implicit */_Bool) min((((/* implicit */int) arr_34 [(unsigned char)6] [i_18] [i_17] [i_17] [i_1])), ((+(((int) arr_25 [i_1]))))));
            }
            for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
            {
                arr_65 [i_17 - 2] [i_17] [i_1] [i_17] = arr_63 [i_1];
                arr_66 [14ULL] [i_1] = ((/* implicit */long long int) min((arr_13 [i_1] [i_17 - 1] [i_17] [i_19]), (((/* implicit */unsigned long long int) var_3))));
            }
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */int) ((unsigned long long int) var_2));
                arr_69 [i_20] [i_1] [3U] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) -6210050967660072301LL)) && (((/* implicit */_Bool) (signed char)-118)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [0ULL] [i_1] [i_17 - 2] [i_1] [i_1]))) : (var_0)))));
                var_41 -= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_59 [i_20])))));
                arr_70 [(unsigned short)13] [i_1] [(unsigned short)13] = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_17 + 1] [i_1]);
            }
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                for (int i_22 = 1; i_22 < 17; i_22 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_23 = 4; i_23 < 19; i_23 += 4) /* same iter space */
                        {
                            arr_78 [19ULL] [i_17 + 1] [i_21] [i_22] [i_1] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_23 - 2] [i_22 + 2] [i_21] [15LL] [i_17 + 1] [i_1] [i_1])) ? (arr_32 [i_23] [i_1] [i_1]) : (((/* implicit */int) var_1))))))));
                            var_42 += ((/* implicit */long long int) ((_Bool) ((arr_59 [i_23]) ? (((/* implicit */int) arr_59 [i_23])) : (arr_76 [i_17 + 1] [i_22 - 1] [i_23] [i_23 - 3]))));
                        }
                        for (int i_24 = 4; i_24 < 19; i_24 += 4) /* same iter space */
                        {
                            var_43 -= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((unsigned int) (signed char)43)))) % ((-(((/* implicit */int) arr_16 [i_17] [16LL]))))));
                            var_44 += ((/* implicit */long long int) arr_59 [i_24]);
                            var_45 = max((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (arr_8 [i_17] [i_21] [(_Bool)1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) var_1)));
                        }
                        var_46 = ((((((/* implicit */_Bool) min((arr_68 [i_21] [(signed char)15]), (((/* implicit */unsigned long long int) arr_37 [i_1] [i_17] [i_17 + 1] [i_21] [13LL]))))) ? (((/* implicit */int) arr_77 [i_1] [(signed char)8] [i_17 - 1] [i_17] [i_17] [(signed char)5])) : (((/* implicit */int) ((arr_22 [i_1] [i_17] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (var_3)))))));
                    }
                } 
            } 
            var_47 -= ((/* implicit */unsigned int) min((2758341006443899733LL), (((/* implicit */long long int) (_Bool)0))));
        }
    }
    var_48 = ((/* implicit */int) var_2);
}
