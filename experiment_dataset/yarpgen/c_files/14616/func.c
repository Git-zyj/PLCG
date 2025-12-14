/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14616
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (((arr_5 [i_0 - 1] [i_1 - 1] [i_1 - 1]) >> (((((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1]) : (arr_3 [(_Bool)1]))) + (1238389035))))) : (((/* implicit */unsigned long long int) (+(((int) arr_3 [i_0])))))));
                    arr_6 [5] [i_1 - 1] [9U] = ((/* implicit */long long int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((int) (_Bool)0)) >> (((unsigned int) (unsigned char)3)))))));
                }
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
}
