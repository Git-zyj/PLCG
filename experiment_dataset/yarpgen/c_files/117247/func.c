/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117247
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */short) var_16)), (var_6)))))));
    var_18 &= ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_3 [i_2]))))))) : (((/* implicit */int) (!(((_Bool) (unsigned char)215)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0 + 3] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                                arr_12 [i_0] [i_2 - 2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_7)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] = (((-(((/* implicit */int) (unsigned char)38)))) ^ (((/* implicit */int) var_15)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned int) var_6));
}
