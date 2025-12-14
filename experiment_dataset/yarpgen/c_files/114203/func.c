/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114203
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)1)), (arr_1 [i_0])))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) | (arr_0 [i_0]))));
        var_20 &= (unsigned char)3;
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)0)) & (-1))))) << (((((/* implicit */int) var_7)) - (19015)))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned int) max((min((((/* implicit */unsigned long long int) 1924134124512822767LL)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((long long int) (short)-1)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (short)0);
    var_23 |= ((/* implicit */_Bool) ((int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    var_24 *= ((/* implicit */short) var_15);
}
