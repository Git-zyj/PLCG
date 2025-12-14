/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113003
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
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */long long int) 467225793U);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) 3827741503U);
                    arr_7 [i_2] [8] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (9223372036854775792LL))), (((((/* implicit */_Bool) (+(var_8)))) ? (min((9223372036854775792LL), (((/* implicit */long long int) (unsigned char)46)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3827741507U))))))))));
                }
            } 
        } 
    } 
}
