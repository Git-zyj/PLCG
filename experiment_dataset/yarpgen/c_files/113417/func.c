/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113417
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) max((((/* implicit */unsigned int) -1786462415)), (min((((/* implicit */unsigned int) arr_3 [i_0] [12ULL])), (max((((/* implicit */unsigned int) 733023920)), (arr_5 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)52)), (var_3)))) ? (min((15ULL), (var_7))) : ((~(18446744073709551596ULL)))));
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (0)))) : (min((929576234U), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_4 + 1] [i_3] [i_4 + 1] [i_1] [i_2]))))))))))));
                                var_13 = var_2;
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((int) 2546239604U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_3);
}
