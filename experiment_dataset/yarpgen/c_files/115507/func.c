/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115507
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */int) ((((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) arr_2 [(signed char)1] [i_0 + 2])))))))) >> (((((/* implicit */int) (signed char)111)) - (92)))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_11))))))) ? (((((unsigned int) 1669879912)) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (var_8))))))) : ((+((~(arr_3 [i_0 + 1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) -885046585);
    var_16 = ((/* implicit */_Bool) (-(var_8)));
}
