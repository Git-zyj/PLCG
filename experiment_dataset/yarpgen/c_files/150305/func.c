/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150305
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
    var_16 = ((/* implicit */short) var_9);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (+(1445866368U))))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((short) ((int) 0LL)));
                                arr_15 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((short)32767), ((short)32767)))), (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (var_9) : (((/* implicit */long long int) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) ((arr_2 [i_0 - 1]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_2))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_9 [i_0])) : (1643448261U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_0 - 1])))))))))));
                    arr_17 [i_0] [i_0] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2791544287442590428LL)) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) 1643448261U)) ? (((((/* implicit */int) (short)32767)) - (((/* implicit */int) (short)(-32767 - 1))))) : (max((0), (((/* implicit */int) (unsigned char)62))))))));
                }
            } 
        } 
    } 
}
