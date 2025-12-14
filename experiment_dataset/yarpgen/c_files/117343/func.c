/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117343
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */unsigned char) ((signed char) (signed char)46));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13629479069578003248ULL)))))) : (((((/* implicit */unsigned long long int) -1699566265)) + (3150486827437671659ULL)))))));
        arr_5 [i_0] = (~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) ((signed char) var_7)))))));
    }
}
