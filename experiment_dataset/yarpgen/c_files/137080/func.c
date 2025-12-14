/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137080
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_3 [i_3 - 1] [i_0 + 2]), (arr_3 [i_3 + 1] [i_0 + 1])))), ((+(7814669676076179148ULL)))));
                            var_20 &= (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 7814669676076179148ULL))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (unsigned char)192);
    var_22 &= ((/* implicit */_Bool) (+(var_5)));
}
