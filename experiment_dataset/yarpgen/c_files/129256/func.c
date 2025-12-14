/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129256
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
    var_10 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 += ((/* implicit */_Bool) -9223372036854775779LL);
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (arr_2 [i_0])))), (((unsigned long long int) (unsigned short)36112))));
        var_14 = ((/* implicit */long long int) (((~(arr_0 [i_0]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775764LL)) ? (-9223372036854775779LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1299079629))))))));
        var_15 = ((/* implicit */long long int) var_4);
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) arr_6 [i_1 - 2])))))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) max((1073737728LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) min((arr_6 [i_1]), ((signed char)31)))) : (((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) (short)-2160))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_4 [i_1 - 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        arr_11 [i_2] [i_2 - 2] = ((/* implicit */long long int) arr_10 [i_2] [(unsigned char)12]);
        arr_12 [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)31)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_16 = ((/* implicit */_Bool) (-(var_0)));
}
