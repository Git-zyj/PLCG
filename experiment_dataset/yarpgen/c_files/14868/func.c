/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14868
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-1442111198888882363LL))))));
    var_19 = ((/* implicit */unsigned short) var_14);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) 8071921655405661970LL)), (18446744073709551609ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (8071921655405661970LL)));
                arr_7 [i_1] = var_0;
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (max((var_15), (((/* implicit */unsigned long long int) (signed char)-92)))))))));
            }
        } 
    } 
}
