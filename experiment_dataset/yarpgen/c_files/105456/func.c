/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105456
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
    var_14 = ((/* implicit */short) (-(var_1)));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((arr_1 [(_Bool)1]) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)8])) ? (arr_1 [(unsigned short)12]) : (arr_1 [0LL])))) || (((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) -3828045450144945032LL)))))))) : (arr_0 [i_0 - 2]))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) >> (((max((arr_1 [i_0]), (((/* implicit */long long int) var_2)))) - (3236867620876637029LL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) >> (((((max((arr_1 [i_0]), (((/* implicit */long long int) var_2)))) - (3236867620876637029LL))) + (3236867620876637039LL))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [11ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        var_17 = arr_6 [i_1];
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? (((/* implicit */unsigned long long int) (~(-3828045450144945019LL)))) : (((((/* implicit */_Bool) 3828045450144945046LL)) ? (((/* implicit */unsigned long long int) -3828045450144945023LL)) : (18446744073709551603ULL)))));
        var_18 = ((/* implicit */_Bool) min(((-(3828045450144945041LL))), (((long long int) min((var_4), (((/* implicit */int) arr_6 [i_2])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (min((var_7), (((/* implicit */long long int) ((unsigned char) (unsigned char)17)))))));
    var_20 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) var_3))));
}
