/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142090
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
    var_15 += ((/* implicit */long long int) ((var_13) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) (~(var_0)));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) var_8))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_2 [19LL] [i_1 + 1])))))) >= (((var_11) ? (2128992344390015916LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_18 *= ((/* implicit */unsigned long long int) var_13);
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((_Bool) var_7)))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                var_20 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))) ? (var_0) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) >= (((/* implicit */int) var_5)))))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_22 -= ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                arr_15 [i_2] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                arr_16 [(_Bool)1] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [8LL] [14ULL])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (var_3)));
                    arr_19 [i_1] [i_2] [(unsigned char)16] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_0)))));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_22 [i_2] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_24 *= ((/* implicit */_Bool) var_6);
                        arr_26 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_6] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1]))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (11819560481512777636ULL)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_6]))))))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(var_0))))));
                    var_27 = ((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2] [i_4]);
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    arr_31 [i_1 + 1] [i_8] = ((/* implicit */int) ((unsigned long long int) var_7));
                    var_28 *= ((/* implicit */_Bool) (-(-965417525470290610LL)));
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (1106251563868802153LL))) <= (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_1] [i_2] [i_4] [i_1 + 1] [i_8])))))));
                    var_30 ^= ((/* implicit */int) ((unsigned long long int) -121465172));
                }
            }
            for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                var_31 |= ((/* implicit */unsigned char) ((int) var_7));
                var_32 = (!(((/* implicit */_Bool) ((((arr_29 [(unsigned char)2] [i_2] [i_2] [i_2] [(unsigned char)0]) && (((/* implicit */_Bool) arr_24 [i_9] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (var_0)))));
                arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) var_10);
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_4 [i_1 + 1]) > (arr_4 [i_1 + 1])))) | (min((arr_4 [i_1 + 1]), (((/* implicit */int) (_Bool)1)))))))));
                var_34 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (-1106251563868802164LL))), (((/* implicit */long long int) arr_27 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_2] [i_1] [i_1]))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                var_36 = ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146)))))) : (((((/* implicit */_Bool) 7160025129232972002LL)) ? (arr_18 [i_1] [(_Bool)1] [i_2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_37 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
            }
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                arr_41 [i_2] [(signed char)10] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [(unsigned char)8])) ? (var_0) : (((/* implicit */int) (_Bool)1))))))));
                var_38 ^= ((/* implicit */unsigned long long int) var_6);
                var_39 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (min((-1LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (arr_1 [(signed char)6])))))));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max((min((arr_33 [i_1] [i_1] [i_1]), ((~(var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_9 [i_1] [i_1])))))))))))));
            var_41 = ((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_1 + 1] [i_1 + 1] [i_1]);
            arr_45 [(signed char)10] [i_12] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-1106251563868802153LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */unsigned long long int) arr_39 [i_12] [i_12] [i_1 + 1])), (8810041923599886081ULL))))), (((/* implicit */unsigned long long int) var_3))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_49 [i_13] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_1] [i_13] [i_1] [i_13])))))));
            var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_1 + 1] [i_1 + 1])))))));
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) 1681429570))));
        }
        for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))), (((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ^ (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))));
            var_45 -= ((/* implicit */unsigned char) (((!(var_12))) && (((/* implicit */_Bool) max((arr_30 [i_14] [i_1 + 1] [i_1 + 1]), (((/* implicit */signed char) var_3)))))));
            var_46 -= ((/* implicit */unsigned long long int) var_13);
            arr_52 [i_1] [i_14] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1] [7]), (((unsigned char) (_Bool)1)))))) <= (((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))));
        }
        var_47 ^= var_1;
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
    {
        var_48 ^= ((/* implicit */_Bool) max((-8LL), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)113), (var_14)))) | (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1))))))))));
        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (_Bool)1))));
    }
    for (int i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        var_50 = ((/* implicit */_Bool) min((var_50), (arr_17 [i_16] [19ULL] [i_16] [(_Bool)1] [i_16] [i_16])));
        /* LoopNest 3 */
        for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_17 - 1]))))) ? (((/* implicit */int) (unsigned char)113)) : (min((((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) arr_55 [i_16])) : (((/* implicit */int) arr_23 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))), (((/* implicit */int) (_Bool)1))))));
                            arr_68 [i_16] [i_16] [i_16] [i_16] [i_16] [i_17] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                            arr_69 [i_16] [i_17] [i_19] [16LL] [i_16] [i_17] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                        }
                        for (int i_21 = 0; i_21 < 22; i_21 += 3) 
                        {
                            var_52 += ((/* implicit */unsigned char) arr_40 [(unsigned char)13] [i_18] [(_Bool)1]);
                            arr_72 [(_Bool)1] [(_Bool)1] [i_17] [(_Bool)1] [(signed char)16] = ((/* implicit */_Bool) (unsigned char)249);
                            var_53 = ((/* implicit */int) (_Bool)0);
                            arr_73 [i_16] [i_18] [(unsigned char)10] |= ((/* implicit */_Bool) var_14);
                        }
                        arr_74 [i_17] [i_17 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 576460735123554304LL)), (arr_62 [i_17] [i_18] [i_17 - 1] [i_17]))))));
                    }
                } 
            } 
        } 
    }
    var_54 = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_5))))));
}
