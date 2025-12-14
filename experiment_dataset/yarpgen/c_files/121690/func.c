/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121690
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
    var_16 |= ((((unsigned long long int) var_13)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(var_0)))))) <= (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (min((((/* implicit */unsigned long long int) var_3)), (var_2)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_15);
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) / (((unsigned long long int) arr_2 [i_0])));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_3);
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1627900280)) / (3083258U)));
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_3))))) ? (((unsigned long long int) (signed char)-58)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        arr_10 [i_2 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1627900311))))) | (((/* implicit */int) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2]))))))))));
        var_20 ^= ((unsigned long long int) ((long long int) min((((/* implicit */signed char) arr_8 [i_2])), (var_3))));
    }
    var_21 |= ((/* implicit */short) (~(8357741427136197334ULL)));
}
