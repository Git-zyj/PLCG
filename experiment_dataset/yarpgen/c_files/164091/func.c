/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164091
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)50))))), ((-(672124915U)))))), (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0] [i_0 - 1])))));
                arr_6 [i_0] [i_1 - 1] [12] = ((((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) arr_1 [22U] [(signed char)3])) : (max((((long long int) (unsigned char)0)), (((/* implicit */long long int) (~(3622842377U)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_13), (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (var_7)))), (((unsigned long long int) var_2))))));
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_1)) >> ((((~(var_2))) - (9095538445927280096LL))))), (((int) var_8))));
}
