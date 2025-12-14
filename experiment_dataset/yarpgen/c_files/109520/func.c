/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109520
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
    var_19 = ((/* implicit */unsigned short) min((((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */int) var_6)))))))), (((/* implicit */unsigned long long int) var_13))));
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (~(arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0]))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31744)) ? (((/* implicit */int) var_18)) : (1091273666)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(15732390408959727512ULL)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_24 -= ((/* implicit */unsigned long long int) var_4);
        var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1995))))) ? (((max((1406756815U), (((/* implicit */unsigned int) -1091273666)))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))))))) : (((unsigned int) (unsigned short)32640)));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 1406756802U))));
        arr_8 [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(3040989460U)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_2])) ? (12132911) : (((/* implicit */int) (unsigned char)114)))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_0 [i_2])))) ? (((2714353664749824096ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (var_3)))))));
        var_27 = ((/* implicit */short) 3722476353U);
    }
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))))) * (((/* implicit */int) var_13)))))));
}
