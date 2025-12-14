/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160400
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((((/* implicit */int) ((short) (unsigned char)1))) - (((/* implicit */int) min(((unsigned char)253), ((unsigned char)254)))))) + (2147483647))) << (((((/* implicit */int) var_12)) - (1)))));
                            arr_13 [i_0] [i_0] [0U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)94)), (((arr_4 [i_1] [i_0]) ? (var_14) : (2359338197U)))))) ? (((/* implicit */int) ((unsigned char) (+(1808528069U))))) : (((/* implicit */int) ((short) (unsigned char)1)))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_11 [(_Bool)1] [i_0] [i_1] [(short)13])) < (((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [i_0]))))))));
                arr_15 [i_1] &= ((/* implicit */short) (unsigned char)94);
                arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26926))))))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) min(((short)-5515), (((/* implicit */short) (unsigned char)0))))))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), (min((var_7), ((short)26081))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned char) var_14))) || ((((_Bool)1) && (((/* implicit */_Bool) var_14)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
}
