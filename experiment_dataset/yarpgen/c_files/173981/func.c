/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173981
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_0 [i_0 + 1])), (arr_1 [i_0 - 2]))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) && (((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        arr_4 [i_0] = ((int) ((_Bool) arr_1 [i_0 - 1]));
        arr_5 [i_0] = ((/* implicit */short) (~(((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        arr_8 [8] &= ((/* implicit */unsigned long long int) ((int) arr_1 [i_1 + 1]));
        arr_9 [10ULL] = ((/* implicit */unsigned int) arr_0 [i_1 - 2]);
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 3]))) > (1099511627775ULL)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */long long int) (~(arr_12 [i_2 + 1])));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                {
                    arr_19 [i_2 - 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_2))) != (((/* implicit */int) ((short) arr_12 [i_2 + 1])))));
                    arr_20 [i_2 - 2] [i_3 + 1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4] [i_3 + 1] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_18 [i_4] [i_4 + 2] [i_4 + 3] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4]))));
                    arr_21 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_2 - 2]))));
                    arr_22 [i_4] = ((/* implicit */_Bool) arr_12 [i_3 - 1]);
                }
            } 
        } 
        arr_23 [i_2] [i_2 - 2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned short)22485)) * (((/* implicit */int) (signed char)66)))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_33 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (unsigned char)0);
                    arr_34 [i_7] [i_6] [i_5 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 - 1] [i_5] [i_6]))));
                    arr_35 [i_5] [i_5] [i_5 + 1] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6])))))));
                    arr_36 [i_5 - 1] [i_5 - 2] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099511627775ULL)) ? (2147483647) : (((/* implicit */int) (unsigned char)209))));
                    arr_37 [i_5 + 1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (~(arr_32 [i_5] [i_5 + 1] [i_6])));
                }
            } 
        } 
        arr_38 [i_5 + 1] = ((/* implicit */short) (~(arr_30 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) 
    {
        arr_41 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_40 [i_8]);
        arr_42 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_8 + 3]))));
    }
    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        arr_45 [i_9] = ((/* implicit */int) (((-(((/* implicit */int) arr_24 [i_9])))) >= (((/* implicit */int) (((!(((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [12LL])))) && ((!(((/* implicit */_Bool) var_18)))))))));
        arr_46 [i_9] = ((/* implicit */unsigned short) 5LL);
        arr_47 [i_9] = ((/* implicit */_Bool) arr_28 [i_9]);
        arr_48 [i_9] = ((/* implicit */short) ((arr_44 [i_9] [i_9]) + (((((arr_16 [i_9]) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9]))))) ? (max((((/* implicit */int) arr_17 [i_9])), (arr_1 [i_9]))) : ((~(arr_30 [i_9] [i_9] [i_9] [i_9])))))));
        arr_49 [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) 13051903760422203349ULL))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3192924351U)))))));
    }
}
