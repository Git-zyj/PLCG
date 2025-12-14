/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175181
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
    var_13 = ((/* implicit */_Bool) min(((~((~(var_1))))), (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) 1911987737)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31185)) ? (((/* implicit */int) (signed char)70)) : (-1911987742)))))))));
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (short)-31202);
                    var_15 = ((/* implicit */short) (-(var_6)));
                }
                var_16 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12] [i_1]))) : (var_10))), (((/* implicit */unsigned int) ((-68757336) ^ (((/* implicit */int) arr_9 [i_1]))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 4; i_3 < 14; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((5362506504100303025LL) < (((/* implicit */long long int) arr_11 [i_0 - 1]))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)12])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) && (((/* implicit */_Bool) (signed char)125)))))));
                            arr_17 [i_0] [1ULL] [i_3] [i_4] = ((/* implicit */short) (-(min((((unsigned long long int) arr_16 [i_1] [10LL])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_1])) ? (arr_11 [i_0]) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
