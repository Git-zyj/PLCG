/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165754
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 4398046511103LL)))))) && (((((/* implicit */long long int) ((/* implicit */int) ((4398046511103LL) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))) <= (var_8)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (short)-32379))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (unsigned short)54905))));
        var_12 -= ((/* implicit */unsigned long long int) ((unsigned char) 3764591850435185385ULL));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-32379)) ^ (((/* implicit */int) (short)16))));
        arr_6 [1LL] = ((/* implicit */short) var_5);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) (unsigned short)32760)))));
    }
    var_13 = var_0;
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_7)))));
}
