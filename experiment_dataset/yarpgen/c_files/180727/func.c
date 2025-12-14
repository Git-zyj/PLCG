/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180727
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 3410406751U)), (35184367894528ULL)));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_3 [(_Bool)1]))));
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), ((~(((/* implicit */int) arr_7 [i_0 + 1]))))));
                    arr_12 [i_2 - 2] [i_2] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) (signed char)75);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_1))))))));
}
