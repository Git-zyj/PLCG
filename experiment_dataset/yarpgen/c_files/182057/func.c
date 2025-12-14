/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182057
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
    var_19 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_8 [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [5LL]))));
                var_20 = (~(((/* implicit */int) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned char) var_18))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(3624850320191567314LL)))) && (((/* implicit */_Bool) 158473339U)))))));
                var_22 ^= ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 - 1])) ? ((+(3829349808740182724LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [(signed char)0] [i_3 - 1])), (2281896544U)))));
            }
        } 
    } 
}
