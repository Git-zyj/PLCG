/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162591
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
    var_15 -= ((/* implicit */unsigned char) max((5058628014417720157LL), (((/* implicit */long long int) ((var_11) != (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_1 - 1] [14ULL]), (((/* implicit */long long int) ((5058628014417720132LL) != (-5058628014417720153LL))))))) <= (min((max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0]))), (((((/* implicit */unsigned long long int) 5058628014417720153LL)) / (arr_0 [i_0])))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) 5058628014417720152LL);
                var_17 = ((/* implicit */_Bool) (~(max((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1 - 1]))), ((-(-5058628014417720169LL)))))));
                var_18 = ((/* implicit */long long int) ((unsigned char) 5058628014417720164LL));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) max((-5058628014417720169LL), (arr_2 [i_0] [i_0] [i_0])))) ^ (max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            {
                arr_9 [i_2] [(unsigned char)20] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 5058628014417720153LL)) ? (arr_7 [i_3 - 1] [i_3 + 1]) : (arr_7 [i_3 - 1] [i_3 - 1]))) < (((/* implicit */long long int) min((arr_6 [i_2]), (arr_6 [i_2]))))));
                var_20 ^= ((/* implicit */short) max((5058628014417720157LL), (((arr_7 [i_2] [i_2]) ^ (-5058628014417720158LL)))));
                var_21 = ((/* implicit */signed char) ((unsigned long long int) min((arr_7 [i_3 + 1] [i_3 - 1]), (arr_7 [i_3 + 1] [i_3 - 1]))));
            }
        } 
    } 
    var_22 = 5058628014417720153LL;
}
