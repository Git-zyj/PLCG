/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122069
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), ((+(var_4)))));
    var_13 ^= ((/* implicit */int) 14444756943604198540ULL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) var_6)) < ((+(((((/* implicit */_Bool) 10266896051618232705ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_1 [i_0])))), (((arr_2 [i_0] [i_0 + 2]) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_2 [i_0 + 1] [i_2 - 2])))) + (((/* implicit */int) (unsigned short)47690))));
                    var_17 = ((/* implicit */signed char) (+(3709288263361049887LL)));
                }
            } 
        } 
        arr_8 [i_0] [i_0 - 1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)676)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3709288263361049887LL)))));
    }
    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)54270)) ? (1593813759U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75)))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61575))) ^ (14444756943604198540ULL)));
    }
    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6553902190136622744LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29076))) : (7104482553422858804LL)));
        var_19 *= ((/* implicit */unsigned long long int) (short)15352);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(var_7))))));
    }
}
