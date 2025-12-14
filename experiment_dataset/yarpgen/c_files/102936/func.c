/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102936
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
    var_17 = ((/* implicit */_Bool) ((((3318493157532623710LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)225)) << (((var_15) + (423378557)))))) ? (-509916142033287587LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_18 -= var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)30)) <= (((/* implicit */int) (unsigned char)225)))))))) && (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_0)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((/* implicit */int) var_9)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_9);
}
