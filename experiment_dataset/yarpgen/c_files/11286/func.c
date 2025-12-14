/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11286
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [(unsigned char)7] |= ((/* implicit */unsigned char) var_13);
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            arr_9 [i_0] [i_1 - 3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((unsigned int) (short)-8715)) >> (((/* implicit */int) min((((/* implicit */short) (signed char)0)), (arr_1 [i_1])))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        {
                            arr_18 [(unsigned char)5] [i_2] [(unsigned char)5] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) var_17);
                            arr_19 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((int) (unsigned char)0)), (var_1)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-8715)) <= (((/* implicit */int) var_15))));
                        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) != (((unsigned int) (short)-810)))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) arr_1 [i_1 - 2]))))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned int) var_2);
    }
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((var_15), (((/* implicit */short) (unsigned char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_7] [i_7 - 1]) : (((/* implicit */int) var_10))))) : (((arr_14 [i_7] [i_8] [i_7 - 1] [i_10] [i_9 + 3] [i_10]) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            arr_35 [i_7] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */short) (signed char)-100)), ((short)-15284))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((min((var_4), (arr_5 [i_7 - 1]))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9 + 3] [i_9 + 3] [i_9] [i_9]))) + (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                                var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) (((-(var_7))) >> (((((/* implicit */int) ((signed char) arr_1 [i_7]))) + (129))))))));
                                arr_38 [i_8] [i_8] [i_9] [i_10] [i_11] [i_8] = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_7)));
                            }
                            arr_39 [i_7 - 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_29 [i_7 - 1]))));
                        }
                    } 
                } 
                arr_40 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (short)810);
            }
        } 
    } 
}
