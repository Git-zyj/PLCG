/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137605
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
    var_10 = ((/* implicit */unsigned long long int) ((var_5) <= (var_1)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) (~(var_8)));
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) - (var_8)))) ? (arr_1 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))) : ((~((~(var_6)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_12 [14ULL] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) & (2197994730U)));
                        arr_13 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (~(2096972566U)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-48))));
        var_13 = ((/* implicit */signed char) ((((arr_14 [i_4] [i_4]) % (arr_14 [i_4] [i_4]))) >= (-20LL)));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10526)) ? (-2104007346635286382LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))) ? ((+(((2914051428999501077LL) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2914051428999501077LL))))))));
        var_15 = ((/* implicit */long long int) arr_3 [i_5]);
        var_16 = ((/* implicit */_Bool) var_1);
    }
}
