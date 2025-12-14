/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156753
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 6U)) ? (((unsigned long long int) (unsigned short)55316)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (short)-1))))) && (var_6))))))))));
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_1 [i_1]);
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
}
