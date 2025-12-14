/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121123
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */int) arr_0 [(signed char)0] [(signed char)0])) < (((((/* implicit */int) (unsigned char)62)) * (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                    arr_7 [23LL] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 1] [i_0 + 2]))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))))))));
                    var_18 ^= ((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [i_0 - 1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)26949)))) ^ (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20487))))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_4) - (5080803028772583957LL)))))), (2774435685U)))) : (((((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}
