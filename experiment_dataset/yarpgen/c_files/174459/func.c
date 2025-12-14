/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174459
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (max((max((var_2), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_7))))));
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (570315748940044097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32329), (((/* implicit */unsigned short) (_Bool)1)))))))) < (var_12)));
    var_21 &= ((/* implicit */long long int) (-(569350856U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 985172287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (569350830U))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                arr_6 [i_0] [18U] [i_1] = ((/* implicit */signed char) (+(0ULL)));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (unsigned char)4)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((unsigned short) -2590644465141446098LL)), (((/* implicit */unsigned short) ((signed char) (unsigned short)33206)))));
}
