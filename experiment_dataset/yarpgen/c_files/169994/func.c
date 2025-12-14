/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169994
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((((/* implicit */int) (_Bool)0)) >> (((2865421821U) - (2865421799U)))))));
                arr_4 [(unsigned short)20] [(unsigned short)20] |= ((/* implicit */unsigned long long int) (_Bool)1);
                var_20 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 1439188607U)))) ? (((unsigned long long int) 981189209180838081ULL)) : (((/* implicit */unsigned long long int) min(((-(arr_1 [i_0 + 2] [(signed char)17]))), (((/* implicit */unsigned int) var_1)))))));
                arr_5 [(_Bool)1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_18)) <= (16942351475009444832ULL)))), (min((((/* implicit */unsigned int) (signed char)-125)), (arr_3 [18] [18])))));
                arr_6 [i_0] [10U] |= ((/* implicit */short) arr_1 [i_0 - 1] [i_0 + 2]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_17);
    var_22 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_4))))));
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (-581185828)));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned char)80))));
}
