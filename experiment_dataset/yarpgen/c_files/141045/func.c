/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141045
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
    var_18 ^= var_14;
    var_19 -= ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))))))), (var_12)));
    var_20 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) var_3);
                var_22 = ((/* implicit */unsigned int) (~((-((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                var_23 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (10ULL) : ((+(1ULL)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((11ULL), (1ULL))) : ((~(18446744073709551615ULL)))));
        var_25 -= ((/* implicit */unsigned char) ((unsigned long long int) var_10));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        var_26 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) -2046087362)))));
        var_27 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_6 [i_3]), (arr_6 [i_3]))))));
        var_28 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_1)))));
        var_29 &= (-(2147483647));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)21024))));
        var_31 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    }
}
