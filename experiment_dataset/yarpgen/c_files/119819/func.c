/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119819
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
    var_17 = ((/* implicit */unsigned char) max((((((long long int) (unsigned short)49838)) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_11))))))), (((/* implicit */long long int) var_15))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 2]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)95))));
            arr_8 [i_1] [i_1 - 3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1 - 2] [i_0 + 1])), (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)45))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) -1813310382)), (arr_10 [i_0] [i_2] [i_0]))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_20 [i_4] [i_2] [i_2] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned char) arr_12 [(_Bool)1] [i_2]))) ? (((/* implicit */int) arr_15 [i_4] [i_0] [i_2] [i_2] [i_2] [i_4])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_5 + 1] [i_2] [i_5 + 1] [i_0 - 1] [i_5 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [(signed char)8] [i_2] [i_5 - 1] [(signed char)8] [i_5] [i_4]))))));
                            arr_21 [i_0] [i_2] [i_4] [i_2] [10ULL] = ((/* implicit */unsigned int) ((unsigned long long int) var_14));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_24 [i_6] &= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) var_16);
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (short)-23840)) : (1813310381)))) ? (-2017314414) : (((/* implicit */int) (!(((/* implicit */_Bool) 492923547)))))));
        arr_26 [i_6] [i_6] = ((/* implicit */long long int) var_3);
    }
    for (signed char i_7 = 4; i_7 < 11; i_7 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7 + 4] [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_7 - 3] [i_7 + 2])) : (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) arr_2 [i_7 - 3] [i_7 + 4])))) : (((/* implicit */int) ((unsigned short) arr_2 [i_7 - 1] [i_7 - 1])))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) max((arr_22 [i_7 - 2]), (arr_22 [i_7 + 2]))))));
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) var_3);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        for (long long int i_12 = 4; i_12 < 12; i_12 += 4) 
                        {
                            {
                                arr_44 [i_8] [i_9] [i_9] [i_11] [i_9] [i_11] = ((/* implicit */unsigned int) arr_6 [i_8] [i_9] [(unsigned char)0]);
                                var_24 &= ((/* implicit */unsigned char) (_Bool)1);
                                arr_45 [i_8] [i_8] [i_10] [i_11] [i_12 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 623287828310174859ULL)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)-84))))))));
                                var_25 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    arr_46 [i_8] [i_9] [i_10] [14ULL] = ((/* implicit */unsigned long long int) ((_Bool) 13962881087921203748ULL));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) (unsigned short)15702);
}
