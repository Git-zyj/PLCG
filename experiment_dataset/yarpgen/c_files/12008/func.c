/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12008
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
    var_18 += ((/* implicit */_Bool) ((var_1) ? ((-(var_8))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_2] [i_3 - 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (!(arr_7 [i_2]))))))));
                                var_19 = ((((((arr_2 [i_1 - 2] [i_2 + 1]) / (1215394420U))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) / (var_11))))) << (((arr_6 [i_3] [i_2] [i_1 + 1] [i_0]) - (258933774))));
                                arr_13 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                                var_20 *= ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3 + 1] [i_4] [i_4] [i_2 + 1])) ? (min((arr_4 [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned int) (-(-1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1073741824) < ((-(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4038810107U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) var_12)) / (1215394424U)))))))))));
                var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (((var_12) ^ (((/* implicit */int) arr_7 [i_0]))))))) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_0] [i_0])));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_7);
}
