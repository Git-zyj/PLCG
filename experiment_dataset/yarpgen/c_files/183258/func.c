/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183258
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
    var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_15))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (arr_2 [i_1]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_2]))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] [i_2 + 1] = ((((/* implicit */_Bool) min((arr_6 [i_0 + 2]), (arr_6 [i_0 - 1])))) ? (min((arr_6 [i_0 + 2]), (((/* implicit */long long int) var_13)))) : (arr_6 [i_0 + 3]));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [17U] [i_3])) ? (arr_9 [i_2 + 1] [i_3] [i_3] [i_3]) : (arr_9 [i_2 - 2] [i_3] [i_3] [i_3]))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(min((arr_9 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)251)))))))));
                arr_12 [i_0] [(_Bool)1] [(short)16] |= ((/* implicit */int) 2131104830U);
            }
        } 
    } 
}
