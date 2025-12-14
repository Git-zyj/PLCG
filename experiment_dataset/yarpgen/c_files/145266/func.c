/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145266
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [1U] [i_2] [1U] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_9 [i_1] [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 2]) / (arr_9 [i_1] [i_1] [i_3 - 2] [i_3 + 1] [i_1] [i_3 - 1]))))));
                                arr_13 [(short)4] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (unsigned short)22568)))))) ? (max((6399838733996356746LL), (((/* implicit */long long int) (unsigned short)19604)))) : (((long long int) ((short) var_12))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [21U] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)50)) != (((/* implicit */int) (signed char)-40)))))))) != ((+(2425652543U)))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) -6399838733996356734LL)) ? (6399838733996356746LL) : (9223372036854775807LL));
            }
        } 
    } 
    var_16 = ((((((/* implicit */_Bool) var_8)) ? ((-(var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)121))))))) / (((((/* implicit */long long int) var_6)) ^ (var_2))));
}
