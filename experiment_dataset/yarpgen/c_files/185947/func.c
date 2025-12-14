/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185947
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) (-(((((long long int) (unsigned char)19)) / (((long long int) (unsigned short)38198))))));
                                arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_6 [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (((/* implicit */int) (short)-2972)))))));
                                arr_13 [i_2] [i_0] [(_Bool)1] [i_3 - 1] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) arr_10 [i_0] [i_1 - 2] [i_2 - 1] [i_2] [(unsigned short)3] [i_4 - 1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_0))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 4; i_6 < 21; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        arr_24 [i_5] [i_6] [i_7] [(unsigned char)11] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_1)))) - (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [(short)0] [i_8] [i_6 + 2] [i_8])), (((unsigned short) (unsigned short)38198)))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-((~(1095147985269026116LL))))))));
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_16 = ((unsigned char) arr_17 [i_5] [i_6 - 2]);
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_1))))))), ((-(((long long int) var_6))))));
                        arr_27 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1))))) ? (var_8) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_15 [i_9 + 3]))))))));
                        arr_28 [i_7] = ((/* implicit */unsigned short) var_5);
                    }
                    arr_29 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)236)));
                }
            } 
        } 
    }
    for (int i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) var_11);
        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_9), (var_2)))), (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 3) 
    {
        arr_34 [i_11] [i_11] = ((/* implicit */signed char) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 24; i_12 += 4) 
        {
            var_20 = ((/* implicit */_Bool) arr_37 [i_11 + 3] [i_11]);
            var_21 = ((/* implicit */signed char) ((unsigned short) var_7));
        }
    }
    var_22 = ((/* implicit */long long int) var_9);
}
