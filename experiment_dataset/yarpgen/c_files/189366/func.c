/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189366
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) var_8)), (4283296253618598458ULL))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_18 = max((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (signed char)-7)))), (((/* implicit */int) ((signed char) (unsigned char)33)))))), (min((((/* implicit */long long int) 38751788)), (-8796093022208LL))));
            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)72)), (min((((/* implicit */unsigned long long int) (short)24522)), (((((/* implicit */_Bool) (unsigned short)59372)) ? (15887948459133806509ULL) : (((/* implicit */unsigned long long int) -8796093022208LL))))))));
        }
        arr_5 [i_0] = ((/* implicit */short) var_10);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */short) ((((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) (short)-24519)))) : (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned short)2047))))));
        var_20 |= ((/* implicit */short) (~((+(((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) 4283296253618598478ULL)) ? (70300024700928LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
        arr_12 [i_3] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) (short)24536)))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned long long int) ((int) 5480709724412170219LL));
        var_23 -= ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) max(((unsigned char)129), ((unsigned char)82)))), (127LL))));
        var_24 = ((/* implicit */unsigned long long int) min((min((-127LL), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) : (var_5))))), (min((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-28250))))), (((((/* implicit */_Bool) 6373316231748424825ULL)) ? (17523466567680LL) : (-128LL)))))));
    }
    var_25 = ((/* implicit */unsigned char) var_7);
    var_26 += ((/* implicit */unsigned char) -476372322);
}
