/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117478
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)32259)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) -441062032895044657LL);
        arr_4 [i_0] = ((/* implicit */unsigned short) -1);
        var_18 += ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) ((-1) <= (((/* implicit */int) arr_0 [i_0]))))), ((short)18891))))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((max((var_12), (((/* implicit */int) (unsigned short)41080)))) - (((((/* implicit */int) (unsigned char)191)) / (((/* implicit */int) arr_5 [i_1 + 2])))))))));
        var_20 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 + 1])))) ? (max((-1885709572), (((/* implicit */int) arr_0 [i_1 - 1])))) : (min((2147483647), (((/* implicit */int) arr_0 [i_1 + 1]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 0)) : (var_9))))))));
        var_22 = ((((/* implicit */int) (unsigned char)209)) > (-2147483647));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (+(((((-9LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)240)) - (240)))))));
    }
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_23 = arr_6 [i_3];
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (unsigned char)42)))))))))));
    }
    var_25 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)65529)), (min((var_10), (((/* implicit */unsigned int) (unsigned char)65)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) << (((((/* implicit */int) var_13)) - (216))))))));
}
