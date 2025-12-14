/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148993
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [(unsigned short)5] [i_0] [i_0]);
                        arr_10 [i_0] [14ULL] [i_2] [i_1] |= ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                        var_19 = ((/* implicit */long long int) max((((unsigned long long int) max((arr_6 [i_2] [i_2] [(unsigned short)0] [i_2]), (((/* implicit */unsigned short) var_1))))), (((/* implicit */unsigned long long int) (unsigned char)202))));
                    }
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_1 [i_4 - 3]);
                        arr_14 [i_0 + 3] [i_2] [i_0 + 3] [i_4] = ((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 2]);
                    }
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_20 = ((/* implicit */long long int) arr_18 [i_5]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_25 [i_7] = ((/* implicit */int) var_12);
                    arr_26 [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((int) (unsigned short)65535))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) || (((((/* implicit */_Bool) 1155887158U)) && (((/* implicit */_Bool) (unsigned short)65535))))));
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52629))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_16)))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)9089)) + (((/* implicit */int) (unsigned short)31020)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_23 |= ((/* implicit */int) arr_7 [i_10]);
                        arr_39 [i_11] [i_11] [i_9] [i_11] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) 7084769778159878837LL)))))) + (arr_27 [i_8])))) ? (min((arr_38 [i_8] [i_9] [i_10] [i_9] [i_11] [i_11]), (((/* implicit */unsigned int) arr_8 [i_8] [i_9] [(unsigned short)0] [i_11])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8] [i_11] [i_11])) ? (max((((/* implicit */int) (unsigned short)9094)), (var_0))) : (((/* implicit */int) (unsigned short)0)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
    {
        arr_43 [i_12] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((643494960U) < (((/* implicit */unsigned int) arr_1 [i_12])))))) != (var_12))));
        arr_44 [i_12] = 2147483647;
        arr_45 [i_12] = ((/* implicit */int) var_6);
    }
    for (int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
    {
        arr_48 [i_13] = ((/* implicit */unsigned int) max((((unsigned long long int) ((int) (unsigned short)31333))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_13] [i_13] [i_13] [i_13]))))), (min((arr_3 [(unsigned short)14] [i_13]), (3672514155U))))))));
        var_24 = ((/* implicit */unsigned char) min((max((var_11), (((/* implicit */long long int) min((3651472335U), (((/* implicit */unsigned int) (unsigned short)65535))))))), (((/* implicit */long long int) arr_29 [7]))));
        var_25 = ((/* implicit */_Bool) arr_36 [i_13] [i_13] [8LL] [i_13]);
        var_26 = arr_1 [15];
        arr_49 [i_13] [i_13] |= (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)9089))));
    }
}
