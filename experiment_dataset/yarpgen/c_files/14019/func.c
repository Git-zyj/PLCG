/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14019
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
    var_17 = 17558801788517322883ULL;
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((((long long int) arr_2 [(_Bool)1])) < (((/* implicit */long long int) max((-1698729731), (var_6)))))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)206))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (min((((/* implicit */unsigned long long int) var_14)), (arr_2 [i_0])))))));
        var_18 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_16))))));
        var_19 = ((/* implicit */long long int) min((max(((unsigned char)49), ((unsigned char)113))), ((unsigned char)202)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) == (var_11)));
        var_20 *= ((_Bool) var_2);
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_2 [i_1])));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_22 = ((/* implicit */long long int) (((~((-(13177823054319945173ULL))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)51)), (((arr_4 [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (_Bool)1)))))))));
        arr_13 [i_2] = ((/* implicit */short) (unsigned char)187);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */int) arr_14 [i_3]);
        var_23 ^= (+((-(((/* implicit */int) (short)25184)))));
    }
    var_24 = ((/* implicit */long long int) var_1);
}
