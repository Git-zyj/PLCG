/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187538
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
    var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [(unsigned char)2]), (arr_0 [i_0])))) >> (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) - (4028421317U)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [(short)6] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_7))));
                        var_20 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) arr_0 [i_3 - 1])), (var_8)))));
                        arr_9 [i_3] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_8))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (max(((-(((/* implicit */int) arr_8 [i_3 - 3] [i_3] [i_2] [(short)4] [i_3] [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2)))))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_3 + 1] [i_2])) + (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (unsigned short)43836)))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) * ((-((+(((/* implicit */int) var_15))))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_4 - 3] [i_2] [i_0] [(signed char)10] [i_0] = ((/* implicit */signed char) var_5);
                        arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)43834))) || (((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_11 [i_0] [i_1 - 1] [9U] [i_1 - 1] [i_2]))))));
                        var_23 = ((/* implicit */signed char) (((((-(var_12))) % (var_10))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) arr_10 [(_Bool)1] [i_2] [i_1] [(unsigned short)8] [(unsigned char)6])))))));
                    }
                    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)43836)) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_2 [i_1 - 1])))))));
                    var_25 = ((/* implicit */short) (((((+(((/* implicit */int) var_11)))) - (((((/* implicit */int) arr_10 [i_2] [i_1] [i_1 - 1] [i_0] [i_0])) - (((/* implicit */int) (unsigned char)149)))))) * ((-(((((/* implicit */int) (unsigned short)43844)) / (((/* implicit */int) var_5))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_17 [(unsigned char)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [(short)0] [i_0] [(short)0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_5])))) - (((/* implicit */int) var_6))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_5] [i_0] [i_0] [i_5]), (((/* implicit */short) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-98))))))) ? (((((/* implicit */_Bool) min((2322937212U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_7 [i_0] [(unsigned short)2] [i_0] [i_5]))))) - (((((/* implicit */_Bool) 67092480U)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_5])) : (((/* implicit */int) var_14)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_23 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (((-((-(1440659070))))) & ((-(((/* implicit */int) (unsigned short)18728))))));
                        var_27 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-15913)) : (((/* implicit */int) arr_5 [i_6] [i_5]))))) ? (((unsigned int) (-(((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) min(((unsigned char)106), (((/* implicit */unsigned char) arr_3 [i_6] [i_6] [i_7]))))) : (((/* implicit */int) var_6)))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11328)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [6U] [(_Bool)1]))) : (arr_22 [(short)1] [(unsigned char)6] [i_6] [i_7])))) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_7] [i_6] [i_5] [i_5] [i_0])))))))) ? (((/* implicit */int) arr_21 [i_0] [i_5] [i_6] [(short)0])) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_4 [i_6] [(signed char)2])))), (((((/* implicit */_Bool) (unsigned char)102)) && (((/* implicit */_Bool) -1682563535)))))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_5] [(_Bool)1] [i_7])) / ((+(((/* implicit */int) ((unsigned char) (unsigned short)46808)))))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_24 [(signed char)6] [(unsigned short)2])) / (((/* implicit */int) var_13)))))))));
                arr_31 [i_9] [i_8] [i_8] = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_8]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9]))) / (arr_1 [i_0] [i_8])))));
                var_31 = ((/* implicit */short) max((((_Bool) ((((/* implicit */_Bool) arr_4 [i_9 - 1] [(short)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_26 [i_0] [i_8] [i_0])))), ((!(((/* implicit */_Bool) arr_26 [i_9 - 2] [i_0] [i_0]))))));
                var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [(unsigned short)9] [i_8] [i_9] [(unsigned short)11]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1074569374)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)63))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_8] [i_8] [i_9 - 1]))) - (2828487650U))));
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        {
                            arr_37 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_14)) - (((/* implicit */int) arr_8 [i_0] [i_8] [(unsigned char)2] [(unsigned char)2] [i_9] [i_8]))))))) ? (((/* implicit */int) max((arr_16 [i_9 - 2]), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4149074279U)) && (arr_35 [i_10] [i_11])))))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_9]))))) ? (((int) var_15)) : (((/* implicit */int) arr_15 [i_9 - 1] [i_11 + 3] [i_10 - 1])))) > (((/* implicit */int) (((+(arr_26 [i_9] [i_10] [i_11]))) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_28 [i_0] [i_0] [(unsigned char)7] [9U]), (arr_16 [(short)6])))))))))))));
                            arr_38 [i_0] [i_9] [(_Bool)1] [i_10] [5U] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9] [(unsigned char)5] [i_11] [i_11] [i_9])) + (((/* implicit */int) arr_33 [i_9] [(short)5] [i_9] [(short)5] [i_9])))))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */signed char) ((short) arr_2 [i_8]));
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            var_35 ^= ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))), (arr_41 [(short)10]))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (short i_15 = 3; i_15 < 8; i_15 += 4) 
                    {
                        {
                            arr_51 [i_0] [(unsigned short)4] [i_12] [i_12] [i_14] [i_14] [i_14] = (+(var_8));
                            var_36 = ((/* implicit */int) max((var_36), (((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((arr_2 [i_13]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12])))))))) ? (((/* implicit */int) arr_47 [i_15] [(signed char)4] [i_13] [(signed char)4] [8U])) : (((/* implicit */int) (!(((_Bool) arr_41 [(unsigned short)6])))))))));
                            arr_52 [i_0] [i_12] [i_12] [3U] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_13] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (((((/* implicit */_Bool) arr_24 [i_15] [0U])) ? (2322937227U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) min((((/* implicit */signed char) var_16)), (var_0))))))) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_53 [i_12] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_20 [i_0] [(short)4] [(_Bool)1] [(short)9] [(short)9] [i_12]))), (var_8)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_13] [(short)0] [i_0])) >= (arr_48 [i_12] [i_12]))))) * (min((arr_22 [i_0] [i_12] [i_0] [i_13]), (((/* implicit */unsigned int) arr_40 [(unsigned char)4] [i_12] [i_13 - 2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)4] [i_0])) ? (671236086U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) || (((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned short)13918))))))))));
            }
            arr_54 [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_16 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_41 [i_12])))))))));
        }
        for (signed char i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_30 [i_18] [i_17] [i_16] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_49 [i_0] [i_16] [(_Bool)1]))) - (((/* implicit */int) ((((/* implicit */int) arr_25 [i_16] [i_0])) >= (((/* implicit */int) var_6)))))))) : (var_10))))));
                        var_38 = ((/* implicit */unsigned short) 1308942609U);
                    }
                } 
            } 
            var_39 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_50 [i_0] [i_16] [3U] [(short)2] [i_16])))) ? (((((/* implicit */int) arr_45 [i_16] [i_16] [i_16] [i_16])) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_16] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_16])) > (((/* implicit */int) (unsigned short)13918)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)2]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_43 [i_16] [i_0] [i_16])), (var_14)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-417))) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        }
        var_40 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [2U] [i_0] [(unsigned char)10])) && (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_41 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */signed char) var_11)), (var_0))));
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
    {
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
        {
            {
                var_42 = ((/* implicit */short) max(((-(((/* implicit */int) ((signed char) arr_64 [11]))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [i_20]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_19])) << (((((/* implicit */int) arr_66 [(short)4])) - (31505)))))))))));
                var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (short)19795)))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_10)))))));
                var_44 = ((/* implicit */_Bool) ((short) arr_67 [i_19]));
            }
        } 
    } 
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)256)) >> (((/* implicit */int) var_1))))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (3623731209U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (unsigned short)20875)))))))));
}
