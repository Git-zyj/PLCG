/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102509
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
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -389454729628882144LL)) ? (((/* implicit */int) var_7)) : (arr_1 [i_0]))) / (arr_1 [i_0 + 2]))))));
        var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_1 [i_0]) << (((((/* implicit */int) var_9)) - (1)))))) ? (((((/* implicit */_Bool) -389454729628882144LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_16 -= ((/* implicit */signed char) (~(var_12)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) var_5);
                        arr_17 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned short) arr_13 [i_1] [i_2] [i_2] [i_4] [i_2] [i_4]));
                        var_18 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_2 + 2] [i_4]))));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_2 - 2] [i_1 - 1]))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-389454729628882167LL)))) > (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+((-((-(arr_15 [i_5] [i_5] [i_1] [i_1]))))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (~(0ULL)));
                        arr_26 [i_7] [i_5] = (!(((/* implicit */_Bool) (~(((16987926313339599800ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) var_8))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_8 = 4; i_8 < 12; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) 4230163113U);
                        arr_33 [i_1] [i_5] [i_8] [i_9] [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_9])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_14 [i_5] [i_5] [i_8] [i_9] [i_5] [i_8]), (((/* implicit */int) (unsigned short)4064)))) >= (arr_18 [i_8] [i_8 + 1] [i_8]))))) : (arr_6 [i_1]));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            arr_36 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1] [i_10 + 3]))))), ((((!(((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_10] [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (16987926313339599799ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            arr_37 [i_1] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_3 [i_1 + 1] [i_10 + 2])), ((~(((/* implicit */int) arr_34 [i_1] [i_10])))))) != (((/* implicit */int) (signed char)113))));
            arr_38 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((8178005259676297988ULL) << (((14864063977483587510ULL) - (14864063977483587493ULL)))))) ? (((/* implicit */unsigned long long int) var_11)) : (arr_31 [i_10] [i_10] [i_10] [i_10 + 2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            arr_39 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) 898578823)) ? (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32640))));
        }
        for (unsigned int i_11 = 4; i_11 < 14; i_11 += 4) 
        {
            arr_43 [i_1] = ((/* implicit */signed char) -389454729628882165LL);
            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1458817760369951816ULL)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_3 [i_11] [i_11 - 1]))))));
            var_27 = ((/* implicit */unsigned long long int) var_13);
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_9))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1])) ? (3283862244U) : (((/* implicit */unsigned int) 1032667001))))), (8796093022207LL)))));
    }
    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_30 = ((/* implicit */signed char) -9223372036854775797LL);
        var_31 = arr_45 [i_12] [i_12];
    }
}
