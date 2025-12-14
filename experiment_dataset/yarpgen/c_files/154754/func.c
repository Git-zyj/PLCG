/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154754
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
    var_10 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) / (var_7)));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (-((-(((unsigned long long int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned char)11] [i_1] [i_2] [(unsigned char)11] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) / (657682777U)))) + (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))) / (var_0)))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)14] [i_3 + 1] [(unsigned char)14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_2] [i_4] [i_3 - 1] [i_3])))));
                                var_13 = ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [1U] [1U] [1U] [1U]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((signed char) ((long long int) arr_0 [i_2])));
                    var_15 ^= ((/* implicit */long long int) (unsigned short)22714);
                    var_16 += 14286199880089123345ULL;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_1);
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) ^ (var_5)))) ? ((-(var_8))) : (((/* implicit */int) var_2))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
}
