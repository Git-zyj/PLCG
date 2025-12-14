/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185131
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)253)) ? (min((((/* implicit */unsigned long long int) (unsigned short)520)), (1610717997853917489ULL))) : (min((16836026075855634154ULL), (((/* implicit */unsigned long long int) (unsigned short)65017)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)52132))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4367727786005165227LL)), (((12177887194850256087ULL) << (((min((714177965), (((/* implicit */int) var_2)))) - (38425))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_8 [i_2 - 1] [i_2 - 1])));
                var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_2 - 1])) ? (arr_8 [8ULL] [i_3]) : (arr_8 [i_2] [i_3]))))));
                var_19 = ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
            }
        } 
    } 
}
