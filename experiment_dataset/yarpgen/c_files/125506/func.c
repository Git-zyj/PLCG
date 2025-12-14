/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125506
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
    var_15 = ((/* implicit */int) (-((~(((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) * ((-(7004748831591368078ULL)))));
        var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 3])))) ? ((~(var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (+(0)));
        var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) + (2147483647))) << (max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) 0)) ? (23) : (0)))))));
        var_19 = (-(((/* implicit */int) arr_2 [i_1] [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) -1);
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((int) min((var_8), (((/* implicit */unsigned long long int) 0)))));
            arr_11 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 4341649816749073999LL))));
        }
    }
    var_20 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_13))))))) * (0));
}
