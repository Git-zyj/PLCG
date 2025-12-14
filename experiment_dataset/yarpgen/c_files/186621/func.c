/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186621
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
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 292022637)) ? (((/* implicit */int) (short)-24814)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) var_9))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((var_14), (var_4)))) : (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (short)28657)) : (((/* implicit */int) (short)20507))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((~(292022637))) - (((/* implicit */int) (short)24813)))) : (((((/* implicit */_Bool) (signed char)25)) ? (var_10) : (((int) var_15))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24814)) ? (292022635) : (((/* implicit */int) (short)24813))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (short)24148)) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */short) var_7)), (var_6))))))) ? (-1797241409) : (max(((((_Bool)1) ? (((/* implicit */int) (short)-2467)) : (((/* implicit */int) (signed char)54)))), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) (_Bool)1);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)25)) / ((-2147483647 - 1))));
                                var_21 = ((/* implicit */signed char) max((min((8629184516454534080LL), (((/* implicit */long long int) arr_8 [i_1 - 1] [i_2] [i_5 - 1] [i_6 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_5] [i_5 - 1] [i_6 + 2])) && (((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2] [i_5 - 1] [i_6 + 1] [i_1 - 1])))))));
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [10LL] [i_0] = ((/* implicit */short) arr_15 [(signed char)2] [i_5 - 1] [i_2] [i_1 + 3] [i_1 + 3] [i_6 - 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_16 [i_0] [i_1] [i_2] [i_0] [i_8]))) * (max((((/* implicit */int) (short)-256)), (-1958400099)))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_28 [i_0] [i_0] = ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) max((arr_15 [(short)3] [i_0] [i_0] [(short)10] [8] [(_Bool)1]), (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)-14838)) ? (7913728315398949844LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
            arr_29 [i_0] [i_0] = arr_16 [2] [i_9] [i_9] [2] [i_0];
            arr_30 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_9])), (arr_7 [i_0] [i_0] [i_0])))) | (((var_11) ? (((/* implicit */long long int) arr_11 [i_9] [i_0] [i_0] [i_0] [i_0])) : (var_13)))))) ? (max((((((/* implicit */_Bool) var_13)) ? (2534133770462943399LL) : (((/* implicit */long long int) arr_15 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [(signed char)3] [(signed char)2]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            arr_31 [i_0] [i_9] [i_0] = ((/* implicit */long long int) max((((short) arr_4 [i_0] [i_9] [i_9])), (((/* implicit */short) (!(((/* implicit */_Bool) max((var_2), (var_12)))))))));
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        arr_38 [i_11] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_10])))) - (max((((/* implicit */int) arr_17 [i_10] [(short)3] [i_10] [i_10] [i_0] [i_0])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_4 [(short)12] [i_10] [(short)12]))))))));
                        arr_39 [i_12] [i_12] [i_12] [i_12] &= ((((/* implicit */int) max((((short) var_2)), (var_5)))) >= (((((/* implicit */_Bool) arr_16 [i_12] [i_11] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((short) arr_37 [i_0] [(short)11] [i_0] [9LL]))) : (((/* implicit */int) arr_9 [i_0] [i_10] [i_0] [(short)1])))));
                    }
                } 
            } 
            arr_40 [i_0] = ((/* implicit */int) max((max((((/* implicit */long long int) arr_0 [i_10])), ((~(arr_16 [i_0] [i_0] [i_0] [i_0] [(short)12]))))), (min((((/* implicit */long long int) (short)-11340)), ((+(2109920357571072843LL)))))));
            var_23 = ((/* implicit */short) max(((-(((/* implicit */int) ((short) 2534133770462943399LL))))), (((/* implicit */int) var_2))));
            arr_41 [i_10] [(short)11] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-114)), (max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_1 [i_10]))))));
        }
        arr_42 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_34 [i_0] [i_0])) ? (((/* implicit */int) arr_34 [i_0] [i_0])) : (((/* implicit */int) arr_34 [i_0] [(signed char)12])))) + (2147483647))) << (((((((/* implicit */int) arr_34 [i_0] [i_0])) + (9912))) - (3)))));
        var_24 ^= ((/* implicit */int) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(short)2] [i_0] [(short)2] [(short)2] [i_0])) ? (arr_16 [i_0] [i_0] [(signed char)3] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((~(arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_16 [i_0] [(signed char)11] [(short)7] [i_0] [(short)1])))));
    }
    for (short i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_13] [(short)9] [i_13] [8])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_24 [i_13] [i_13] [i_13] [i_13] [i_13]))))) : (arr_37 [i_13] [i_13] [i_13] [i_13]))))));
        arr_46 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_13] [i_13] [i_13] [(short)7])) && (((/* implicit */_Bool) 2534133770462943403LL))));
    }
    for (short i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
    {
        arr_49 [i_14] = arr_1 [i_14];
        arr_50 [i_14] [i_14] = ((/* implicit */long long int) max((min((arr_0 [i_14]), (((/* implicit */int) (signed char)113)))), (((/* implicit */int) ((((/* implicit */int) (short)4314)) > (((/* implicit */int) (short)(-32767 - 1))))))));
        arr_51 [i_14] [i_14] = (short)1284;
    }
    for (short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11))))), (max((((/* implicit */short) (_Bool)1)), ((short)24813)))))), (((((/* implicit */_Bool) ((int) (short)-12883))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */int) arr_13 [(short)4] [(short)4] [(short)4] [6LL])) : (arr_27 [i_15] [i_15] [i_15])))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((arr_23 [i_15] [i_15] [i_15] [i_15] [i_15]) % (((/* implicit */int) var_12)))) : (((int) (_Bool)1)))) > (((((/* implicit */_Bool) arr_44 [i_15])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(arr_21 [(signed char)3] [8LL] [(signed char)12] [(short)5] [i_15] [(short)5])))))))))));
        /* LoopNest 3 */
        for (short i_16 = 1; i_16 < 9; i_16 += 2) 
        {
            for (short i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    {
                        arr_63 [i_18] [i_16 + 1] [i_15] [i_15] = arr_13 [i_15] [i_15] [i_15] [i_15];
                        arr_64 [i_15] [i_15] [i_15] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) -6403032145567510848LL)))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((-2534133770462943400LL) / (max((-2534133770462943400LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_48 [i_16] [i_18]))))))))))));
                    }
                } 
            } 
        } 
    }
    var_28 |= ((/* implicit */short) var_11);
    var_29 = var_5;
}
