/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123911
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)5] [i_0] [i_1])) : (arr_0 [i_0 - 3]))));
                arr_8 [i_0] = ((/* implicit */unsigned char) min(((~((+(11475235124299121713ULL))))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (+(var_0)));
}
