/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136759
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) max((var_4), (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((unsigned long long int) arr_4 [i_1] [i_1 + 1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) min(((short)31259), (((/* implicit */short) (unsigned char)204)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) arr_8 [i_3] [i_3] [5] [5] [i_3])))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max(((short)31245), (((/* implicit */short) var_10))))), (arr_2 [i_3])))) ? (min((((/* implicit */long long int) max(((unsigned char)139), ((unsigned char)117)))), (((((/* implicit */_Bool) (unsigned char)160)) ? (arr_5 [(_Bool)0] [6LL] [i_2] [i_2]) : (arr_7 [i_0] [10ULL] [i_2] [i_3] [i_3] [i_2]))))) : (var_16)));
                            var_22 -= ((/* implicit */unsigned char) (-(var_5)));
                            var_23 = ((/* implicit */int) (unsigned char)146);
                        }
                    } 
                } 
            }
        } 
    } 
}
