/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12444
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
    var_19 += ((/* implicit */unsigned int) var_4);
    var_20 += ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((12863709017055382510ULL), (((/* implicit */unsigned long long int) 2143722679U))));
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_3))) | (((((/* implicit */int) arr_3 [i_0])) | (0)))));
                var_22 = ((/* implicit */long long int) arr_1 [(signed char)4]);
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) var_6);
}
