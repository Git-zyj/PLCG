/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145846
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) * (arr_1 [i_0] [i_0])));
        var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) (unsigned short)17967)) || (((/* implicit */_Bool) 67043328))))));
        arr_6 [i_1] = ((/* implicit */_Bool) max(((-2147483647 - 1)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) arr_3 [i_1])) : ((-(((/* implicit */int) var_3))))))));
    }
    for (int i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) ((arr_4 [i_2 + 2] [i_2 - 1]) ? ((-(((/* implicit */int) arr_3 [i_2 - 1])))) : ((-(((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (unsigned char)42)))))))));
        var_21 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (unsigned short)38084)) : (((/* implicit */int) (unsigned short)14223))))) ? ((~(((/* implicit */int) (unsigned char)42)))) : ((-2147483647 - 1)))), (((/* implicit */int) (_Bool)0)));
        var_22 = ((/* implicit */signed char) arr_7 [i_2] [i_2]);
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)27525)) : (((/* implicit */int) (signed char)7))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)42), ((unsigned char)184)))) & (min((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)214)))), (((/* implicit */int) max((var_10), (var_10))))))));
}
