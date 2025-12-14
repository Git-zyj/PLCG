/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149884
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) var_1))));
        var_17 = ((/* implicit */long long int) ((((long long int) arr_1 [i_0])) != (((/* implicit */long long int) ((/* implicit */int) ((4186159972434094237LL) != (-4186159972434094237LL)))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) >= ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */signed char) ((((long long int) 4186159972434094237LL)) != (((-4186159972434094237LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            {
                var_20 += ((/* implicit */_Bool) ((unsigned long long int) 5321924947931531007LL));
                arr_11 [i_1] [i_2] = ((/* implicit */unsigned int) min((-7662403553318077416LL), (((((/* implicit */_Bool) (unsigned short)12795)) ? (((/* implicit */long long int) ((/* implicit */int) ((8924443372488150953LL) != (7745721032247221903LL))))) : (6472319857237190664LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_1);
}
