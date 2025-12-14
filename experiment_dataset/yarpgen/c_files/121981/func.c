/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121981
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */int) (+((-(min((var_10), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1]))))))));
                        var_12 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_7)), (var_3)))));
                        arr_11 [3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-((~(((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_5 [3LL] [i_1] [i_1])))))))));
                    }
                    arr_12 [i_0] [i_0] [(short)4] [2LL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)32028))) ? (min((var_1), (((/* implicit */long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */long long int) ((var_8) - (var_8)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_13 = ((/* implicit */signed char) var_2);
        arr_16 [i_4] = ((/* implicit */unsigned long long int) var_5);
    }
}
