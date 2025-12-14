/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13246
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned char) (-((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6))))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) (short)-29168))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((unsigned char) ((_Bool) (_Bool)1)))));
                                var_15 = ((/* implicit */short) (!(((_Bool) var_4))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_10 = 3; i_10 < 21; i_10 += 2) 
                            {
                                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((_Bool) var_1));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned char)246))))) ? ((~(((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_0)))) : ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_10 - 1] [i_10 + 2] [i_1] [i_10] [i_1])) : (((/* implicit */int) (unsigned char)6))))));
                                arr_28 [i_10] [i_10] [i_10] [i_10] [i_1] = ((/* implicit */signed char) var_6);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */int) arr_21 [i_8] [i_0] [i_0])) - (((/* implicit */int) (signed char)116)))) : (((((/* implicit */int) (short)-32274)) - (((/* implicit */int) var_4)))))) * (((/* implicit */int) (!(((_Bool) arr_6 [i_0] [i_0] [i_8] [i_8] [(short)2]))))))))));
                            }
                            arr_29 [i_1] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32744)))) / (((/* implicit */int) ((short) arr_15 [i_8 - 1] [i_8 + 1] [(_Bool)1] [i_8 + 1] [i_8 - 1])))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-32755))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-32274)))) : (((/* implicit */int) (short)-27582))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((signed char) (short)-21728)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_18 += (_Bool)1;
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-29069)) : (((/* implicit */int) (short)23215)))))) ^ (((/* implicit */int) (unsigned char)94))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 2; i_14 < 23; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)17468)) : (((/* implicit */int) (signed char)-21))));
                                var_21 = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-26)))));
                                var_22 = ((_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (short)-32283)) : (((/* implicit */int) (unsigned char)172))));
                                var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_34 [i_14 + 1])) ? (((((/* implicit */int) (unsigned char)145)) + (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (103)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_13] [i_13 - 1] [i_13 - 1] [i_13])) * (((/* implicit */int) (short)32756))))) ? (((/* implicit */int) arr_40 [i_13] [i_13] [(short)18] [i_13] [i_13 - 1] [i_12] [i_13 - 1])) : (((/* implicit */int) (_Bool)1))));
                    arr_43 [i_12] [i_12] [i_12] = ((/* implicit */signed char) arr_35 [i_13] [i_13] [i_13]);
                    arr_44 [i_11] [i_11] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_2))))))) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-23375)) ? (((/* implicit */int) (short)24305)) : (((/* implicit */int) (unsigned char)62))))))));
        /* LoopSeq 4 */
        for (signed char i_16 = 2; i_16 < 23; i_16 += 4) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_42 [i_16 + 1] [i_16])) - (25))))))))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */int) arr_34 [i_16 - 1])) >= (((/* implicit */int) (short)32744)))))));
            var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_39 [i_11] [i_11] [(signed char)18] [i_11])) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-25393))))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_29 *= (short)25776;
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24305)) ? (((/* implicit */int) (signed char)-90)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)47))))));
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            arr_53 [i_18] = ((/* implicit */unsigned char) var_6);
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_36 [i_11])) : (((/* implicit */int) arr_36 [(_Bool)1])))))));
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) var_5)))))));
            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (unsigned char)239)))));
            arr_58 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)11)) / (((((/* implicit */int) (short)-24306)) - ((-(((/* implicit */int) (short)27943))))))));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        arr_63 [i_11] [i_11] [i_11] [i_20] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-26))))));
                        var_34 = ((/* implicit */short) (unsigned char)91);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_22] [i_23] [i_23] [i_23] [i_23]))));
            var_36 = ((/* implicit */short) min((var_36), ((short)24410)));
            var_37 = (short)24423;
            arr_69 [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_23] [i_23] [i_23])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)127))));
        }
        var_38 -= ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-24411)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_24 = 3; i_24 < 11; i_24 += 2) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) var_5);
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)239)) < (((/* implicit */int) (unsigned char)17)))) ? (((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (short)32756)))) : (((/* implicit */int) ((signed char) (short)-24409))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        arr_78 [i_26] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_32 [i_26]))));
        /* LoopNest 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (signed char i_28 = 0; i_28 < 22; i_28 += 4) 
            {
                {
                    arr_85 [i_26] [i_26] [i_26] [i_26] = ((/* implicit */_Bool) var_11);
                    var_41 = ((/* implicit */unsigned char) ((signed char) arr_21 [i_26] [i_26] [i_26]));
                }
            } 
        } 
        arr_86 [i_26] [i_26] = ((/* implicit */short) arr_11 [i_26] [i_26] [i_26] [i_26] [i_26]);
    }
    var_42 = var_10;
}
