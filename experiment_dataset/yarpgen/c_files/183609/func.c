/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183609
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) var_11);
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_1))));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((((/* implicit */_Bool) -1695018647)) ? (var_6) : (((/* implicit */long long int) var_1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (min((-9223372036854775806LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33776)) ? (var_1) : (arr_10 [i_1] [i_2 + 1] [i_3] [7LL]))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_2 - 3]), (arr_1 [i_2 + 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (var_1) : (((/* implicit */int) var_7))))) <= (var_9)))) : (((/* implicit */int) (unsigned short)31759))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31760)) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) 39427766)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (6291456)))))))) ? (var_8) : (var_9))))));
                            var_18 = max((((/* implicit */long long int) min((min((var_1), (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))), (((/* implicit */int) ((-9223372036854775807LL) != (((/* implicit */long long int) 33554424)))))))), (var_2));
                            arr_15 [i_2] [(unsigned short)10] = ((/* implicit */unsigned short) 9223372036854775806LL);
                        }
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            arr_19 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((long long int) arr_11 [i_6] [i_4] [i_3] [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_10)) ? (((var_6) - (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) 39427766)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3887576143U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (arr_12 [i_3] [i_2] [i_1]))))) : (max((var_9), (((/* implicit */unsigned int) arr_1 [18U])))))))));
                            var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_1] [(unsigned short)2] [i_4 + 2] [i_6] [i_6])) || (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) & (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_3] [i_2] [i_3])) : (((/* implicit */int) var_5))))));
                        }
                        var_20 = var_3;
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_7 + 2] [i_7 + 1])) : (((/* implicit */int) arr_16 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (6950935141207659405LL) : (((/* implicit */long long int) var_8)))))))));
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                var_22 += ((/* implicit */unsigned short) var_11);
                var_23 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)44429), (arr_21 [i_8 + 2]))))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_10 [i_8 + 2] [i_7 - 1] [i_7 - 1] [i_1])) : (((((/* implicit */_Bool) (unsigned short)26980)) ? (arr_8 [i_1] [6]) : (((/* implicit */long long int) var_9))))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */long long int) var_3)) > (var_6))) ? (((((/* implicit */int) arr_20 [i_1] [i_8 + 2] [i_8 + 2])) - (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_5))))))));
                var_25 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_7 + 2] [i_7])) ? (6950935141207659405LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((unsigned short) var_11)))));
            }
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_26 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) 3982388446U)) < (-6950935141207659387LL))) || (((((/* implicit */_Bool) (unsigned short)52)) && (((/* implicit */_Bool) 781854200))))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((var_3) >> (((5590510552743986126LL) - (5590510552743986101LL))))))));
                var_28 = ((/* implicit */long long int) var_7);
                arr_28 [i_1] [i_1] [i_9] = ((/* implicit */int) min((arr_7 [i_7]), (((/* implicit */long long int) ((((/* implicit */int) max((var_5), (var_0)))) != (((/* implicit */int) ((unsigned short) var_10))))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_11))));
            var_30 += ((/* implicit */unsigned short) ((unsigned int) -9223372036854775807LL));
            var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10])))))));
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            var_32 += ((/* implicit */int) 4190208U);
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        arr_39 [i_1] [15U] [i_11] [i_13] = ((/* implicit */unsigned int) var_5);
                        arr_40 [i_1] [i_11] [i_1] = ((/* implicit */int) 9223372036854775806LL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                for (unsigned short i_15 = 3; i_15 < 15; i_15 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_16 = 1; i_16 < 15; i_16 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((unsigned short) ((((arr_45 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16]) + (2147483647))) << (((((/* implicit */int) var_10)) - (9578))))))));
                            arr_50 [i_11] = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_1] [i_11] [i_11] [i_14] [i_1] [i_16])))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((6950935141207659405LL) == (((/* implicit */long long int) -1)))))));
                            var_35 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_16] [i_15] [i_15 + 2] [i_15])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_8 [i_1] [i_16 - 1]) : (((/* implicit */long long int) var_4))))) ? (((long long int) arr_17 [i_1] [i_11] [i_16])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31760)))))));
                        }
                        for (long long int i_17 = 1; i_17 < 14; i_17 += 4) 
                        {
                            arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((arr_25 [i_1] [i_11] [i_11] [i_1]), (var_2))) : (min((-9223372036854775807LL), (((/* implicit */long long int) var_10))))))) ? (min((min((((/* implicit */int) arr_9 [i_1])), (-1072423790))), (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_24 [i_1] [i_1] [i_1]))));
                            var_36 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_15 - 2] [i_15] [i_15] [i_15] [i_15 + 2])) ? (((((/* implicit */_Bool) arr_45 [i_1] [i_11] [i_1] [i_15] [i_1])) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2032))))) : (((long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [0LL] [0LL]))) + (arr_5 [i_11] [i_11]))) : (var_12))))));
                        }
                        arr_55 [i_1] [i_1] [i_11] [i_15 + 2] = ((((/* implicit */_Bool) arr_8 [i_14] [i_15])) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))) % (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_11) : (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) 2149850577U)));
                    }
                } 
            } 
            var_37 += ((/* implicit */unsigned short) ((9223372036854775807LL) / (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11] [i_1] [i_1])))))));
        }
        for (int i_18 = 3; i_18 < 16; i_18 += 4) 
        {
            var_38 = ((/* implicit */unsigned short) min((var_38), (arr_24 [i_18 + 1] [i_18] [i_18])));
            arr_58 [i_18] [i_18] = var_5;
        }
    }
    var_39 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18264))) ^ (var_6)));
    var_40 += ((/* implicit */long long int) var_4);
    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) var_1))));
    var_42 += ((/* implicit */unsigned int) var_7);
}
