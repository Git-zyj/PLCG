/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150341
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
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) (_Bool)1);
                            arr_10 [13] [i_1 + 1] [i_0] [(short)10] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((~(var_5)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49102))) > (arr_1 [i_3])));
                            var_17 ^= (_Bool)1;
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)21))));
                arr_12 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 - 1] [i_1 + 1]));
            }
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_11) : (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            var_20 = ((/* implicit */unsigned short) (signed char)-114);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_9 [i_5] [i_5] [i_5] [i_1 - 1] [i_0] [i_0 + 2] [3LL])));
            }
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-((+(2760601331351003999ULL))))))));
            var_22 -= ((/* implicit */long long int) ((var_1) > (((/* implicit */unsigned long long int) 3482752143U))));
            arr_20 [i_0] [i_0] [4LL] = ((/* implicit */int) (+((-(var_9)))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_8 [i_0 + 1] [1ULL] [i_8] [i_8] [10ULL])) > (((/* implicit */int) var_2))))))));
            var_24 = ((((/* implicit */int) (unsigned char)52)) / (((/* implicit */int) (short)-28990)));
        }
    }
}
