/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146762
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (var_2)))) + (arr_2 [i_0])));
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_5)))) / (((/* implicit */int) arr_6 [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_4 [i_0] [i_0] [i_0]))) <= (arr_4 [i_3] [i_4] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_18 = var_1;
                            var_19 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) || (arr_1 [i_0])));
                        }
                    }
                } 
            } 
            var_20 ^= ((/* implicit */unsigned int) arr_14 [i_3] [i_0] [i_3] [i_0] [i_0]);
        }
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_8))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [21LL] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_0]))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_23 = ((/* implicit */short) arr_8 [i_7] [i_7]);
        var_24 = ((/* implicit */long long int) var_2);
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44832)) ? (530900996U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11359)))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (short i_10 = 2; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) (!(((arr_5 [i_7] [i_10 + 2] [i_7]) == (max((var_10), (((/* implicit */long long int) var_1))))))));
                        var_27 = ((/* implicit */unsigned char) arr_10 [i_7] [i_7] [i_10 + 2] [i_10]);
                        var_28 = ((/* implicit */short) var_0);
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_14 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_9])) | (((/* implicit */int) var_7)))));
                        var_30 = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9] [i_7] [i_9] [i_7] [i_8] [i_10 - 2]))) : (var_10))));
                    }
                } 
            } 
        }
    }
    var_31 = ((/* implicit */unsigned char) var_8);
}
