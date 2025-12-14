/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150984
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_2))))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_19 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), ((~(arr_1 [i_0 + 1]))));
        arr_2 [i_0 - 1] [i_0] = arr_1 [i_0 - 1];
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (((/* implicit */unsigned int) 10)) : (min((2610671351U), (((/* implicit */unsigned int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((var_1) ? (min((((((/* implicit */int) (unsigned short)60106)) * (((/* implicit */int) (short)-29799)))), (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */int) arr_11 [i_1])))))) : (((/* implicit */int) arr_14 [20ULL] [1U] [i_1] [20ULL]))));
                        var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [6] [i_3] [i_2] [12LL]))));
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) arr_9 [i_2] [i_2]))), (var_2)));
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_1))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 7295616674230445440LL)))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_5] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) -5993169170046387523LL)), (arr_16 [i_5] [(signed char)14] [(signed char)14] [(signed char)8])))))))));
                var_25 += ((/* implicit */unsigned long long int) var_14);
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(28U)))) ? (min((min((((/* implicit */unsigned long long int) arr_22 [12U])), (arr_18 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                var_27 ^= ((/* implicit */int) var_13);
            }
            for (signed char i_7 = 4; i_7 < 22; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    arr_30 [i_1] [i_5] [i_1] [i_7 - 3] [i_8] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1]);
                }
                var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((int) -2061113520))) && (((/* implicit */_Bool) var_6)))), (arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7])));
                var_30 = ((/* implicit */unsigned short) var_9);
                var_31 = 9223372036854775807LL;
            }
            for (signed char i_9 = 4; i_9 < 22; i_9 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                arr_34 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
                var_33 ^= ((/* implicit */short) ((max((((/* implicit */long long int) max((((/* implicit */int) var_17)), (var_10)))), (min((arr_8 [i_9]), (((/* implicit */long long int) (short)8260)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_9] [i_1])))));
                var_34 = ((/* implicit */short) ((((((/* implicit */int) arr_27 [i_9 - 3] [i_9 - 3])) << (((/* implicit */int) arr_27 [i_9 - 1] [i_9 - 4])))) - (740803749)));
            }
            for (signed char i_10 = 4; i_10 < 22; i_10 += 2) /* same iter space */
            {
                arr_37 [i_1] [i_10] [8LL] [(signed char)14] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]))));
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_7 [i_1])) ? (1028159973U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
            }
            var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_5] [i_5] [i_5])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (arr_16 [i_5 + 3] [i_5 + 1] [i_5] [i_1])));
            var_37 |= ((/* implicit */unsigned long long int) (+(-1074450446)));
        }
        /* vectorizable */
        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */long long int) (~(arr_16 [i_11 + 2] [i_11 + 3] [i_1] [i_1])));
            arr_42 [i_1] [i_11] = ((/* implicit */unsigned long long int) ((long long int) ((short) (_Bool)1)));
            var_39 = ((/* implicit */_Bool) ((-1771826001006303575LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))));
            arr_43 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        }
        arr_44 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned char)19] [i_1])) ? (((/* implicit */unsigned int) (+(min((var_16), (((/* implicit */int) arr_31 [i_1] [i_1] [14LL] [i_1]))))))) : ((~(((((/* implicit */_Bool) arr_26 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
        arr_45 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned char)74))))));
    }
    /* LoopSeq 4 */
    for (int i_12 = 0; i_12 < 13; i_12 += 3) 
    {
        arr_48 [i_12] = ((/* implicit */unsigned short) (+(((var_1) ? (((/* implicit */int) arr_33 [i_12] [(_Bool)1] [(_Bool)1] [i_12])) : (((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_12]))))));
        arr_49 [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_27 [i_12] [i_12]), (arr_27 [i_12] [i_12]))))));
    }
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_40 += ((/* implicit */short) (+(7118946936674638052ULL)));
        var_41 = ((((arr_24 [i_13] [i_13] [i_13] [(_Bool)1]) ? (var_16) : (((/* implicit */int) var_2)))) & (((/* implicit */int) arr_23 [i_13] [i_13] [i_13] [i_13])));
        arr_53 [i_13] = ((/* implicit */int) (((+((+(var_15))))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_9 [i_13] [i_13]))))), (arr_20 [i_13] [i_13] [i_13]))))));
        var_42 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (-2061113519))), (((/* implicit */int) ((((/* implicit */int) arr_29 [i_13] [i_13] [i_13])) != (((/* implicit */int) arr_29 [i_13] [11ULL] [i_13])))))));
    }
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
    {
        var_43 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_32 [i_14] [i_14] [i_14]) : (arr_32 [(_Bool)1] [i_14] [i_14])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_51 [i_14]))))) : (arr_32 [(signed char)8] [i_14] [(unsigned short)6])));
        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_14])) ? (((((/* implicit */_Bool) arr_8 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [i_14]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
    }
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
    {
        arr_59 [i_15] = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_40 [i_15] [i_15])), ((~(((/* implicit */int) var_4))))))));
        var_45 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)32767))) ? (var_16) : ((+(((/* implicit */int) min((var_4), (arr_22 [i_15]))))))));
        arr_60 [(signed char)11] = ((/* implicit */unsigned long long int) arr_31 [i_15] [i_15] [i_15] [i_15]);
        arr_61 [i_15] = ((/* implicit */unsigned long long int) arr_54 [i_15]);
        arr_62 [i_15] = ((/* implicit */int) arr_6 [i_15] [i_15]);
    }
}
