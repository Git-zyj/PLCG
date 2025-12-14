/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114950
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) : (3769475037101552390ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) > (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (4865568736239283332LL)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((long long int) 675569284)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
        var_16 = ((/* implicit */unsigned char) (+((-(arr_3 [i_1] [i_1])))));
    }
    var_17 = ((/* implicit */unsigned int) 4865568736239283330LL);
}
