/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11257
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) min((max((-1350143923), (((/* implicit */int) var_3)))), (max((-1350143923), (((/* implicit */int) var_2))))))) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)7667)) : (arr_0 [i_2]))), (arr_7 [i_1] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (570846703) : (var_4)))), (arr_1 [i_2] [i_2 - 2]))))))));
                    var_14 += ((/* implicit */short) ((unsigned char) var_3));
                }
            } 
        } 
    } 
}
