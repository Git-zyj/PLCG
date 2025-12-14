/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143482
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
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) (+((+(var_6)))))) ? ((-(max((var_6), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)51034)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)16)))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)248)) : (((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14)))) - (((/* implicit */int) ((short) (unsigned char)245))))))))));
        var_18 *= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_19 = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) (short)11)) > (((/* implicit */int) arr_2 [(unsigned short)0] [(unsigned short)0]))))) >> (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_7)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) -1LL)))) && (((/* implicit */_Bool) ((int) var_6))))))));
        var_21 -= arr_4 [i_1];
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1])))) ^ (((/* implicit */int) ((_Bool) arr_0 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) (unsigned short)23353);
        var_23 += var_13;
    }
    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)161)) || ((_Bool)0))))));
        arr_13 [15] = ((/* implicit */signed char) ((((unsigned int) 568682273)) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned short)0] [i_3])))));
        arr_14 [(unsigned char)15] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((7331463021071749651ULL), (18183355279482519881ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (short)4)) > (((/* implicit */int) var_11))))), (min(((unsigned char)15), ((unsigned char)16)))))) : (((/* implicit */int) arr_11 [i_3 - 1]))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_11 [i_3 + 1]))))))))))));
    }
}
