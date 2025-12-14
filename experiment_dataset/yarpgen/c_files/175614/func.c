/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175614
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)16384))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) 168357719255234990LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16389))) : (min((((/* implicit */unsigned long long int) (~(168357719255234990LL)))), (arr_0 [i_0])))));
        var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_14)))) | (((((/* implicit */int) (unsigned short)31850)) * (((/* implicit */int) var_14))))))) ? (arr_0 [i_0]) : (min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 *= ((/* implicit */signed char) min((min((var_5), (((/* implicit */long long int) ((_Bool) arr_5 [i_1]))))), (8796093022204LL)));
        var_24 &= (unsigned short)0;
        var_25 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) max((168357719255234990LL), (((/* implicit */long long int) (unsigned short)49151))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 14259012302923798213ULL))))) >= (((((/* implicit */int) var_12)) + (((/* implicit */int) arr_4 [i_1] [i_1]))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_3) : (arr_5 [i_1]))) << ((((-(((/* implicit */int) (unsigned short)65535)))) + (65590)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 ^= ((/* implicit */unsigned long long int) (unsigned short)16388);
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)0)))))))));
    }
    var_28 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)33680)) && (((/* implicit */_Bool) (short)23243)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8565)) || (((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (4187731770785753390ULL)))))));
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) ((_Bool) (unsigned short)56357))) & (((/* implicit */int) ((unsigned short) var_18))))))))));
    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) 0ULL))));
}
