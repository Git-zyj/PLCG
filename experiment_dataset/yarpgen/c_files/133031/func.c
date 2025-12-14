/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133031
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
    var_10 = ((/* implicit */long long int) min((var_9), (var_4)));
    var_11 ^= ((/* implicit */long long int) (!((((((_Bool)1) ? (-1805510457) : (var_4))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28034)) : (((/* implicit */int) (short)28034))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (~(((/* implicit */int) (short)-28022)))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)28020)) >= (arr_9 [i_0] [i_1] [i_2] [(_Bool)1]))))) | ((-(((((/* implicit */_Bool) 31)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3898989002979963556LL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [7] [i_1 - 1] [i_1 - 1] [i_5] [3U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) min((1254495424U), (((/* implicit */unsigned int) (short)28032))))))));
                                arr_20 [i_0] [i_1] [i_4] [i_0] [i_6] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_1 + 1] [i_1] [i_1 - 1] [i_0]))) : (((arr_13 [i_1 + 1]) / (arr_13 [i_1 - 1]))))))));
            }
        } 
    } 
}
