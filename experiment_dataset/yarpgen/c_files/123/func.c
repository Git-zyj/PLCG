/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3997445597U))));
        var_16 *= ((/* implicit */unsigned int) ((var_4) <= (((2459392851U) % (var_4)))));
        var_17 = ((/* implicit */signed char) (~(((arr_2 [i_0]) - (1835574444U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_5 [i_3]))));
                    var_19 *= ((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))), (((long long int) ((var_9) | (arr_10 [i_1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_16 [2ULL] [i_4] [6ULL] [i_1] = var_10;
                    var_20 ^= ((/* implicit */long long int) min((((_Bool) min((-5316539027989563780LL), (((/* implicit */long long int) var_8))))), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))));
                    var_21 = var_4;
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        arr_19 [i_6] = ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 5316539027989563789LL)))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (arr_18 [i_6] [i_6]) : (arr_18 [i_6] [(_Bool)1]))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_8] [i_6])) ? (max((0ULL), (((/* implicit */unsigned long long int) -5316539027989563780LL)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) (unsigned short)13296)), (var_10)))))));
                    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_4))));
}
