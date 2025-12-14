/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141287
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
    var_14 = ((long long int) var_8);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-52)) ? (503105524) : (-503105524)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((2816641762U), (1236681647U)));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -503105506))) ? (((long long int) -800737904194101611LL)) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((min((arr_1 [22ULL]), (((/* implicit */long long int) var_5)))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (var_0) : (((/* implicit */long long int) (~(749858285U)))))));
    }
    for (long long int i_1 = 1; i_1 < 6; i_1 += 3) 
    {
        arr_8 [i_1] |= var_6;
        var_17 *= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 800737904194101610LL)) ? (((/* implicit */unsigned long long int) -7192964986234475491LL)) : (4089820095800946547ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3258930785313093581LL)))))), (((/* implicit */unsigned long long int) arr_0 [i_1]))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) max((503105514), (((/* implicit */int) arr_5 [i_1 + 2])))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_19 = (-(((((/* implicit */_Bool) arr_1 [i_2])) ? (var_9) : ((-(-3280153093458075685LL))))));
        arr_11 [i_2] [13U] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)51480)), (2462933522U)));
    }
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_20 = ((/* implicit */long long int) (-(537161188)));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_3 - 1]) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (2020275366) : (((/* implicit */int) (unsigned short)20979))))) : (max((1872525420U), (((/* implicit */unsigned int) (signed char)-34))))));
        var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_0 [i_3])), (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7192964986234475479LL)) ? (-2020275379) : (((/* implicit */int) (unsigned short)44952)))))));
    }
    var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_3)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)177)))) : (((/* implicit */int) var_5))))));
}
