/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112479
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)185)) ? (var_8) : (((/* implicit */long long int) var_6))));
    var_14 = ((/* implicit */short) var_5);
    var_15 -= ((/* implicit */unsigned int) ((short) var_3));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) (short)-6446);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0 + 2]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    var_17 = ((/* implicit */short) arr_5 [i_0] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [3LL] [i_3] = (-(arr_7 [i_2] [i_0]));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1] [6U] [6U])) <= (((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_4] [(unsigned char)0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)44460))));
                            var_19 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [(short)14] [i_1] [i_4]))));
                            arr_21 [2U] [i_1 + 1] [(short)7] [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) arr_16 [i_5] [i_1] [i_0]);
                        }
                        arr_22 [i_2 + 2] [i_1 - 1] [(short)3] [(unsigned short)14] [i_0] = (~(((/* implicit */int) (unsigned short)44460)));
                        var_20 = ((((/* implicit */_Bool) 1101796270U)) ? (arr_18 [i_4] [i_2] [i_0 + 3]) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                        var_21 = ((/* implicit */unsigned short) 13811266854326009439ULL);
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        var_22 &= arr_4 [i_0] [i_2 - 1];
                        arr_25 [i_0 - 1] [(unsigned char)15] [i_2 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) 14161762181571996582ULL);
                        arr_26 [i_0] [i_1] [i_1] [(unsigned short)3] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)203))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) var_7)))))));
                        arr_27 [i_6] [i_0] [(short)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-20678))));
                    }
                    var_24 = ((/* implicit */int) arr_15 [(short)15] [i_0] [i_0] [i_0 + 1]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                var_26 += ((/* implicit */unsigned short) (~(547207559)));
                arr_35 [i_9] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_33 [i_9] [i_8 + 3] [i_7] [i_7 + 1]) <= (arr_33 [i_7] [i_8] [i_7] [i_9])))) % (((/* implicit */int) (unsigned short)10245))));
            }
            for (long long int i_10 = 2; i_10 < 20; i_10 += 1) 
            {
                var_27 = ((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_7]);
                var_28 = ((/* implicit */short) (+((~(2305280059260272640LL)))));
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) 3114594310U);
                var_30 ^= ((/* implicit */short) var_11);
                var_31 = ((/* implicit */unsigned short) var_10);
            }
            arr_41 [i_7 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-29814))));
        }
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7 + 1])))) ? (((/* implicit */int) max((arr_30 [i_7] [4ULL]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(unsigned char)10]))) < (var_2))))))) : (((int) 22362565U)))))));
            arr_44 [i_7] = ((/* implicit */unsigned int) var_3);
        }
        /* vectorizable */
        for (unsigned short i_13 = 3; i_13 < 18; i_13 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_31 [i_13 - 2]))))));
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7 - 1])) ? (arr_38 [14] [i_7 + 1] [i_13 + 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_7] [i_13 + 3] [i_13]))))))));
            var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_7 + 1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_40 [i_7] [i_7])) : (((/* implicit */int) (unsigned short)31250)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)34286)) : (2147483647)))));
            arr_47 [i_13 - 3] = ((((/* implicit */unsigned int) -1964267462)) | (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) : (arr_36 [i_13 + 1] [i_7 + 1] [i_7] [i_7 + 1]))));
            var_36 = ((/* implicit */unsigned int) min((var_36), ((+(arr_32 [i_7 + 1] [i_7 - 1])))));
        }
        arr_48 [i_7] = ((/* implicit */short) min((var_8), (min((((/* implicit */long long int) (unsigned char)54)), (-6015331587867626935LL)))));
    }
}
