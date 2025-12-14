/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115979
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
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -5731620732287002771LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] |= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) -2145533312)), (arr_0 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (-2719068441469251591LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)33986)))))));
                arr_6 [i_0] = (-(((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0])) != (var_10))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(2147483647)));
                var_17 = ((/* implicit */int) (~(max((5731620732287002768LL), (((((/* implicit */long long int) -2147483627)) ^ (5731620732287002791LL)))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned long long int) var_11);
    var_19 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    var_20 = (-(((((/* implicit */_Bool) -5731620732287002769LL)) ? (var_10) : (8942131649158133245LL))));
}
