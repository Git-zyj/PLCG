/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134086
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)56)) ? (592163228) : (((/* implicit */int) (unsigned char)3))))));
        var_17 = (!(((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_18 -= ((((/* implicit */_Bool) max((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (1255757212U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))) && ((!(((/* implicit */_Bool) arr_3 [i_1])))));
        var_19 = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_20 *= ((/* implicit */unsigned char) arr_3 [i_2]);
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)1024)), (3462076265U)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [(signed char)9] [i_2])), (15877737006936543368ULL)))))) || (((/* implicit */_Bool) arr_5 [i_2]))));
        var_22 *= ((/* implicit */int) ((_Bool) arr_0 [i_2]));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1130764038)) && (((/* implicit */_Bool) 1756317001)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) max((288230376151711232ULL), (((/* implicit */unsigned long long int) var_11)))))));
}
