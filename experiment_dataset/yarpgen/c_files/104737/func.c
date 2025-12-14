/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104737
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
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)242))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) var_13))))))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_12)))))), (var_8)));
                    arr_10 [i_0] = max((var_3), (var_3));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) var_4);
                        arr_13 [i_0] = (!(((/* implicit */_Bool) (unsigned char)192)));
                        var_19 += ((/* implicit */_Bool) ((unsigned char) max((max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))), (((unsigned char) (_Bool)0)))));
                        var_20 = ((/* implicit */unsigned char) ((_Bool) (+((+(((/* implicit */int) var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_10))), (((/* implicit */unsigned char) (!(var_6))))))) << (((((/* implicit */int) var_9)) * (((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))))));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [(_Bool)1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((_Bool) var_13))))), ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
