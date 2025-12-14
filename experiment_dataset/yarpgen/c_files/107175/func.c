/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107175
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 10476952206107923706ULL)) ? (1125899906842608LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))), (((long long int) var_13))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)-100)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((signed char) (signed char)-92))));
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) ((signed char) arr_8 [i_0] [i_2]))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 703734925U)))));
                    arr_11 [6U] [i_0] = ((/* implicit */short) ((unsigned int) max((min((-820878590343983229LL), (((/* implicit */long long int) (signed char)-83)))), (((/* implicit */long long int) arr_1 [i_0])))));
                }
            } 
        } 
    } 
}
