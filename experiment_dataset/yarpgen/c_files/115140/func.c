/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115140
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
    var_13 = ((long long int) var_9);
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((min((((/* implicit */long long int) var_7)), (var_0))) <= (((/* implicit */long long int) ((/* implicit */int) ((-13580428387005934LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23037))))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23037))) > (arr_6 [i_2] [i_2] [i_1] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) arr_5 [i_2] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
}
