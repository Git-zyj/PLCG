/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184542
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) ^ (((((12328564202125651857ULL) << (((6680512245064270447LL) - (6680512245064270385LL))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-91)))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (3313282009362448443ULL)))))) ? (((((/* implicit */unsigned long long int) var_9)) ^ (((3313282009362448443ULL) | (((/* implicit */unsigned long long int) var_10)))))) : (((((/* implicit */unsigned long long int) var_5)) & (min((12328564202125651877ULL), (((/* implicit */unsigned long long int) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 6118179871583899751ULL)) ? (15259406442242790218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))));
                var_17 ^= (~(12328564202125651852ULL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_1 [i_2]);
                var_19 = ((/* implicit */unsigned char) (+(12328564202125651877ULL)));
            }
        } 
    } 
}
