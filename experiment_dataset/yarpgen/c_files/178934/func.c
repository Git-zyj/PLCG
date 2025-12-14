/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178934
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
    var_14 = ((/* implicit */long long int) max((943675860), (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */short) var_12);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned char) var_0);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >= (min((var_11), (((/* implicit */int) var_8)))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)37822)) : (((/* implicit */int) (short)32767)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) - (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((short)-32767), ((short)32767))))));
        arr_8 [i_1] = ((/* implicit */short) arr_3 [i_1]);
        var_19 = var_10;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) max(((~(((/* implicit */int) arr_6 [i_2] [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_5 [i_2] [i_2]))))));
        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_4 [i_2]))));
        arr_11 [i_2] &= ((/* implicit */unsigned char) var_1);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2] [i_2]);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_22 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_6)))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1]))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_1))));
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) arr_4 [i_2]);
            arr_19 [i_4] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_0 [i_4])))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            arr_23 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 1])) | (((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 1]))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_18 [i_5 - 2]) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_18 [i_2]))))) || (arr_6 [i_5 - 1] [i_5 + 1]))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_28 [i_2] [i_5] [i_2] [i_2] [i_2] [i_6] |= (unsigned char)36;
                    var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) (signed char)15))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_26 [i_5 - 2] [i_6] [i_7] [i_7] [i_7] [i_6]))));
                    var_28 = ((/* implicit */_Bool) arr_4 [i_7]);
                    /* LoopSeq 2 */
                    for (short i_8 = 4; i_8 < 20; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (arr_17 [i_2])));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_6] [i_7])) : (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                        var_31 = ((/* implicit */long long int) ((signed char) arr_22 [i_2] [i_5 - 1]));
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_6] [i_6]))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_9] [i_5 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_16 [i_6] [i_6]))) < ((-(((/* implicit */int) var_9))))));
                        arr_35 [i_2] [i_5] [i_2] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                        arr_36 [i_2] [i_9] [i_6] [i_7] [i_9] = var_0;
                    }
                }
                arr_37 [i_2] [i_5] [i_6] = ((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned short)2]);
                var_33 = ((/* implicit */unsigned short) arr_33 [i_2] [i_2] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1]);
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_2])) ? (((/* implicit */int) arr_22 [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) arr_22 [i_5 - 1] [i_5]))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_40 [i_2] [i_2] [i_6] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_5 - 2])) & (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                        var_36 = ((/* implicit */signed char) ((_Bool) ((var_2) || (var_3))));
                    }
                    for (unsigned short i_12 = 3; i_12 < 21; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((arr_13 [i_5 + 1] [i_12 + 1]) ? (arr_29 [i_12 + 1] [i_5] [i_6] [i_5 - 1] [i_5 - 2] [i_6] [i_5 - 1]) : (((/* implicit */int) var_2)))))));
                        arr_48 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                        arr_49 [i_2] [i_2] [i_2] [i_10] [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1]))));
                    }
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
                    arr_50 [i_2] [i_5] = ((/* implicit */short) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_39 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_24 [i_5 - 1] [i_2]))))));
                }
            }
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                var_40 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_47 [i_2] [i_2])))));
                var_41 = ((/* implicit */_Bool) arr_52 [i_2] [i_5 + 1]);
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */int) arr_16 [(signed char)8] [i_5])) - (((/* implicit */int) arr_27 [i_5] [i_5] [i_5]))))));
                    arr_55 [i_2] [i_2] [i_13] [i_14] = ((/* implicit */signed char) ((var_8) ? (((/* implicit */int) arr_16 [i_5 + 1] [i_13])) : (((/* implicit */int) arr_16 [i_5 - 2] [i_14]))));
                    var_43 ^= ((/* implicit */unsigned long long int) ((arr_25 [i_5 + 1] [i_5 - 2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_25 [i_5 - 2] [i_5 - 1]))));
                }
            }
        }
    }
}
