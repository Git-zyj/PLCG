/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177386
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                var_17 -= ((/* implicit */_Bool) arr_2 [i_0]);
                arr_5 [(unsigned short)16] [i_0] [i_1] = ((/* implicit */signed char) ((((long long int) arr_2 [i_1])) << ((((-(((/* implicit */int) arr_2 [i_1])))) + (38525)))));
                var_18 = ((/* implicit */unsigned char) ((short) 72057592964186112LL));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
        arr_9 [i_2] = ((/* implicit */long long int) arr_7 [i_2] [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned int) arr_7 [i_2] [i_2]);
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
        arr_15 [i_3] = ((/* implicit */unsigned char) var_3);
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_4])) >> (((((/* implicit */int) var_7)) - (173))))) + (arr_18 [i_4] [i_4])));
        var_20 |= ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_16 [18])) ? (((/* implicit */unsigned long long int) var_0)) : (var_11))))));
        var_21 -= ((/* implicit */unsigned int) ((long long int) (!(arr_17 [i_4]))));
    }
}
