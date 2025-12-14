/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101890
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
    var_20 = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((var_19) << (((((/* implicit */int) var_17)) - (57))))) - (6225543224529815083LL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((max((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 4] [i_0 + 1] [(signed char)14])), (arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [(_Bool)1] [i_2 - 2])))))));
                    var_22 = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0 + 2])), (((((/* implicit */int) arr_0 [i_0 - 4])) >> (((/* implicit */int) (unsigned short)20))))));
                    arr_6 [(unsigned char)14] = ((/* implicit */unsigned long long int) (unsigned char)134);
                    var_23 = 4953445151571821764LL;
                }
            } 
        } 
    } 
}
