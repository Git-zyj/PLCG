/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138532
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((var_9) > (((/* implicit */int) arr_1 [i_0])))) ? (((var_7) ^ (var_9))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) var_0)))))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (var_2) : (((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) (short)-28814))))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((var_9) > (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0 + 1]))))))))));
        arr_5 [i_0] = ((/* implicit */long long int) (-(var_8)));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
            {
                var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1] [(unsigned char)4] [i_3 - 1]))) : (arr_13 [i_1 + 2] [i_1 + 2] [i_3 + 1])));
                var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2] [i_3]))))) << (((((((/* implicit */_Bool) var_11)) ? (arr_2 [i_1]) : (((/* implicit */int) arr_11 [(unsigned char)2] [i_2] [i_3])))) + (1191501017)))));
                var_16 = ((/* implicit */long long int) arr_11 [i_1 + 2] [i_1] [i_1 + 1]);
                var_17 = ((/* implicit */int) arr_7 [i_1]);
            }
            for (int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4474)) : (2147483647)))) ? (((arr_2 [i_1 + 1]) | (var_10))) : (((/* implicit */int) (unsigned char)8))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2] [10] [i_1] [i_2] [(short)4]))))) + (((((/* implicit */int) arr_12 [i_1] [(unsigned char)4])) | (var_2)))));
                        }
                    } 
                } 
                arr_21 [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 2; i_7 < 7; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)28838)) || (((/* implicit */_Bool) -340450293))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) ((((/* implicit */int) arr_17 [i_1 - 2] [3] [2] [(short)4])) != (((/* implicit */int) var_3)))))));
                        arr_27 [i_1 + 1] [i_1] [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_30 [i_11] [i_2]))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_9) & (arr_8 [i_9] [i_10])))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_1] [i_2] [i_9] [i_10] [i_11] [i_11])) != (var_5)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_39 [i_1 + 2] [i_12] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [(unsigned char)0] [i_12] [i_12]))));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
            /* LoopSeq 1 */
            for (int i_13 = 3; i_13 < 10; i_13 += 2) 
            {
                var_25 = ((/* implicit */long long int) (~(((((/* implicit */int) var_6)) ^ (var_11)))));
                arr_42 [i_1 - 2] [i_1] [(short)5] = ((/* implicit */int) ((((((/* implicit */int) arr_35 [i_1] [i_12] [i_12] [i_13 - 1] [i_13 - 3])) >= (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [(unsigned char)0] [(short)8] [9LL] [i_13] [(short)10] [i_13 - 1] [(short)10])) ? (((/* implicit */int) arr_35 [i_1 - 2] [i_12] [i_13 + 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_35 [i_1 - 1] [i_12] [i_12] [4] [3]))))) : (((((/* implicit */_Bool) var_2)) ? (arr_14 [3] [i_12] [i_13 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            }
            arr_43 [i_1] [i_12] = ((/* implicit */unsigned char) arr_40 [i_1] [i_1] [i_1]);
        }
        for (unsigned char i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_15 = 2; i_15 < 7; i_15 += 2) 
            {
                arr_52 [i_1 - 2] [i_14 - 1] [i_1] = ((/* implicit */short) var_12);
                var_26 = ((/* implicit */short) var_6);
            }
            for (long long int i_16 = 2; i_16 < 10; i_16 += 3) 
            {
                var_27 += ((/* implicit */unsigned char) ((((1206771928922833850LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)3372))) >= (-1206771928922833850LL))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)28838)) ? (((/* implicit */int) (short)31827)) : (var_8))))));
                var_28 = ((/* implicit */short) (((~(var_11))) != (((((((/* implicit */int) arr_47 [i_1])) ^ (var_2))) & ((~(((/* implicit */int) (short)7942))))))));
                arr_55 [i_1] [i_16] [i_16] [i_16 + 1] = ((/* implicit */short) ((((-857284429) + (2147483647))) >> (((5371612546969771415LL) - (5371612546969771391LL)))));
            }
            var_29 *= ((/* implicit */unsigned char) ((-1206771928922833862LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-28824)))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_56 [i_1] [i_1 + 1] [i_1 + 1]))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 - 2] [i_1] [i_17] [(unsigned char)3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_1 + 2] [i_1 + 2] [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_56 [i_1] [i_1] [i_17]) : (var_5))) : ((~(var_5)))));
        }
        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11432)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)201))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_1] [i_1 + 1] [9])) : (arr_49 [i_1 + 2] [i_1] [i_1] [i_1 - 2])))) ? (((/* implicit */long long int) var_10)) : (max((((/* implicit */long long int) arr_51 [(unsigned char)1] [i_1])), (arr_44 [i_1] [i_1 - 2] [(short)10]))))) : (((/* implicit */long long int) var_11)));
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1206771928922833850LL)) ? (((((/* implicit */_Bool) (short)28814)) ? (((/* implicit */int) (unsigned char)209)) : (1917986478))) : (((((/* implicit */_Bool) (short)31595)) ? (1933521807) : (((/* implicit */int) (short)11148))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_9) : (var_8))) <= ((~(var_10)))))) : (var_2)));
    /* LoopNest 3 */
    for (short i_18 = 1; i_18 < 11; i_18 += 4) 
    {
        for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    arr_66 [(unsigned char)1] [(unsigned char)10] [i_18] [i_18] = (~(var_10));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        for (short i_22 = 4; i_22 < 11; i_22 += 4) 
                        {
                            {
                                arr_72 [4] [i_19] [(unsigned char)1] [i_18] [i_22] = ((/* implicit */int) min((((/* implicit */long long int) max((var_10), (var_10)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)27190)))))) : (1806149392030290424LL)))));
                                var_34 = ((((/* implicit */_Bool) (~(1356553672)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (max((((/* implicit */int) var_3)), (var_5))));
                            }
                        } 
                    } 
                    arr_73 [i_18] [i_19] [i_20] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_65 [(short)1] [i_18])) : (arr_63 [i_18] [i_19]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_18 + 1] [i_19] [i_20] [6LL] [(unsigned char)6] [(unsigned char)2])) ? (arr_64 [i_18] [i_18 + 1] [(short)5]) : (((/* implicit */int) var_3)))))))));
                    var_35 = ((/* implicit */short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) & (((/* implicit */int) (short)0))))));
                    var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_0 [i_20] [i_20]))))) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_18]))) : ((~((~(-2034232791005059245LL)))))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned char) (~((~(3480042192282148735LL)))));
}
