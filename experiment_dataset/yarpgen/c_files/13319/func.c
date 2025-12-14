/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13319
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_1))));
    var_15 = ((/* implicit */_Bool) ((int) var_13));
    var_16 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (var_6)))) != (((/* implicit */int) var_11))))) != (var_6));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) max((arr_1 [i_0] [i_0]), (((/* implicit */int) (((~(var_9))) != ((+(((/* implicit */int) (unsigned char)171)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) != (arr_0 [i_0])));
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 + 1] [i_3] [i_3 - 2] [i_3] [i_3 - 2])) ? (((/* implicit */long long int) var_12)) : (arr_8 [i_3 + 1])))) ? ((+(383103795))) : (((((/* implicit */_Bool) -761614516)) ? (((/* implicit */int) (_Bool)1)) : (-1309015232)))));
                            var_19 = ((/* implicit */int) ((((((arr_8 [i_3]) != (arr_0 [i_0]))) ? (((/* implicit */int) ((var_2) != (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_2] [i_1]))))) : (((/* implicit */int) (unsigned char)107)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)49575)) != (((/* implicit */int) (unsigned char)84)))))));
                            arr_11 [i_2] = ((/* implicit */_Bool) max((910874328), (max((162433126), (((/* implicit */int) (unsigned short)10113))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
