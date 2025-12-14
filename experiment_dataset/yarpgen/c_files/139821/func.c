/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139821
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 *= ((/* implicit */unsigned int) min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned char) (signed char)107)), (arr_0 [i_0])))))));
        var_12 = ((/* implicit */long long int) ((unsigned long long int) arr_1 [12ULL]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((unsigned short)63580), (((/* implicit */unsigned short) (signed char)107))))), ((-(-1LL)))));
        var_13 ^= ((/* implicit */unsigned short) arr_3 [i_1]);
        var_14 = ((/* implicit */_Bool) (unsigned short)63580);
        var_15 *= ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) % (3522376908U))), (((/* implicit */unsigned int) ((_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned short)1970))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3522376908U)) ? (((/* implicit */int) (unsigned short)31118)) : (((/* implicit */int) (unsigned short)31118))))) ? (((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2])))) : (((/* implicit */int) (unsigned short)31127))));
        var_16 = ((/* implicit */int) (-((((((~(var_9))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (unsigned short)34418)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34402))))) - (2543037568U)))))));
        var_17 *= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((signed char) arr_7 [i_2]))), (var_0))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) var_1)) - (40202)))))) ? (arr_6 [(unsigned short)13] [i_2]) : ((~(arr_6 [i_2] [(unsigned short)1])))))));
        var_18 = ((/* implicit */signed char) ((unsigned char) 8646911284551352320ULL));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3]))))) ? ((~(2161979206U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (unsigned short)43862)) : (((/* implicit */int) arr_9 [i_3])))))));
        arr_11 [i_3] = ((/* implicit */signed char) (unsigned short)254);
        arr_12 [3LL] [i_3] = ((/* implicit */unsigned char) ((((unsigned int) (short)823)) / (((((/* implicit */_Bool) arr_9 [5ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34396))) : (var_3)))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (1958095854232828622LL))), (((/* implicit */long long int) var_7)))))));
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
