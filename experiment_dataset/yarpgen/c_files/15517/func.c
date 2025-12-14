/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15517
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [(signed char)0] [i_0]));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)8088)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8088))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8062))) & (arr_3 [i_0])));
            var_17 += ((/* implicit */unsigned int) (+(arr_3 [(_Bool)1])));
            var_18 += ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(signed char)20])) ? (((arr_4 [i_0] [(unsigned short)0] [(unsigned short)0]) ? (arr_6 [14LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) (!(arr_1 [i_0]))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = (short)29446;
        var_19 = ((/* implicit */signed char) max((((arr_4 [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) var_11)))));
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2])) ? ((~(((((/* implicit */_Bool) (short)-8084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8062))) : (1436204187432867726ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)29472)))))))));
        arr_14 [i_2] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */short) ((_Bool) arr_3 [i_2]))), (arr_9 [i_2] [i_2]))));
    }
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 811989275807989278ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (1045964704487708627ULL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) 0)))))));
}
