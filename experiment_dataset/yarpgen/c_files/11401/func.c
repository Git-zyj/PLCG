/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11401
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 ^= ((((/* implicit */_Bool) arr_1 [i_0])) ? (((int) var_1)) : (var_0));
        arr_2 [i_0] = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((184036328345469643ULL) == (18262707745364081975ULL)))) : (((((/* implicit */_Bool) (short)-18282)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned short)16590))))));
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 6; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 - 3] [i_4 - 1] [i_4]))));
                        var_18 = (-(((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_4])) ? (var_4) : (((/* implicit */int) (unsigned short)59420)))));
                        arr_13 [(unsigned short)1] [(unsigned short)1] [i_3] [i_4] &= ((/* implicit */unsigned char) (-(arr_9 [i_2] [i_2 + 3] [i_4 - 1] [(signed char)6])));
                    }
                } 
            } 
            var_19 ^= ((/* implicit */unsigned long long int) (~(arr_4 [i_1 - 1])));
        }
        var_20 = arr_10 [i_1];
        var_21 ^= ((/* implicit */short) ((signed char) (+(((/* implicit */int) (signed char)54)))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_16 [8] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-28))))) - (min((((/* implicit */long long int) 1)), (6455088467560157543LL)))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((-1575276226) & (-439227710)))), (arr_1 [i_5])));
                            arr_27 [i_9] [i_8] [i_7] [15] [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((int) arr_21 [i_7] [i_7] [14] [i_6] [i_9]));
                            arr_28 [4ULL] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(-1703536276)))) ? ((-(((/* implicit */int) var_7)))) : (-439227710))) : (arr_15 [i_5])));
                        }
                        arr_29 [i_5] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_22 [i_6 + 3] [i_6 + 1] [i_6 + 2]) / (arr_22 [i_6 - 1] [i_6 + 2] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((arr_14 [1ULL] [i_8]), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_6 + 2] [i_7] [i_7] [i_5] [i_8]))))));
                        var_23 += ((/* implicit */int) (-(((long long int) ((((/* implicit */int) var_2)) == (var_4))))));
                        var_24 -= ((/* implicit */signed char) arr_21 [i_5] [(unsigned short)13] [i_6 + 3] [i_8] [i_5]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 22; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 3; i_11 < 24; i_11 += 2) 
        {
            for (int i_12 = 1; i_12 < 24; i_12 += 2) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_31 [i_12])))) ? (((/* implicit */int) var_2)) : (arr_37 [18ULL])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 4; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (+(arr_41 [i_12 - 1] [i_11 - 1] [i_14 - 1])));
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_35 [i_11] [i_14]))));
                                var_28 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_3))))) == (((/* implicit */int) arr_39 [i_10 - 2] [i_11 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_14 + 1]))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (arr_33 [i_10])));
                }
            } 
        } 
        arr_42 [i_10] [i_10] = ((/* implicit */int) arr_35 [(short)20] [i_10]);
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 23; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                {
                    arr_49 [14] &= ((((/* implicit */_Bool) arr_36 [i_10 - 2] [i_10 + 1] [i_15 + 1])) ? (arr_36 [i_10 - 2] [i_10 + 1] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                    var_30 = ((((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 184036328345469627ULL)))) ? (arr_38 [i_15] [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_15 - 2] [i_15] [i_10] [i_15] [i_15 + 1]))));
                }
            } 
        } 
        var_31 ^= ((/* implicit */signed char) var_8);
    }
    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (signed char)22))))))), (var_6)));
    var_33 &= ((/* implicit */signed char) var_13);
    var_34 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (long long int i_17 = 4; i_17 < 20; i_17 += 3) 
    {
        for (int i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            for (unsigned char i_19 = 1; i_19 < 21; i_19 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((signed char) ((int) arr_55 [i_17 - 4])));
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_18 + 2] [i_19 + 1])) ? (((/* implicit */int) arr_46 [i_18 + 1])) : (((/* implicit */int) arr_46 [i_18 + 3]))))) ? ((-(((/* implicit */int) arr_46 [i_17])))) : (((/* implicit */int) arr_50 [i_17 + 4] [i_17])));
                    arr_57 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */int) min((184036328345469652ULL), (((/* implicit */unsigned long long int) 465466115))));
                }
            } 
        } 
    } 
}
