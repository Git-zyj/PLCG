/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186298
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
    var_17 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    var_18 *= ((/* implicit */unsigned int) (unsigned char)52);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) var_9);
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_2))));
            }
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_20 = ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_12 [3] [i_1] [i_1] [3]);
                            arr_17 [19] [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_1])) ? (arr_16 [i_0] [i_1]) : (arr_16 [i_1] [i_1])));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (9729159245065339101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_4])))));
                            var_23 = ((/* implicit */unsigned char) arr_1 [(unsigned char)11] [i_5]);
                            var_24 *= arr_6 [i_0] [i_1] [i_3];
                        }
                    } 
                } 
            }
            arr_18 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((signed char) arr_8 [i_0] [i_0] [i_1] [i_0]));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (17588721361446169073ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            arr_21 [(_Bool)1] [i_6] = ((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0] [i_6] [i_6])))) % (((/* implicit */int) var_4)))) + (2147483647))) >> (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_6]), (arr_8 [i_0] [i_6] [i_6] [i_0]))))));
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    arr_26 [i_0] [(unsigned short)11] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)127)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_7])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(short)18])) : (((/* implicit */int) arr_12 [i_0] [i_6] [i_7] [i_6]))))) ? (arr_16 [i_6] [i_6]) : (((/* implicit */int) arr_6 [(short)17] [i_7] [i_7]))))));
                    arr_27 [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_16)) ? (arr_24 [20U] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))))), (8717584828644212515ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127)))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned char) ((short) arr_0 [i_6] [i_9]));
                    var_27 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0] [i_6] [i_0] [i_0]))));
                    var_28 = ((/* implicit */signed char) arr_12 [i_0] [i_6] [i_0] [i_9]);
                    var_29 *= ((/* implicit */short) arr_12 [i_0] [i_6] [i_6] [i_9]);
                }
                var_30 = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
            {
                arr_34 [i_0] [i_0] [14] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 470837571)) < (arr_33 [i_0] [i_6])));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [(short)4] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [11LL] [i_0] [i_6] [i_10]))));
                var_32 *= ((/* implicit */unsigned char) ((short) arr_28 [i_0] [i_6] [i_6] [i_10]));
            }
            for (signed char i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) var_10);
                arr_39 [i_0] [i_6] [19] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((long long int) arr_32 [i_0] [i_0] [i_6] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                /* LoopSeq 4 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-133)) : (((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_6] [i_11] [i_12])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)18] [(unsigned char)18])) : (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned int) arr_20 [i_0] [17U])), (511U))))) : (4294967291U)));
                    var_35 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_41 [i_0] [(signed char)13] [i_11] [i_12])) : (((/* implicit */int) arr_7 [i_0] [i_12]))))));
                    var_36 *= ((/* implicit */_Bool) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)45))))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_7 [i_0] [i_6]))))));
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_48 [i_0] [i_0] [i_0] [i_11] [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)132)) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_13])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_6] [i_0] [i_0]))))))));
                    arr_49 [i_0] [i_6] [i_11] [(unsigned char)15] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_19 [i_6] [i_11] [i_13]))) ? (((((/* implicit */_Bool) (unsigned short)46808)) ? (((/* implicit */int) arr_2 [i_0] [i_13])) : (((/* implicit */int) arr_1 [i_0] [i_6])))) : (((/* implicit */int) var_2))))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_42 [i_0] [i_6] [i_11] [i_14]))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6] [(_Bool)1] [i_14])) ? (((/* implicit */int) arr_30 [i_0] [i_6] [(_Bool)1] [9ULL] [i_14])) : (((/* implicit */int) arr_30 [i_0] [(unsigned short)14] [i_6] [(unsigned short)14] [i_14]))));
                    arr_54 [i_0] [i_6] [i_11] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_6] [(_Bool)1] [i_0] [i_14]) ? (((/* implicit */int) arr_7 [i_11] [i_14])) : (((/* implicit */int) arr_23 [i_11] [i_6] [i_11]))))) ? (((/* implicit */int) arr_50 [i_0] [i_6] [i_11] [i_14] [i_14])) : (((/* implicit */int) ((short) arr_6 [i_0] [i_6] [i_14])))));
                }
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    arr_59 [i_11] [i_15] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_6] [i_11]));
                    var_39 *= ((/* implicit */unsigned char) arr_13 [i_0] [i_6] [i_11] [i_15]);
                    var_40 *= ((/* implicit */unsigned char) ((_Bool) arr_47 [i_0] [i_6] [i_0] [i_15]));
                    var_41 *= ((/* implicit */unsigned char) (signed char)-57);
                }
            }
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_31 [i_0] [i_6] [i_16] [i_16])), (((((/* implicit */_Bool) arr_13 [i_16] [i_6] [i_16] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_43 [i_0]))))))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_6] [(_Bool)1])))) : (((/* implicit */int) ((_Bool) var_6)))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        {
                            arr_69 [i_0] [i_0] [i_16] [i_16] [i_17] [i_16] [i_18] = ((/* implicit */unsigned short) -470837572);
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) max((var_11), (((/* implicit */short) var_10))))))) : (((/* implicit */int) var_14))));
                        }
                    } 
                } 
            }
        }
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_0] [i_0] [17] [(unsigned short)6])) ? (((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_13))));
        arr_70 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (short)-26924)), (4294967287U))))), ((~(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))));
        arr_71 [i_0] [(_Bool)0] = (unsigned short)46808;
        arr_72 [i_0] = ((/* implicit */unsigned char) (signed char)-96);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        arr_76 [(short)11] [i_19] = ((/* implicit */_Bool) (short)26921);
        var_45 = ((/* implicit */unsigned long long int) ((arr_0 [i_19] [i_19]) ? (arr_52 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */int) arr_30 [i_19] [i_19] [(unsigned short)1] [5U] [i_19]))));
        arr_77 [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_19] [i_19] [i_19])) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_75 [i_19] [i_19])) : (((/* implicit */int) arr_23 [i_19] [i_19] [i_19])));
        var_46 = ((/* implicit */signed char) arr_47 [i_19] [i_19] [i_19] [i_19]);
        var_47 *= ((/* implicit */unsigned char) var_15);
    }
}
