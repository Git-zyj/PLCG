/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173031
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
    var_14 = ((/* implicit */unsigned long long int) (((((~((+(0))))) + (2147483647))) >> (((var_11) + (1848566533)))));
    var_15 = max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) max((((/* implicit */int) var_3)), (var_9)))), (var_13))));
    var_16 = ((/* implicit */long long int) ((unsigned short) var_8));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [11] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [12LL] = ((/* implicit */unsigned short) min((188805795936194964LL), (((/* implicit */long long int) (unsigned short)7086))));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [10] [i_0] = ((unsigned long long int) ((long long int) (+(((/* implicit */int) (signed char)0)))));
                                arr_15 [i_0 + 1] [i_0 + 1] [i_3] [3] = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */_Bool) arr_2 [8U]);
                                arr_24 [i_6] [1LL] [(unsigned char)10] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) (short)(-32767 - 1))), (((/* implicit */long long int) ((unsigned char) 2833030478U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((int) -929196892)) : (((/* implicit */int) var_5))))) : (var_8)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) arr_1 [i_2]);
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((unsigned int) arr_20 [i_7] [i_1] [i_2] [i_7] [i_2] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((unsigned long long int) var_4))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((unsigned int) (~(var_1)));
}
