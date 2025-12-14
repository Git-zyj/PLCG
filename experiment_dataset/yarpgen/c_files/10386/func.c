/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10386
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) min((var_10), (max((((/* implicit */unsigned char) ((_Bool) arr_4 [(_Bool)1] [i_0 - 1]))), (((unsigned char) max((arr_4 [(unsigned char)2] [(unsigned char)2]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0 - 1] [i_4])) + (((/* implicit */int) arr_1 [i_0 - 1] [i_4]))))));
                                arr_16 [i_1] [i_3] = ((/* implicit */unsigned char) min((((arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) (unsigned char)63))));
                                var_11 = ((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) (unsigned char)217)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)241))));
    var_13 += ((/* implicit */_Bool) var_3);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
}
