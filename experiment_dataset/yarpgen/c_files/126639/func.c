/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126639
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
    var_18 = var_4;
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_19 = -4201128004664921771LL;
        arr_2 [i_0 + 3] = ((/* implicit */short) ((signed char) (short)19167));
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_1 [i_0 + 2])) / (((/* implicit */int) (unsigned short)58947)))), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_1))))));
        arr_3 [(unsigned short)6] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 + 3]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_0] [14ULL] [i_1] = ((/* implicit */int) arr_0 [i_0 - 1]);
            var_21 -= ((/* implicit */unsigned int) (short)-7510);
            var_22 = ((/* implicit */short) ((4201128004664921770LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_9 [(signed char)9] = ((/* implicit */int) 18446744073709551615ULL);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_12 [i_2] [(unsigned char)7] [i_2] = ((/* implicit */_Bool) var_15);
            arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */unsigned long long int) (-(arr_8 [i_2] [i_2])))) * (((unsigned long long int) arr_10 [(short)3] [(short)3]))))));
            var_23 = ((/* implicit */signed char) arr_8 [i_2] [i_3]);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (var_2) : (((/* implicit */int) arr_4 [i_2]))))) ? (((int) arr_4 [i_2])) : (((/* implicit */int) arr_10 [i_3] [i_2]))));
        }
        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_16 [i_4] [i_4 + 1] [i_4] = ((/* implicit */_Bool) var_14);
            var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_4 - 1])) << (((((/* implicit */int) arr_1 [i_4 - 1])) - (79)))))), (min((4201128004664921770LL), (((/* implicit */long long int) 1801050816))))));
            arr_17 [i_2] [i_4] = ((/* implicit */unsigned int) ((short) arr_14 [i_2] [i_4 - 1] [i_4]));
        }
        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 4; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)45106)))))));
                        var_27 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_15 [i_5 + 2] [i_5 - 1])))) ? (((((/* implicit */_Bool) 1801050816)) ? (var_4) : (((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 3])))) : (((/* implicit */int) ((arr_19 [i_5 + 2] [i_5 - 1]) && (((/* implicit */_Bool) 16782092944951647640ULL))))));
                        var_28 = ((/* implicit */short) var_13);
                    }
                } 
            } 
            var_29 = min((arr_23 [i_2] [i_2] [11U] [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) (short)19179)))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        arr_29 [(_Bool)0] [i_5 - 2] [i_5 - 2] [i_8] [i_5 - 2] [9U] = (+(((/* implicit */int) arr_19 [i_2] [i_8])));
                        arr_30 [i_2] [i_5] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) ((6535081112121694548LL) == (arr_22 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]))));
                        arr_32 [i_2] [i_5 + 2] = ((/* implicit */short) (unsigned short)11307);
                        var_30 = ((/* implicit */unsigned short) arr_4 [i_8]);
                    }
                } 
            } 
        }
    }
    for (int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (unsigned short i_12 = 3; i_12 < 22; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    {
                        var_31 = ((/* implicit */long long int) ((int) arr_44 [i_13] [i_12 + 1] [i_13]));
                        var_32 = ((/* implicit */unsigned long long int) (+(((long long int) ((int) -3252282532256217784LL)))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_42 [i_10] [i_10] [i_10]))));
                    }
                } 
            } 
        } 
        arr_46 [i_10] = ((/* implicit */int) (+(min((((/* implicit */long long int) ((var_2) > (((/* implicit */int) arr_36 [i_10] [i_10] [i_10]))))), (var_11)))));
    }
    for (unsigned char i_14 = 3; i_14 < 9; i_14 += 4) 
    {
        arr_50 [i_14] [i_14 - 2] = ((/* implicit */unsigned short) (+(var_5)));
        var_34 += ((/* implicit */signed char) (+(((((/* implicit */int) arr_19 [i_14] [i_14 - 2])) ^ ((-(((/* implicit */int) arr_0 [i_14]))))))));
    }
    var_35 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) var_15))));
}
