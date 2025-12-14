/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125402
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25092)) << (((((/* implicit */int) arr_0 [i_0])) - (3983)))))) ? (((var_9) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) : (var_1))) : (((unsigned int) arr_0 [i_0]))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (217054260))))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)115)) - (95)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                {
                    var_15 += ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_5 [i_4 + 1]), (arr_5 [i_4 + 1])))), (((((/* implicit */_Bool) -1242657745)) ? (((/* implicit */int) arr_5 [i_4 - 3])) : (1758508561)))));
                    arr_14 [i_2] [i_3] [i_3] = ((((int) 2716409635U)) > ((-(((((/* implicit */_Bool) arr_6 [(_Bool)0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_8 [i_4 - 2] [i_3] [i_4]))));
                    var_17 = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
}
