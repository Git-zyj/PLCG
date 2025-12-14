/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105093
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_5 [i_0] [i_0 - 3] [i_0 - 3] [i_0])), (((((/* implicit */_Bool) var_0)) ? (845667031) : (((/* implicit */int) (short)26235))))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((arr_4 [i_0 - 4] [i_2]), (((/* implicit */unsigned long long int) ((short) arr_4 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (signed char)0)))))) || (((/* implicit */_Bool) var_5))));
    var_15 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)56868))))))));
}
