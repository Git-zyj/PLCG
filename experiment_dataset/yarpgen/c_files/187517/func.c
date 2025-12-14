/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187517
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
    var_19 = ((/* implicit */signed char) 9076586542299480445ULL);
    var_20 = ((/* implicit */short) (!(((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_17)))));
        var_21 *= ((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0]))));
        var_22 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_15))))));
        var_23 = (((_Bool)1) && (((/* implicit */_Bool) 18446744073709551613ULL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)4095))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_16 [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_1]));
                        arr_17 [i_4] [i_3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (9370157531410071164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                        arr_18 [i_4] [i_2 - 2] [i_2 - 2] [i_1] = ((/* implicit */_Bool) ((unsigned char) 5742960920704614254ULL));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_16)));
    }
}
