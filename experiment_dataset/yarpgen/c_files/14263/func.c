/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14263
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
    var_18 |= ((/* implicit */unsigned char) var_14);
    var_19 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)8] = max((((/* implicit */int) (signed char)-26)), ((~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) var_2))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_0 [i_1])))))))), ((+(6064788033664405099ULL)))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) max(((unsigned short)26997), (((/* implicit */unsigned short) (unsigned char)116)))))))));
}
