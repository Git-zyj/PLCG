/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150223
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
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) min((arr_2 [i_0 - 4]), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (((/* implicit */int) (unsigned char)161)) : (var_3))) : (((/* implicit */int) arr_2 [i_0 - 4]))))));
                var_13 = ((/* implicit */unsigned int) var_3);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) (short)-1);
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)6872));
                            var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            arr_8 [i_3] [(_Bool)1] [(_Bool)1] [i_0 - 3] = ((/* implicit */short) -604718507);
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1159235397)) ? (((/* implicit */int) (short)17579)) : (((((/* implicit */_Bool) (short)-17579)) ? (((/* implicit */int) (unsigned short)17848)) : (((/* implicit */int) (short)-17559)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */short) var_2);
    var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 8191))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((((/* implicit */int) (_Bool)1)) >> (((var_2) + (98928991)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17605))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((3928880542U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-17605)))))))))));
    var_20 = ((/* implicit */unsigned short) ((((var_5) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_6)))) : (((/* implicit */int) var_9)))) << (((/* implicit */int) var_1))));
}
