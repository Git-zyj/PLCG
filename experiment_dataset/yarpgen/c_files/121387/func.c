/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121387
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
    var_10 *= ((/* implicit */long long int) (_Bool)1);
    var_11 ^= ((/* implicit */long long int) min(((((~(((/* implicit */int) (unsigned short)1)))) / (((var_6) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65534))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) != (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_0)))) / ((~(((/* implicit */int) var_9))))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (arr_6 [i_2] [i_2]))))) == (((min((var_2), (((/* implicit */unsigned long long int) -9223372036854775787LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))))))));
        arr_8 [i_2] [i_2] = arr_6 [i_2] [i_2];
    }
}
