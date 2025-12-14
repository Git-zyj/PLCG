/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124717
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
    var_15 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)109)) >> (((((/* implicit */int) (signed char)109)) - (88)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-((+(((arr_5 [i_0] [i_2] [i_0] [i_0]) | (var_7)))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-((~(min((((/* implicit */long long int) (short)32767)), (6433928198023467775LL))))))))));
                        var_17 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)799)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = var_13;
    }
    for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 + 2] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1] [i_4]))))) ? (((long long int) var_3)) : (((long long int) arr_9 [i_4 - 1] [i_4 + 2] [i_4]))));
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 6; i_5 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(2608184267924567722LL))))));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])), (var_12)))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) | (((var_8) ? (var_12) : (((/* implicit */unsigned long long int) arr_6 [i_6] [i_4] [i_4] [17LL]))))));
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 6; i_9 += 1) 
                    {
                        {
                            arr_28 [(signed char)4] [i_5] [(signed char)4] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) ((signed char) arr_5 [i_4] [i_4] [(short)6] [i_9]))), (var_12))));
                            arr_29 [i_4] [i_7] [i_7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((max((((/* implicit */unsigned long long int) (short)32756)), (var_1))) * (((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_5 + 3] [i_4 + 1]))))));
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_4] [i_4])))) : (max((1907926488U), (4294967278U))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_7] [(_Bool)1] [i_7] [i_4 - 1] [i_4] [8ULL])))))));
                            var_21 = ((/* implicit */int) -8451566318855411676LL);
                            var_22 = ((/* implicit */_Bool) ((unsigned short) (short)806));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) arr_6 [i_5 + 1] [i_5] [i_7] [i_4])))))));
                var_24 = ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_4 + 1] [i_4]))) ? (((((/* implicit */_Bool) 2387040808U)) ? (var_12) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                arr_30 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((unsigned int) arr_24 [i_4] [i_5] [i_4] [i_4] [i_4])) - (((((/* implicit */_Bool) (short)-32750)) ? (154249199U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_7] [(unsigned short)5])) ? (-2608184267924567723LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (-6856835802872752806LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 + 4] [i_4 - 1])))))));
            }
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                arr_33 [i_4] [(signed char)5] [i_4] [2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5 + 1])))))));
                arr_34 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((var_7) - (13286745289202191532ULL)))))) ? (((/* implicit */long long int) var_10)) : (arr_18 [i_5 + 2] [i_5 + 2])))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (-203223697)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_26 [6U] [6U] [(short)1] [(signed char)4] [i_10])))) : (max((((/* implicit */unsigned long long int) (short)-798)), (18446744073709551594ULL)))))));
            }
            for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                arr_37 [(_Bool)1] [(short)2] [2] [i_4] = ((/* implicit */short) (((+((-(var_2))))) == (((/* implicit */int) ((short) var_12)))));
                var_25 = (short)17437;
                var_26 = ((/* implicit */signed char) var_11);
                var_27 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_11 - 2] [i_4] [5])) ? (((var_0) ? (((/* implicit */int) (short)28245)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) (short)-25821))))))), (((long long int) arr_8 [(unsigned short)13] [i_4] [(_Bool)1] [(_Bool)1]))));
            }
            arr_38 [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
            arr_39 [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_31 [i_4] [i_5 + 1] [i_4 + 1] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_4] [i_5 + 3] [i_4 - 1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) : (var_10)));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_5))));
            arr_40 [i_4] [1U] [i_4] = ((/* implicit */unsigned long long int) 2387040808U);
        }
        for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(-2078932232))), (((/* implicit */int) (short)32766))))) ? (((((/* implicit */_Bool) ((unsigned int) (signed char)95))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54279))))) : (((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) var_8)))))) : (((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)12)) : (var_2))) ^ (((/* implicit */int) min(((signed char)109), (arr_4 [i_4] [i_4]))))))));
            var_30 = ((/* implicit */_Bool) (+((~(((((/* implicit */int) var_6)) << (((((/* implicit */int) var_11)) - (11256)))))))));
            /* LoopSeq 3 */
            for (short i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                arr_46 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [17ULL]))))) / (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_13 + 1] [i_12 + 1] [(unsigned short)9] [i_4 + 1]))))))));
                arr_47 [i_4] [i_4] [i_4] = ((/* implicit */short) (+(arr_7 [i_4] [(short)22] [i_4])));
            }
            for (unsigned int i_14 = 3; i_14 < 8; i_14 += 3) 
            {
                arr_52 [i_4] = ((/* implicit */short) ((unsigned int) ((signed char) ((var_0) ? (arr_41 [i_4] [(signed char)1] [i_4]) : (((/* implicit */int) arr_0 [i_14]))))));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_7))));
            }
            for (long long int i_15 = 1; i_15 < 8; i_15 += 1) 
            {
                var_32 = ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)));
                arr_55 [i_4] [i_4] [(short)2] = ((/* implicit */_Bool) var_9);
            }
            arr_56 [i_4] [(signed char)0] [4LL] = ((/* implicit */short) ((int) var_1));
        }
        arr_57 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_32 [i_4] [i_4] [i_4]))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) == ((~(var_14))))))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [0LL] [i_4] [i_4]))) == (((unsigned long long int) (short)14906))));
    }
}
