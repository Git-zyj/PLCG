/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142492
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_10 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                                var_11 ^= ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) arr_4 [(unsigned char)10])))), (max((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_2 [i_0] [i_3] [i_3])) : (((/* implicit */int) var_4)))), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) max(((unsigned char)219), ((unsigned char)63)))), ((~(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)9] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)98))))))));
                    arr_11 [i_0] [i_0] = var_7;
                    var_13 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) | (((/* implicit */int) (unsigned char)111)))))));
                                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_6 - 2])) << (((((/* implicit */int) arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 2])) - (116))))) % (max(((+(((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) << (((((/* implicit */int) var_8)) - (67)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        arr_18 [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) && (((((/* implicit */int) arr_8 [i_7])) != (((/* implicit */int) var_9)))))))));
        var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)15))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        arr_25 [i_7 - 1] [i_7] [(unsigned char)5] [i_9] [i_7 - 1] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (unsigned char)118))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 4; i_11 < 14; i_11 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)89)) / ((~(((/* implicit */int) var_3)))))) != ((+(((/* implicit */int) arr_14 [(unsigned char)10] [i_8] [i_8] [i_9] [(unsigned char)10] [i_11]))))));
                            arr_28 [(unsigned char)13] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                            arr_29 [i_9] [i_9] [i_9] [i_9] [i_11] = arr_16 [i_11 + 3];
                            arr_30 [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_7 + 2] [i_11 - 1] [i_11 + 2]))));
                        }
                    }
                } 
            } 
        } 
        arr_31 [(unsigned char)4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 + 2])) : (((/* implicit */int) arr_21 [i_7 + 3] [i_7 + 3]))))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (max((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)121)))), (((/* implicit */int) min((var_5), (arr_36 [i_7] [i_13])))))) : (((/* implicit */int) max((arr_14 [i_7] [(unsigned char)21] [i_7] [i_7] [i_7 + 1] [(unsigned char)10]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)187))))))))));
                        var_19 += var_4;
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        var_20 *= arr_6 [i_15] [i_15] [(unsigned char)2] [i_15] [i_15];
        /* LoopNest 2 */
        for (unsigned char i_16 = 3; i_16 < 20; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)169)));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        for (unsigned char i_19 = 1; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned char)11] [i_16] [(unsigned char)23] [i_18] [i_19])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((arr_41 [i_16 - 1]), (arr_8 [i_19 - 1])))))))));
                                arr_51 [i_15] [i_15] [(unsigned char)3] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_0 [i_17])))), ((+(((/* implicit */int) arr_46 [i_16 + 1] [(unsigned char)21]))))));
                                arr_52 [i_15] [i_15] [i_16 + 3] [i_15] [(unsigned char)1] [i_18] [i_15] = var_7;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 2; i_20 < 20; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 22; i_21 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned char) min(((+(((/* implicit */int) min(((unsigned char)192), ((unsigned char)224)))))), (((/* implicit */int) arr_6 [i_21] [i_20 + 3] [(unsigned char)0] [(unsigned char)0] [i_15]))));
                                arr_60 [i_15] [i_21] [i_17] [i_20] [i_21] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_21])), (max(((-(((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) < (((/* implicit */int) var_8)))))))));
                                var_24 *= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_15 [i_16 + 3] [i_20 + 3] [i_21 - 1])) < (((/* implicit */int) arr_6 [i_20 + 3] [i_21] [i_21 + 1] [i_21 - 1] [i_21])))), (((((/* implicit */int) (unsigned char)22)) < (((/* implicit */int) arr_59 [i_16] [i_17] [i_20 + 2] [i_20 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
