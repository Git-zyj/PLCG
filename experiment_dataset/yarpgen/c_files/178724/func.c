/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178724
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (+(max((-1106480961), (-1216709560)))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_15)))))) > (((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (arr_4 [i_0 - 1] [i_0])))) ? (min((arr_4 [i_0 + 2] [i_0 - 1]), (arr_4 [i_0 + 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_0 + 2] [(unsigned char)3]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned char)13] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
                            var_19 = ((/* implicit */unsigned short) (-(4294967295U)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) ((arr_8 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2]) && (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) arr_3 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_12);
    var_22 = ((/* implicit */_Bool) (short)(-32767 - 1));
}
