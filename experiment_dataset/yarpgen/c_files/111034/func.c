/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111034
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
    var_20 = ((/* implicit */_Bool) max((var_20), (var_2)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = arr_5 [i_1] [i_1] [i_2] [i_2];
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2])) < ((-(((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))))))), (6973985291861924235ULL))))));
                    arr_9 [i_0] [(_Bool)0] [i_0] [i_0] &= ((/* implicit */_Bool) (-((~(((arr_6 [i_2] [i_1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_6 [i_2] [i_2] [i_2 - 2]), ((_Bool)1)))) > ((-(((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
}
