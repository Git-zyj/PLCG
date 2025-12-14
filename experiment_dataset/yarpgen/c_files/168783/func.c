/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168783
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((1191158914) >= (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_11);
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */unsigned long long int) min((var_1), (1006726770)))) ^ (((var_4) % (((/* implicit */unsigned long long int) var_3)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << (((((/* implicit */int) (unsigned char)63)) - (56)))))) ? (((((/* implicit */_Bool) 935221032U)) ? (((/* implicit */int) (_Bool)1)) : (var_16))) : (((((((/* implicit */int) arr_4 [i_0] [i_1])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))))))));
                    arr_11 [i_0] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) min(((short)-8964), (((/* implicit */short) (_Bool)1))))) + (2147483647))) << (((((((/* implicit */int) (short)-8970)) + (8974))) - (4)))));
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 6; i_5 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (short)8960);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */short) (-((-(var_1)))));
                        arr_26 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */short) ((min(((+(((/* implicit */int) (short)-1)))), (((((/* implicit */int) (short)-8964)) - (var_3))))) - ((+(((((/* implicit */_Bool) 4047183012U)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_8))))))));
                    }
                    arr_27 [i_5] [i_5] [i_5] [i_5 + 4] = (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 8; i_7 += 3) 
        {
            for (short i_8 = 1; i_8 < 7; i_8 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (arr_24 [i_9] [i_8 - 1] [i_7 - 1])));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_9) : (var_3));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65529)) ? (arr_17 [i_3]) : (((/* implicit */unsigned int) var_15))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-21)) ? ((+(((/* implicit */int) arr_32 [i_3] [i_8] [i_11])))) : (((/* implicit */int) (unsigned short)0))));
                            arr_43 [i_11] [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_7 - 2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_11] [i_9])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_13)))) : (((/* implicit */int) var_6))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) (-(247784283U)))) ? (((/* implicit */int) arr_31 [i_3] [i_3] [i_8] [i_9])) : ((+(var_1))));
                            var_24 = ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_14 [i_7 - 2]))));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_7 + 2] [i_8 + 3] [i_8] [i_7 + 2] [i_12])) ? (((/* implicit */int) arr_45 [i_7 + 1] [i_8 + 3] [i_9] [i_9] [i_9])) : (-1073741824)));
                        }
                        arr_47 [i_3] [i_3] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4183))) : (arr_40 [i_3] [i_3])))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (_Bool)1)) : (var_15))) : (((1073741824) + (((/* implicit */int) (unsigned char)96))))));
                    }
                    for (short i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_13]))))))), ((~(((((/* implicit */_Bool) arr_33 [i_7])) ? (((/* implicit */int) arr_25 [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)224))))))));
                        arr_51 [i_8] [i_8] [i_8] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_0 [i_3])))) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_13] [i_13]))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_55 [i_3] [i_3] [i_3] [i_13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_13] [i_13])) >> (((((/* implicit */int) var_8)) + (6614)))))) ? (var_16) : (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) var_6)) : (var_1)))));
                            var_27 &= ((/* implicit */_Bool) arr_4 [i_3] [i_3]);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (_Bool)1))));
                            arr_58 [i_3] [i_7] [i_7] [i_13] [i_15] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((905570225) - (((/* implicit */int) var_6))))), ((((_Bool)1) ? (min((((/* implicit */unsigned int) var_10)), (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (var_15))))))));
                            arr_59 [i_8] [i_8] [i_8] [i_8] [i_8] [i_13] [i_8] = ((/* implicit */signed char) arr_35 [i_15] [i_3] [i_3] [i_7 - 1] [i_3]);
                        }
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        arr_62 [i_3] [i_7] [i_8] [i_16 + 1] [i_16 + 1] = ((/* implicit */unsigned char) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-7472)) : (var_9)))) > (min((((/* implicit */unsigned int) (short)-6393)), (3257470749U)))))))));
                        arr_63 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_44 [i_3] [i_3] [i_8] [(_Bool)1] [i_16]);
                    }
                    arr_64 [i_8] [i_3] = arr_32 [i_3] [i_3] [i_3];
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 2; i_17 < 7; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_29 = ((/* implicit */short) var_2);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_65 [i_3])))) ? (var_4) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */_Bool) var_2);
    }
    var_32 = ((/* implicit */unsigned short) var_4);
    var_33 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 491953267U)) ? (var_9) : (var_10))))))));
    var_34 = ((/* implicit */unsigned long long int) (short)7168);
    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)25)), (var_14)))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)64))))))) ? (((var_4) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
