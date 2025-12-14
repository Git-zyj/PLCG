/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140260
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
    var_13 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) != (((/* implicit */int) (!(((/* implicit */_Bool) 2634528529U))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) && (((/* implicit */_Bool) (unsigned char)148)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned int) arr_6 [i_0] [i_2]);
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_5 [i_1]))) | (((/* implicit */int) (unsigned char)64))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) != (((/* implicit */int) arr_9 [i_1])))))));
                                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)56134))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) ((unsigned char) 4294967295U))))));
}
