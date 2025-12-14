/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175702
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2] [i_1 - 2] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                                var_15 = ((/* implicit */long long int) var_2);
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 2]) & (arr_5 [i_0 + 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) (-(-9223372036854775791LL)))) ? (var_11) : (((/* implicit */long long int) arr_5 [i_1] [i_1])))) : (((/* implicit */long long int) min((((/* implicit */int) var_3)), (((int) arr_14 [i_0] [i_0] [i_1 - 2] [i_2] [i_0] [i_1])))))));
                                var_17 = ((/* implicit */int) ((arr_8 [i_4]) >> (((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_1] [i_2] [i_4])), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_1])) <= (var_0))))) : (((long long int) var_1))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_2] [i_1] [i_1] = arr_9 [i_1] [i_1] [i_1] [i_1];
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    arr_18 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 2])) ? (min((1272564188U), (arr_7 [i_1]))) : (((/* implicit */unsigned int) ((int) arr_8 [i_0 + 2])))));
                    arr_19 [i_1] [i_1] = ((/* implicit */short) 101529306806201931ULL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_7);
}
