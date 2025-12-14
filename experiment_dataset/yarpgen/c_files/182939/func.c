/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182939
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned long long int) min((((_Bool) (unsigned char)243)), (((var_11) && (((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) 18446744073709551603ULL);
        var_16 = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) -5128724622029834073LL)))) > (((/* implicit */unsigned long long int) (-(var_3))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) arr_5 [3ULL]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (unsigned char)84);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = var_6;
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (-(2243419008U)));
    }
    var_19 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (max((-992465158), (((/* implicit */int) (unsigned short)46132))))))), (((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (unsigned short)32767))))) - (15ULL))));
}
