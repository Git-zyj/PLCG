/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173161
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
    var_20 = ((/* implicit */_Bool) ((int) 3U));
    var_21 = var_12;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max((max((8222282792004344629ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned long long int) (-(-779521065))))));
                                var_22 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 779521064)) ? (((/* implicit */unsigned int) -779521065)) : (4169666572U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8))))))) : ((-(4389456576512ULL))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1533822498)) - (var_9)))) ? ((-(arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_1] [i_0] [12] [i_0])))));
                var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) ? (((15232887910163680230ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((arr_13 [8ULL] [i_1] [i_0] [17] [i_1]) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_1] [8U] [8U] [6] [6])))))));
            }
        } 
    } 
}
