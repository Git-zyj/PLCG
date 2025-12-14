/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17160
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
    var_17 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_3] [i_3 + 3]))) == (var_15))) || (((/* implicit */_Bool) ((short) ((signed char) var_16)))));
                                var_19 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_10 [i_0 + 2] [i_0])) * (((/* implicit */int) (_Bool)0)))));
                                arr_14 [i_3] [i_1] [12] = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) 7352240055734817804LL)));
                                var_20 = ((/* implicit */unsigned long long int) (((~(min((-776228411), (((/* implicit */int) (short)-17237)))))) << (((((min((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_14))))), (-168732894))) + (168732908))) - (13)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+((-(((/* implicit */int) arr_13 [i_1 + 2] [(_Bool)1] [i_0 - 2] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
