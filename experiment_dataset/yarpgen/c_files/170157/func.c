/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170157
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 2] [i_0 - 2] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)0)))) | (((((/* implicit */int) arr_2 [i_0 + 2] [(short)12])) & (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) (!((_Bool)1)));
                                arr_14 [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)51026))))));
                                var_12 &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((((((/* implicit */int) (!(var_10)))) > (((/* implicit */int) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-892829138485869602LL)))));
}
