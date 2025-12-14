/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157050
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [8U] [i_2] = ((/* implicit */int) arr_3 [i_0]);
                    var_10 = ((-6663679528803575559LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)77))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15646115774824511215ULL)) ? (6732942259950861313ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
}
