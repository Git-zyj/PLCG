/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165795
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
    var_17 = var_13;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_0] &= ((/* implicit */_Bool) (-(arr_4 [i_1] [i_0] [i_0])));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (((/* implicit */int) (short)4524))));
        }
        var_19 = ((/* implicit */int) (short)31019);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
            var_20 *= ((/* implicit */int) (_Bool)1);
            var_21 = ((/* implicit */unsigned char) var_8);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_18 [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 3] [i_4 + 3] [(signed char)7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 10544224071403558739ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))));
                            arr_19 [i_3] = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((947721841) >> (((((/* implicit */int) (unsigned char)253)) - (247))))));
        }
        for (int i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            arr_23 [i_0] [i_0] = ((/* implicit */short) arr_14 [i_0] [(unsigned char)7] [i_0] [i_6]);
            arr_24 [i_0] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_6])))), (((arr_22 [i_0] [i_6]) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)124)), (var_13)))) : (((/* implicit */int) arr_12 [i_6 + 1] [i_6 + 3] [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]))))));
            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!((_Bool)1)))), (min(((unsigned char)88), ((unsigned char)39)))));
            arr_25 [i_6] = ((/* implicit */unsigned char) var_7);
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            arr_35 [i_0] [i_6] [i_6] [i_8 - 1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_32 [i_8 - 1] [i_9] [i_9] [i_9]), (arr_32 [i_8 + 1] [i_8] [i_8 - 1] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_33 [i_8] [i_8] [i_7] [i_6] [i_6] [i_6 + 1] [i_0]))) + (((/* implicit */int) min(((short)31004), (var_12))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (arr_16 [i_9] [i_7] [i_0] [i_7] [i_0])))) ? (arr_14 [i_9] [i_0] [i_8 - 1] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)6287))))))));
                            arr_36 [i_0] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((unsigned char)236), (var_5)))), ((unsigned short)55995)))), ((~(arr_4 [i_0] [i_6] [i_7])))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_10])) ? (arr_39 [i_10]) : (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (short i_13 = 3; i_13 < 11; i_13 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_47 [i_13 + 2] [i_13 - 3] [i_13 - 3] [i_13 - 2] [i_13] [i_13 + 1]))));
                        arr_50 [i_10] [i_11] [i_12] [i_10] [(short)4] = ((/* implicit */int) var_7);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_5))))))));
                        arr_51 [i_10] [i_11] [i_12] [i_13] &= ((/* implicit */unsigned short) (unsigned char)8);
                        var_25 = ((/* implicit */int) (+(arr_48 [i_10])));
                    }
                } 
            } 
        } 
    }
    var_26 &= ((short) min((((/* implicit */short) (_Bool)1)), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_54 [i_14] [i_14] = min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_53 [i_14]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2070169405789999048ULL))))), (((/* implicit */unsigned long long int) arr_52 [6])));
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_52 [i_14]);
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (short i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    {
                        arr_63 [i_16] &= ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) (unsigned char)227)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (arr_60 [i_14])))) : (((var_14) ? (6560715948597487594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
                        var_27 = var_13;
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) (unsigned short)34221);
}
