/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121585
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
    var_20 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (unsigned short)63655)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) < ((-(((/* implicit */int) var_2))))))));
        var_22 = max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))), (arr_1 [i_0] [i_0])))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (var_7))))));
        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)21155)), (arr_2 [i_0])))))))) | ((~(arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0] [i_0]), ((unsigned short)44399))))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                arr_14 [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)55926))))), (((2393561247U) * (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_13 [i_1 + 1] [i_1] [i_1]), (var_11))))));
                var_25 = ((/* implicit */unsigned short) min((max((((809566312U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) arr_13 [i_3 + 1] [i_3] [i_3])))), (((/* implicit */unsigned int) max((arr_1 [i_3 + 1] [i_1 + 1]), (max((arr_9 [i_2]), (var_4))))))));
            }
            arr_15 [i_1] [i_2] = ((/* implicit */unsigned short) max((min((arr_2 [i_1 + 1]), (((/* implicit */unsigned int) (unsigned short)11624)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (arr_2 [i_1 - 1]))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_20 [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3)) | (((/* implicit */int) var_16))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)53912))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_8)))) >> ((((+(((/* implicit */int) (unsigned short)29555)))) - (29534)))));
                            var_28 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)63403))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((var_7) > (var_1)));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1 - 1])) >> (((2152353308U) - (2152353295U))))))));
        }
        for (unsigned short i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_25 [i_1] [i_8] [i_1 + 2])) > (((/* implicit */int) arr_25 [i_8] [i_8] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) arr_7 [i_9]))))));
                            var_31 = ((/* implicit */unsigned short) (-(var_7)));
                        }
                        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            arr_46 [i_12] [i_12] [i_9] [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (6U))))));
                            var_32 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_2), ((unsigned short)65514))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 1; i_13 < 12; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                            arr_51 [i_1] [i_8] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        }
                        arr_52 [i_1] [i_1] [i_9] [i_10] [i_8] [i_9] = ((max((arr_43 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_19)))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_1 - 1])))))));
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_9])) || (((/* implicit */_Bool) (unsigned short)9632)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned short)63523))))))), (((((/* implicit */int) (unsigned short)32767)) | (((/* implicit */int) var_9))))));
                        arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_48 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_14 = 4; i_14 < 13; i_14 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(2183856285U))))));
                            var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 13; i_15 += 4) 
                        {
                            arr_58 [i_1] [i_1] [i_1] [i_10] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)37269), (var_16)))), (((((/* implicit */int) arr_16 [i_15])) + (((/* implicit */int) arr_27 [i_1] [i_1] [i_8] [i_1] [i_10] [i_15] [i_15]))))))) || ((!(((/* implicit */_Bool) (unsigned short)12841))))));
                            arr_59 [i_1] [i_8] [i_1] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_6), (arr_47 [i_1 + 2]))))));
                        }
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned short)52695)), (var_3))), (arr_26 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1 + 1]))))));
    }
    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_1) < (2253939992U)))))))));
        arr_64 [i_16] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) (unsigned short)32776)))) || (((/* implicit */_Bool) (~(var_1)))))), ((!(((((/* implicit */_Bool) arr_62 [i_16] [i_16])) && (((/* implicit */_Bool) (unsigned short)21511))))))));
        var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((var_8), ((unsigned short)6298)))), (max((((/* implicit */unsigned int) (unsigned short)30672)), (var_18)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            for (unsigned short i_19 = 1; i_19 < 21; i_19 += 2) 
            {
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32795)) && (((/* implicit */_Bool) arr_66 [i_18])))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_69 [i_19 + 1] [i_19 - 1] [i_19 + 1])), (((var_1) | (arr_66 [i_17]))))))));
                    arr_72 [i_17] [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) (+(((3816141251U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_20 = 3; i_20 < 23; i_20 += 4) 
    {
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            for (unsigned int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                {
                    var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((min((arr_73 [i_22]), ((unsigned short)14))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)63523))))))))));
                    arr_81 [i_20] [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) ((min((min((var_3), (((/* implicit */unsigned int) (unsigned short)14)))), (((/* implicit */unsigned int) var_17)))) & (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)60043)))) ^ (((/* implicit */int) min((var_6), (var_13)))))))));
                }
            } 
        } 
    } 
}
