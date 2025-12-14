/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156244
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [10U] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 21397900)), (5293139159443269245ULL)));
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) ((short) var_7)))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) min(((-((~(((/* implicit */int) (unsigned short)31744)))))), (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(short)2]))))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_11)))));
            }
        } 
    } 
    var_18 = (((!(((/* implicit */_Bool) (+(var_15)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)31744)))))))));
    var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_12))))))));
    var_20 = var_4;
    var_21 = var_7;
}
