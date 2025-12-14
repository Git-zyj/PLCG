/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184116
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38694)) << (((/* implicit */int) (((~(((/* implicit */int) (signed char)71)))) <= (((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned short) (signed char)-81)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_18 |= ((/* implicit */long long int) ((15001001958583358023ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) - (arr_11 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1])));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 3] [(unsigned short)1]) + (2147483647))) << (((((((((/* implicit */_Bool) -211587920)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))) + (20631))) - (14))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_20 [i_0] [i_5] [i_1 + 2] [i_0] |= ((/* implicit */unsigned char) ((long long int) (unsigned short)16207));
                    arr_21 [i_1 + 2] [i_1] [i_6] = ((((/* implicit */_Bool) (short)-17887)) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((arr_0 [i_5]) != (((/* implicit */int) var_2))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    arr_25 [i_0] [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) 1951630623);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)78))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        arr_31 [i_1] [i_1] [(_Bool)1] [i_9] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_1] [i_5]))))));
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-81)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        var_23 = ((/* implicit */unsigned short) ((var_13) ? (((((/* implicit */_Bool) 11233586334946137527ULL)) ? (272817704U) : (3690620605U))) : (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) (short)6497)) : (((/* implicit */int) (unsigned char)3)))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_10))) + (((/* implicit */int) arr_1 [i_1 + 1] [i_9]))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1 - 3] [i_5] [i_8] [i_10 + 1])))) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
                    }
                    var_28 -= ((/* implicit */unsigned char) ((((int) var_6)) != (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (signed char)13))));
                        var_30 *= ((/* implicit */unsigned char) var_3);
                    }
                    arr_37 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [(unsigned short)8]))) : (arr_7 [i_1 - 1] [i_1 + 2])));
                }
            }
        }
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_13 = 4; i_13 < 12; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        {
                            var_31 = arr_48 [i_0] [i_0] [i_0];
                            var_32 = ((/* implicit */unsigned char) var_10);
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_14 [i_0] [i_12] [i_13] [i_0] [i_12]))));
                            var_34 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)47139))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) ((int) var_13));
        }
        var_36 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5613110182601363171ULL)) ? (var_10) : (arr_48 [i_0] [i_0] [i_0]))) << (((arr_39 [i_0]) - (1075904900)))));
        var_37 = ((/* implicit */unsigned long long int) ((((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))));
    }
    var_38 = ((/* implicit */unsigned short) var_10);
}
