/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142611
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((unsigned long long int) (+(((/* implicit */int) (unsigned char)32))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [(unsigned short)8] [i_0 - 1] = ((/* implicit */short) max(((-(14533602262058053176ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)223)))))));
        arr_3 [i_0] = arr_0 [i_0 - 1];
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] [20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 512)) || (((/* implicit */_Bool) arr_5 [i_1 + 3]))));
        arr_8 [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)38))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_16 -= ((((/* implicit */_Bool) (~(((arr_10 [i_2] [(unsigned char)20]) << (((2216615441596416ULL) - (2216615441596355ULL)))))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))));
        arr_11 [i_2] [(short)5] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_10 [i_2] [i_2])))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24)) || (((/* implicit */_Bool) (unsigned short)5377))))) * (((/* implicit */int) (short)-2048))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_4)))))), (var_9)));
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((((/* implicit */short) (unsigned char)217)), ((short)-2048)))) > (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3))));
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ? ((~(15964007793992744341ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (11354849493174937987ULL))))))));
}
