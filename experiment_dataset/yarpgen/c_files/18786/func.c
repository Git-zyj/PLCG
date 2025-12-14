/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18786
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
    var_12 = ((signed char) var_7);
    var_13 += max(((short)-1), (var_6));
    var_14 += ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) arr_1 [i_1]);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)3788))) > (((long long int) arr_4 [i_1] [i_1 + 1]))))) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 1] [(signed char)3]))));
                    arr_10 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) ((short) arr_2 [i_1] [i_1]))) <= (((/* implicit */int) ((signed char) var_6)))))), (((arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [4LL])))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2 - 1] &= ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (signed char)-64);
}
