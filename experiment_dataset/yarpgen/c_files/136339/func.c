/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136339
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
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)7] [(signed char)7] = max((((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) ^ (max((((/* implicit */long long int) 2147483647)), (2649558729950218812LL))))), ((+(min((8644753302906160218LL), (((/* implicit */long long int) (unsigned char)102)))))));
                    var_18 = ((/* implicit */short) arr_1 [i_1]);
                    arr_10 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [18U])))) && (((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 - 3])))));
                }
            } 
        } 
    } 
}
