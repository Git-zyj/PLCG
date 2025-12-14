/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170486
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
    var_13 = ((/* implicit */_Bool) (unsigned short)24152);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)26579)))))), ((-((~(((/* implicit */int) arr_2 [i_0])))))))))));
                var_15 = ((/* implicit */int) ((_Bool) ((((_Bool) var_0)) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_3))))))));
                var_16 = ((/* implicit */_Bool) (((+(min((((/* implicit */long long int) var_10)), (arr_3 [i_0] [i_1] [i_1]))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_5 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) ((arr_6 [i_3]) == (((/* implicit */int) var_4)))))))) ? (var_11) : (((187806134) * (((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 1] [i_3 - 1] [i_3 - 2] [i_2] [i_2 + 1]))))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_0] [i_2 - 3] [i_4 + 1])) + (((/* implicit */int) (unsigned short)11998)))) >> (((((/* implicit */_Bool) -187806135)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3210268909U)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((long long int) max(((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2])))), (var_8))));
                }
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) var_1);
}
