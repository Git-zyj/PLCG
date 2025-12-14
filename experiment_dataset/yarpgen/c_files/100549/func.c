/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100549
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) max((arr_1 [4LL] [i_0]), (arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (9223372036854775807LL))))))) : (((/* implicit */int) max((arr_0 [i_0]), (max((((/* implicit */short) var_2)), ((short)-11))))))));
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) 147664359)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_13 [1ULL] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) >> (((-147664360) + (147664367))))))), ((~(685448141)))));
                    arr_14 [(signed char)3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)77);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_12 = ((/* implicit */int) var_10);
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -644045673)) ? (4294967295U) : (((/* implicit */unsigned int) -147664355)))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) % (arr_11 [i_1 - 1]))))));
            }
            for (short i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                arr_23 [i_6] = ((/* implicit */long long int) var_6);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_15 += ((/* implicit */_Bool) var_10);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_16 += ((/* implicit */short) (-(18446744073709551614ULL)));
                        var_17 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 570992758111661031LL)))))));
                        var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) var_7))))));
                    }
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33189)) * (((/* implicit */int) (unsigned short)56886))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) 3956113718810474700LL);
                        arr_32 [i_9 + 1] [i_1 - 1] [i_6] [i_6] [i_4] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_30 [i_6] [i_9] [i_6 + 1] [i_7] [i_7]);
                        var_21 = ((/* implicit */unsigned char) 2403715485212001345ULL);
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)49099)) <= (((/* implicit */int) arr_31 [i_7])))))));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_17 [i_1] [i_4] [i_6] [i_7]))))))));
                }
                arr_33 [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16219)) && (((/* implicit */_Bool) arr_30 [i_6] [i_6 - 2] [6] [i_6 + 1] [i_6 - 2]))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(var_5))) : (((((/* implicit */_Bool) arr_24 [i_11] [i_4] [i_4] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-14156)))))));
                    arr_39 [i_11] [i_11] [i_11] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) (short)-21072)) : (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    arr_44 [i_1] [i_1 - 1] = ((/* implicit */_Bool) arr_19 [(_Bool)1] [i_12] [i_12] [6U]);
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) 2162724274U)))));
                }
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    arr_49 [i_10] [i_10] [i_13] [6U] [i_10] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (var_0)));
                    var_26 = ((/* implicit */unsigned int) ((14621587953954034752ULL) / (((/* implicit */unsigned long long int) -7599073159012905645LL))));
                    arr_50 [i_1 - 1] [i_4] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_10 - 1] [i_4] [i_10] [(unsigned short)10]))));
                }
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (long long int i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (+(arr_22 [i_15 - 1] [i_15 + 1] [i_15 - 1])));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_6 [i_1 + 1]))));
                            arr_56 [i_1] [i_14] [i_14] [i_14] [i_15] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) (_Bool)1));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1029868335370398331LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [(unsigned char)10] [i_4] [(unsigned char)10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)161)))))));
            }
            arr_57 [i_1 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1 + 1])) ? (-3937608491540486711LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
        }
        for (long long int i_16 = 2; i_16 < 21; i_16 += 2) 
        {
            var_30 &= ((/* implicit */long long int) arr_20 [i_1 - 1] [i_1 - 1] [i_16 + 1] [i_16]);
            var_31 -= ((/* implicit */short) (-(((unsigned int) arr_20 [(signed char)21] [i_1 + 1] [i_1 + 1] [i_16 + 1]))));
            arr_60 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (~(((var_9) + (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_1 + 1] [i_16]))) : (var_1)))))));
            arr_61 [(signed char)3] [(signed char)3] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((1743241923U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_16 + 1] [i_16 + 1] [i_1 - 1]), (arr_7 [i_16 + 1] [i_16 - 1] [i_1 + 1])))))));
        }
    }
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_12 [i_17])) : (((/* implicit */int) (signed char)2)))))))))));
        arr_65 [i_17] [i_17] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1939605257121302626LL))))), ((unsigned char)0))))));
    }
    var_33 = ((/* implicit */unsigned char) var_10);
}
