/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137056
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
    var_10 *= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_2] [7] [7] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [i_1] [12LL] [i_2] [i_3] [i_3])))) : (((unsigned long long int) var_9)))));
                                var_11 = ((/* implicit */signed char) ((unsigned short) var_5));
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) min((((/* implicit */short) arr_10 [i_0 - 3] [i_1] [i_3] [i_4])), (arr_2 [i_4])))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [6ULL] [6] [6] [i_1] [i_1] [i_1]))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_9))));
}
