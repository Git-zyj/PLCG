/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169336
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)87))))) : (min((-1LL), (((/* implicit */long long int) (unsigned short)2899)))))), (((/* implicit */long long int) max(((unsigned char)59), (arr_0 [i_0 + 2] [i_1 - 1]))))));
                arr_4 [i_0 - 1] [i_1 - 3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-22)), ((unsigned short)62640)))) > ((~(((/* implicit */int) (unsigned short)62636)))))) && (((/* implicit */_Bool) (unsigned short)2896))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)11)), (-1LL)));
}
