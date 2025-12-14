/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118176
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
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((unsigned int) arr_2 [i_2] [12] [i_2])), (max((max((arr_1 [(_Bool)1]), (arr_1 [20U]))), (((/* implicit */unsigned int) ((unsigned short) arr_4 [i_2] [i_1] [i_0] [i_0]))))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_4))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */int) ((_Bool) (_Bool)1));
                                var_18 = ((/* implicit */int) (signed char)69);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
}
