/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127754
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                        arr_11 [i_1] [i_1] = ((var_2) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_9)));
                        var_20 &= arr_6 [i_0 + 1] [i_0 + 1] [i_3];
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((int) arr_4 [i_0 - 2] [i_0 - 2] [6ULL]));
        arr_12 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (unsigned char)157)))));
    }
    var_22 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (long long int i_4 = 4; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_25 [i_4] [i_4] [i_6] = (+(((/* implicit */int) arr_20 [5LL] [(unsigned short)10] [i_6] [(unsigned short)10])));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_13 [i_4]))));
                            arr_26 [i_4] [i_6] [15ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(424683547))))))) & ((-(((/* implicit */int) arr_20 [i_4 + 3] [3] [i_6] [i_4 - 1]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) var_0);
                arr_27 [i_4 - 3] [i_5] [i_4 - 3] = ((/* implicit */int) var_5);
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */long long int) (((((~(((/* implicit */int) arr_20 [i_10 + 2] [i_9] [i_9] [i_5])))) + (2147483647))) << (((((var_6) + (4789752729653974881LL))) - (5LL)))));
                                arr_38 [i_10] = ((/* implicit */signed char) max((min((min((var_4), (((/* implicit */unsigned int) arr_22 [9ULL] [i_5] [i_8] [i_10] [(signed char)15])))), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)185)) - (((/* implicit */int) (unsigned short)9982))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_11] [i_11] [i_11])))))));
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (int i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_48 [i_12] [(signed char)2] [i_14] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) arr_24 [i_13 + 4] [i_13 - 1] [i_13 - 1] [i_13 - 1]))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11] [i_12] [2LL] [i_13] [i_13 - 1] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
                        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_13 + 4] [i_13 + 1] [i_13 - 1] [i_13 + 4])) || (((/* implicit */_Bool) (unsigned char)157)))) || ((((!(((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_14] [i_11])))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_7 [i_14] [i_14] [(unsigned short)7] [i_14])))))))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2201506875U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
                        arr_49 [i_11] [i_12] [i_12] [i_13 + 4] [(unsigned char)11] [i_14] = ((/* implicit */unsigned int) ((min((1630309713U), (((/* implicit */unsigned int) (unsigned short)25876)))) > (arr_32 [i_11] [i_12] [i_13] [i_12])));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_19)))))))));
    }
}
