/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134647
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_10 [i_4] [i_3] [i_4] &= ((/* implicit */unsigned int) var_11);
                            var_15 = (~(arr_2 [i_2]));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) 7);
                            var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                            arr_15 [i_5] [i_1] [i_2] [i_3] [i_3] [i_5] [i_0] = ((/* implicit */_Bool) var_2);
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] [i_3] [i_0]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0 - 1] [i_1] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((+(((/* implicit */int) (_Bool)1))))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) var_5);
                            arr_22 [i_0 - 1] [i_1] [i_3] [i_0] [i_1] [i_0 - 1] = ((/* implicit */int) ((arr_19 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_1]) > (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */int) ((unsigned char) (unsigned short)34004));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [12U]))))) != (((((/* implicit */_Bool) arr_17 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_2] [i_8]))) : (var_10))))))));
                            arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_8]);
                        }
                    }
                } 
            } 
            arr_29 [i_0] = ((/* implicit */int) arr_24 [i_0] [i_1] [i_0 + 1] [i_1] [i_1] [i_1] [i_0]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
        {
            arr_33 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
            arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
            arr_36 [i_0] = ((/* implicit */unsigned short) (+(-1836515950)));
            /* LoopNest 2 */
            for (unsigned int i_10 = 2; i_10 < 12; i_10 += 1) 
            {
                for (int i_11 = 2; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 4; i_12 < 11; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_9] [i_10] [i_12] = ((/* implicit */_Bool) ((arr_42 [i_0 - 2] [i_9] [i_10] [i_10 - 2] [i_10] [i_11] [i_12]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_12 - 4] [i_9] [i_10] [i_11] [i_12 + 3] [i_10 - 1] [i_0]))));
                            arr_45 [i_0] [i_10] [i_0] = var_6;
                            arr_46 [i_0] [i_0] [i_0] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_10])) ? (((/* implicit */int) arr_6 [i_10 + 1] [i_0] [i_0] [i_11])) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24555)) && (((/* implicit */_Bool) (unsigned char)1)))))) : ((((_Bool)1) ? (arr_23 [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205)))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_12))));
                        }
                        var_22 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_9] [i_10])))));
                        var_23 = ((((/* implicit */_Bool) 5136877544690880934ULL)) ? ((+(751065108))) : (((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_9] [i_10 - 2] [i_10 + 1] [i_11 - 2] [i_0])));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
        {
            arr_49 [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0 - 2] [i_0 - 2] [i_13] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) (unsigned char)51))));
            arr_50 [i_0] = ((/* implicit */short) var_3);
            arr_51 [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_0] [i_13] [i_13])))) != (((/* implicit */int) var_0))));
            var_24 = ((/* implicit */unsigned char) (!((_Bool)0)));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_56 [i_0] [i_0] = ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_42 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                        arr_57 [i_0] [i_14] [i_13] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */unsigned short) var_0);
        arr_58 [i_0] = ((/* implicit */_Bool) -147963401);
        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_55 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_0 + 1] [i_0])))));
    }
    for (unsigned char i_16 = 2; i_16 < 13; i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
            {
                {
                    arr_65 [i_17] = ((/* implicit */unsigned char) var_4);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */unsigned int) var_5)) - (1444704282U))) / (((/* implicit */unsigned int) ((1318569116) / (var_1))))))))));
                    arr_66 [i_17] [i_16] = ((/* implicit */unsigned short) ((min((arr_7 [i_16] [i_17] [i_17] [i_18]), (arr_40 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) % (max((((/* implicit */int) ((short) var_2))), (arr_25 [i_18])))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (min((((((/* implicit */int) arr_52 [i_16 - 2] [i_16 - 1] [i_16])) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) arr_62 [i_16 - 2] [i_16 - 2]))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    var_30 = ((/* implicit */unsigned int) ((unsigned short) var_13));
}
