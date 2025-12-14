/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129012
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
    var_15 = ((/* implicit */unsigned char) ((long long int) max((min((((/* implicit */unsigned long long int) var_5)), (var_14))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_14))))));
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 33553408U)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) > (max((arr_8 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) arr_3 [i_2]))))))));
                    var_17 = ((/* implicit */short) max((min((max((-3), (((/* implicit */int) arr_2 [i_0] [i_1])))), (arr_6 [(_Bool)1] [i_2]))), (((/* implicit */int) (short)-19039))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (arr_8 [i_2] [i_1] [i_1] [(signed char)11])))), (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-42)))))), (max((((/* implicit */int) (signed char)-45)), (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0]) : (((/* implicit */int) (short)-19036))))))));
                    arr_11 [i_1] [i_1] &= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
}
