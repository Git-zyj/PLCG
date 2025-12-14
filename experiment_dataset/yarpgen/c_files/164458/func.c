/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164458
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0) << (((min((((/* implicit */unsigned long long int) 207629296)), (10763798901784984653ULL))) - (207629271ULL)))))) ? (((/* implicit */int) arr_4 [i_2])) : (min((2), (-15)))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-114)), ((unsigned char)143)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_2 - 1])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (1613738156988783631LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) <= (var_12)))) / ((~(((/* implicit */int) var_18))))))), (max((((/* implicit */unsigned long long int) var_19)), ((-(var_11))))))))));
}
