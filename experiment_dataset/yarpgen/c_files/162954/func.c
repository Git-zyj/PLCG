/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162954
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned char) (-((~(var_5)))));
        var_12 ^= ((/* implicit */unsigned long long int) 1395057837907453690LL);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    var_13 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (arr_2 [3LL]) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))) <= (arr_6 [(short)0])));
                    var_14 -= ((/* implicit */unsigned short) arr_7 [i_1] [i_2 + 1] [16ULL] [10ULL]);
                }
            } 
        } 
        var_15 = max((min((var_10), (((/* implicit */long long int) ((unsigned char) var_0))))), (((/* implicit */long long int) ((short) ((unsigned long long int) var_5)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_4])))))));
        arr_12 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_5)));
        var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3LL)) ? (((/* implicit */unsigned long long int) arr_8 [i_4] [9LL])) : (11895184420669740376ULL))), (((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_7 [8ULL] [12ULL] [i_4] [8ULL]))))))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        arr_15 [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (((_Bool)1) ? (0U) : (0U))));
        var_18 = ((/* implicit */int) var_4);
        var_19 = ((/* implicit */long long int) arr_13 [(_Bool)1]);
    }
}
