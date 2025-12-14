/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164271
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
    for (int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = max((((/* implicit */unsigned long long int) -8658048914257866828LL)), (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_3 [i_0 - 3]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_16 |= ((/* implicit */long long int) max((min((1768083902616130016ULL), (((/* implicit */unsigned long long int) ((short) var_4))))), (((/* implicit */unsigned long long int) ((short) 760471213993780647ULL)))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 1874912481U)) ? (1874912491U) : (1874912488U))) >> (((max((((/* implicit */unsigned int) var_12)), (2420054819U))) - (2420054808U))))))));
                            var_18 -= ((/* implicit */long long int) var_5);
                            arr_10 [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1874912507U)) ? (1874912488U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (2420054789U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 4])))))) : (1874912508U));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_6);
}
