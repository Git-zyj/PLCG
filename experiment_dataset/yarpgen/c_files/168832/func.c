/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168832
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
    var_14 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)-29105)) ? (((/* implicit */int) (unsigned char)31)) : ((~(((/* implicit */int) (short)-29105)))))));
        var_15 = ((/* implicit */unsigned short) 14702106348735315612ULL);
    }
    for (long long int i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 24; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1 - 1] [(unsigned char)18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) ^ (2269814212194729984LL)));
                        var_16 = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
        } 
        arr_16 [i_1 + 3] [i_1 - 3] = ((((/* implicit */_Bool) (short)29091)) && (((/* implicit */_Bool) max((arr_6 [i_1 + 1]), (var_10)))));
        var_17 ^= ((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [10]);
        var_18 = (~((~(((/* implicit */int) (short)578)))));
    }
}
