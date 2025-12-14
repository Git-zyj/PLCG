/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112256
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) 2338410919491675469LL);
        arr_2 [i_0] = ((/* implicit */short) ((max((min((((/* implicit */long long int) (short)-13790)), (var_1))), (((((/* implicit */_Bool) 1361303894523936527LL)) ? (144115188075855868LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) / (max((-2234022162896522040LL), (((/* implicit */long long int) max((arr_1 [i_0] [i_0]), ((short)28661))))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */short) var_13);
        var_18 = var_2;
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (short)-30571))))))));
        var_19 ^= ((/* implicit */short) (((+(((arr_5 [(short)11]) ^ (var_7))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)8)) && ((!(((/* implicit */_Bool) (short)-6043))))))))));
        arr_7 [i_1] = min(((short)-18849), ((short)-1089));
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */short) arr_9 [(short)6] [(short)9]);
        /* LoopSeq 3 */
        for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (short)30570)) * (((/* implicit */int) arr_1 [i_3 - 2] [i_2]))))) * (((long long int) (short)-11783))));
            var_21 = ((/* implicit */short) (+(min((((/* implicit */long long int) (~(((/* implicit */int) (short)15317))))), (arr_5 [i_3 + 1])))));
        }
        for (short i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            arr_16 [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17207)) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (4909304328860910337LL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-16934)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)2] [i_4] [i_2])) ? (((/* implicit */int) arr_8 [i_4 - 2])) : (((/* implicit */int) (short)-23187))))))))) : (max((min((((/* implicit */long long int) (short)5)), (3626641380697857011LL))), (((/* implicit */long long int) ((short) (short)6973)))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                arr_19 [i_2] [i_2] [i_2] = var_16;
                var_22 -= ((/* implicit */short) max((((((((/* implicit */_Bool) (short)-1086)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : (var_13))) % (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-15318)))))), (var_6)));
                /* LoopSeq 2 */
                for (short i_6 = 4; i_6 < 9; i_6 += 4) 
                {
                    arr_24 [i_2] [(short)3] [i_2] [i_2] = arr_8 [i_6];
                    var_23 |= ((/* implicit */short) ((max((((/* implicit */long long int) (short)-29542)), (max((-8117064264084999205LL), (((/* implicit */long long int) var_8)))))) ^ (((long long int) 281474976710656LL))));
                    arr_25 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_17 [i_2] [7LL] [i_2] [i_2])), (arr_21 [i_5] [i_2])))))) ? (((/* implicit */int) (short)15317)) : ((+(((/* implicit */int) ((short) (short)1096)))))));
                }
                for (short i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        arr_31 [i_2] [i_8] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_12), (arr_22 [i_2] [i_2] [(short)2] [i_2])))) ? (arr_12 [i_2] [(short)9] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) > (((/* implicit */int) max(((short)-10435), ((short)29550)))))))));
                        var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_4 [(short)2])), (281474976710665LL))) * (((((/* implicit */long long int) ((/* implicit */int) (short)-29965))) / (arr_27 [2LL] [i_7] [i_7 + 1])))))) ? (((/* implicit */int) ((short) (short)-8192))) : (((/* implicit */int) ((((/* implicit */int) (short)369)) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (-281474976710636LL)))))))));
                        arr_32 [i_2] [i_2] [i_5] [i_7 - 1] [i_8] = ((/* implicit */long long int) max((((((/* implicit */int) ((short) arr_15 [i_2]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)5563))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (short)5563))) || (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) arr_29 [10LL] [i_4 + 2] [i_5] [i_7 - 1] [i_7 - 1]);
                        arr_35 [(short)4] [(short)4] [i_9] = ((/* implicit */short) ((long long int) (short)-8055));
                        arr_36 [i_2] [i_9] [i_2] [(short)5] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_5])) != (((/* implicit */int) var_12))));
                    }
                    arr_37 [i_2] [i_2] [i_4] [i_5] [i_7 + 2] [i_7 - 1] = ((arr_13 [i_4 + 2] [i_4 + 2]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)3194)) : (((/* implicit */int) (short)896))))) ? (arr_34 [i_2] [i_4 + 2] [i_5] [i_7] [i_2]) : (((((/* implicit */_Bool) arr_28 [i_5] [i_7 + 1] [i_5] [i_5] [i_5] [i_4 + 1] [i_5])) ? (var_7) : (2817031252745531379LL))))));
                }
                var_26 &= var_7;
            }
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            arr_41 [i_2] [i_10] [i_10] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 2384291923495643281LL))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_27 &= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-14993)) ? ((~((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) -3422235113997643386LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_16))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_43 [i_2] [i_10] [i_11])))))));
                    var_28 += ((/* implicit */long long int) ((short) max((-9223372036854775803LL), (((/* implicit */long long int) max((var_2), ((short)-22687)))))));
                }
                arr_48 [i_2] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_18 [i_2] [i_11]), ((short)13896)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)1672))))) : (((((/* implicit */int) (short)28759)) >> (((-2532273927226688158LL) + (2532273927226688185LL))))))) << (((arr_47 [i_2] [i_2] [i_2] [(short)10]) + (4042562170492478658LL)))));
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_10]))));
                /* LoopSeq 1 */
                for (short i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_54 [i_2] [i_2] [i_10] [i_11] [i_10] [i_14] = ((((/* implicit */_Bool) ((max((arr_39 [i_14] [7LL] [i_2]), (((/* implicit */long long int) var_4)))) - (((((/* implicit */_Bool) arr_43 [i_2] [i_13] [i_14])) ? (var_7) : (9223372036854775802LL)))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29873))));
                        var_30 = ((short) (short)32466);
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        arr_59 [i_11] [i_13] = ((/* implicit */short) (+(max((((-7424081715624293821LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)9]))))), (((((/* implicit */_Bool) arr_1 [i_11] [i_2])) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5)))))))));
                        arr_60 [i_11] [i_10] [i_11] [i_13] [i_10] = ((/* implicit */short) min((((long long int) -7213970649992122382LL)), (min((var_6), (arr_53 [i_2] [i_10] [i_13 + 1] [i_13] [i_13] [i_2])))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-14356)) < (((/* implicit */int) var_4))))) : (((/* implicit */int) arr_15 [i_2]))))) ? ((+(((/* implicit */int) arr_22 [7LL] [i_13] [i_11] [i_11])))) : (((/* implicit */int) (short)28005))));
                    }
                    arr_61 [i_2] [i_10] [i_11] [i_13] = ((/* implicit */short) (~(min((((/* implicit */int) (short)14341)), (((((/* implicit */int) (short)-11435)) * (((/* implicit */int) arr_42 [i_11]))))))));
                    arr_62 [5LL] [i_10] [i_10] = arr_8 [i_2];
                    arr_63 [i_2] [i_11] [i_13 + 1] = max((((long long int) arr_28 [i_11] [i_13 + 1] [i_11] [6LL] [i_11] [i_2] [i_11])), (min((((/* implicit */long long int) arr_23 [i_11] [i_13 - 1] [(short)7] [i_13 + 1] [i_13 - 1])), (max((var_6), (9223372036854775807LL))))));
                    arr_64 [i_13] [i_13] [i_11] [i_10] [0LL] [4LL] = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_12)) ? (5648256129615276947LL) : (arr_47 [i_13 - 1] [i_11] [i_10] [i_2]))))) - (-5896521985533808912LL)));
                }
            }
            arr_65 [i_10] = ((/* implicit */short) ((long long int) arr_12 [i_2] [i_2] [i_10]));
            arr_66 [i_10] [i_10] [(short)3] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-26572)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_40 [1LL])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_2] [i_10] [8LL] [i_2] [i_2])))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)12717))) & (((((/* implicit */_Bool) arr_18 [i_2] [(short)3])) ? (1479086487088517452LL) : (9223372036854775807LL))))));
        }
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
    {
        var_32 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-3253356625129416230LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13926))))))));
        arr_69 [3LL] = ((/* implicit */long long int) (short)32754);
    }
    var_33 = var_4;
    var_34 = ((/* implicit */short) var_6);
}
