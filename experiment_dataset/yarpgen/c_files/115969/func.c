/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115969
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
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7))))))));
    var_20 = ((/* implicit */long long int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)64))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((signed char) 11075528487207887353ULL));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((int) max(((+(11075528487207887353ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0 + 1] [(_Bool)1]))))));
                }
            } 
        } 
    } 
}
