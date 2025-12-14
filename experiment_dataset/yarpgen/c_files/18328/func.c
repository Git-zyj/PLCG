/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18328
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 22978771U)) : (arr_3 [i_1 - 1])))) && (((/* implicit */_Bool) ((long long int) var_15)))))), (arr_2 [i_1 + 1] [(unsigned short)9])));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) / (((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) >= (-3269474139257255032LL))) ? ((-(arr_4 [i_0]))) : (((/* implicit */unsigned long long int) -1134876110))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min(((unsigned short)52323), (((/* implicit */unsigned short) var_13))));
}
