/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120529
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33007)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)48)), (min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)0)))))) : (((/* implicit */int) (signed char)1))));
    var_13 &= min((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (min(((short)2006), (((/* implicit */short) (_Bool)1)))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((arr_4 [i_1 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) < (arr_1 [i_1 - 3] [i_0 - 1]))))) : (max((((/* implicit */long long int) var_2)), ((-(arr_1 [i_1 - 3] [i_2]))))))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_0 + 2])))) : (arr_1 [i_0] [i_0])))), (arr_7 [i_0]))))));
                }
            } 
        } 
    } 
}
