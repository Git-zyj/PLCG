/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136352
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
    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            var_11 = ((/* implicit */int) var_5);
                            var_12 += ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_8 [i_0] [i_4 + 2] [i_3] [i_3] [i_4]), (arr_8 [i_0] [i_4 + 4] [i_4] [i_0] [i_4 + 4]))))));
                            arr_12 [i_0] [i_0] [(_Bool)1] [9] [i_4 + 1] [i_0] [19U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1713515020)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)78))));
                            arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_1)), (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) + (arr_0 [i_0] [22]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((short) arr_11 [i_4] [i_2] [i_4])))));
                        }
                        var_14 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                        arr_14 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) arr_5 [i_0] [i_2] [i_1] [i_0]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 3; i_5 < 23; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    var_15 += (_Bool)0;
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5 - 1] [i_0] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_5 + 2] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5 - 3] [i_0] [i_5] [i_5 - 3]))))) ? (((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1] [i_0] [i_5] [i_5 - 1]))));
                                arr_25 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_5])));
                                var_17 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) 2147483644)), (((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_6 [i_0] [i_0])), (-2147483644))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_24 [i_0] [i_5 + 1]))))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) 2147483644)) ? (var_6) : (((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (long long int i_11 = 4; i_11 < 13; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_18 [i_12] [i_11] [i_10]) + (2147483647))) << (((/* implicit */int) ((arr_24 [i_9] [i_9]) >= (((/* implicit */int) arr_4 [i_12] [i_10] [i_9])))))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_9] [i_9] [i_10] [i_10] [i_11 - 3] [i_12])) : (((/* implicit */int) arr_10 [i_9] [i_10] [i_10] [(signed char)7] [i_11 + 3] [i_12]))))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (max((((/* implicit */unsigned long long int) arr_33 [i_11])), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_21 |= ((/* implicit */unsigned char) ((unsigned long long int) max((arr_5 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2]), (((/* implicit */unsigned short) (_Bool)0)))));
                        var_22 += ((/* implicit */unsigned char) ((unsigned int) arr_10 [i_9] [i_10] [i_10] [i_10] [i_10] [i_12]));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (8226915230935828716ULL))))));
                    }
                } 
            } 
        } 
    }
}
