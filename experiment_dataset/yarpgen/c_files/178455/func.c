/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178455
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_15 = ((/* implicit */int) arr_2 [i_0] [i_1]);
                    var_16 = ((/* implicit */short) min((((/* implicit */long long int) ((short) (!(var_4))))), (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (var_1)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (+(-1445585174492510637LL)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(var_7)))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) ((_Bool) (_Bool)1))))), ((-((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_16 [i_0] [i_1] [(short)3]))))) ? ((-(10448987590002892614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (short)8192))));
                        var_20 = ((/* implicit */unsigned long long int) -1443044568);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_0))) * (((/* implicit */int) arr_15 [i_1]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = min((((((/* implicit */_Bool) arr_18 [i_1])) ? (2728046553462399929ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_1)))) ? (min((47736653), (arr_10 [i_0] [i_1] [i_2] [i_5] [i_5]))) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_0]))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [8LL] [i_2])), (8778706850476512089ULL)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_15 [i_0]))));
                        var_24 = ((/* implicit */int) ((long long int) min((var_12), (((/* implicit */unsigned long long int) ((unsigned short) -101220514))))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_21 [i_0] [i_6])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_1] [i_6]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                    {
                        var_26 -= ((/* implicit */int) arr_18 [i_0]);
                        var_27 = (-(((/* implicit */int) arr_3 [i_7 - 1] [i_0] [i_6])));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_5 [i_6] [i_6] [(short)2])) : (((/* implicit */int) arr_20 [i_6] [i_1] [i_7 + 1]))))) ? (arr_11 [i_1] [(_Bool)1] [i_7] [i_7 - 1] [i_7 + 2] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_29 -= (~(((/* implicit */int) arr_21 [3ULL] [(unsigned short)0])));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8642)) ? (((/* implicit */int) arr_26 [i_1] [7ULL] [i_8])) : (var_10)))) ? (((/* implicit */int) (!(arr_15 [i_0])))) : (((/* implicit */int) arr_17 [i_8] [(_Bool)1] [i_1] [i_0])))))));
                            var_31 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6]))));
                        }
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2]))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) (+((-(var_10)))));
                        /* LoopSeq 3 */
                        for (int i_10 = 2; i_10 < 8; i_10 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) min((min(((unsigned short)52343), (((unsigned short) arr_6 [(unsigned short)8] [i_6] [i_9] [i_10 + 2])))), (((/* implicit */unsigned short) var_5))));
                            var_35 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (~(((((((/* implicit */int) arr_5 [i_0] [i_9] [i_0])) + (2147483647))) >> (((min((8589934591ULL), (((/* implicit */unsigned long long int) var_14)))) - (151ULL)))))))) : (((/* implicit */unsigned long long int) (~(((((((((/* implicit */int) arr_5 [i_0] [i_9] [i_0])) - (2147483647))) + (2147483647))) >> (((min((8589934591ULL), (((/* implicit */unsigned long long int) var_14)))) - (151ULL))))))));
                            var_36 = ((/* implicit */unsigned long long int) (signed char)-6);
                        }
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_37 = arr_14 [i_9 - 2] [i_0] [i_9 - 1] [i_9 + 2] [i_11];
                            arr_36 [i_0] [i_0] [i_6] [i_9] [i_11] = ((arr_27 [i_0] [i_9 - 1] [i_9 + 1] [i_0] [i_9 + 1] [i_9 - 1]) ? (min((var_8), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_9 - 2] [i_9 + 2] [i_0] [i_9 - 1] [i_9 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 - 1]))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_28 [(_Bool)1] [(short)1] [i_6] [i_6] [i_0] [i_11] [3ULL]))));
                            arr_37 [(unsigned char)9] [(unsigned char)9] [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_14 [i_9 + 2] [i_0] [i_6] [i_9] [9LL]))) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_25 [i_0] [(unsigned short)5] [8ULL] [i_0] [i_0] [i_0])))), (((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [i_11] [5] [i_9] [i_6] [i_6] [i_1] [i_0])))))))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 8; i_12 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31229)) ? (arr_34 [i_0] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_0] [i_9 + 2] [i_12] [i_12] [i_9])) ? (((/* implicit */int) arr_27 [i_12] [i_12] [9] [i_0] [i_12] [8])) : (((/* implicit */int) var_11))))))) ? (((unsigned long long int) min((((/* implicit */int) (short)-6968)), (-47736653)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15203)))));
                            var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_41 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_8 [i_9 - 1] [i_1])))));
                        arr_40 [i_9 - 1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((arr_20 [i_0] [1] [1]), (((/* implicit */short) arr_33 [i_0] [i_1] [i_1] [i_6] [i_9] [i_9] [i_0]))))) ? (((/* implicit */int) arr_25 [2ULL] [i_1] [i_1] [i_0] [i_9 - 2] [i_9 + 2])) : ((+(((/* implicit */int) arr_29 [i_0] [i_6] [i_0]))))))));
                        arr_41 [i_9 - 2] [i_0] [i_0] [1LL] = min((min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_6] [i_9] [i_1])) : (arr_35 [(short)5] [i_0] [i_1] [i_6] [(short)2] [i_0] [i_9]))), (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1]), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) (+(((long long int) (_Bool)0))))));
                    }
                    var_42 = ((/* implicit */short) ((arr_6 [i_0] [i_0] [i_0] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24)))));
                    var_43 = ((/* implicit */unsigned long long int) var_2);
                    arr_42 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_11))), ((~(((/* implicit */int) arr_25 [i_6] [i_6] [i_6] [i_0] [i_6] [i_6]))))));
                }
                arr_43 [i_0] = ((/* implicit */long long int) arr_22 [i_0]);
                arr_44 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_0] [i_0] [3]);
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (2728046553462399929ULL))))))))))));
}
