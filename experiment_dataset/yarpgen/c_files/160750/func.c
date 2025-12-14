/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160750
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((((/* implicit */_Bool) ((-122680277) ^ (782338632)))) ? (max((2810681976U), (((/* implicit */unsigned int) 782338642)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1 + 2] [1])) : (((/* implicit */int) arr_2 [(signed char)8] [i_1] [(signed char)8]))))))), (((max((arr_3 [(signed char)5] [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)-6)))) >> (((/* implicit */int) ((arr_3 [i_2] [i_1 + 1] [(unsigned char)9]) < (((/* implicit */unsigned int) 782338642))))))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_19)) ? (var_4) : (((/* implicit */int) var_18)))))) & (max((782338632), (-782338632))))))));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_15) - (((/* implicit */int) var_5)))) >> (((-782338643) + (782338659)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_13) > (var_12))) ? (-782338641) : (((/* implicit */int) max((var_5), (var_2))))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (var_6))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))) : (var_15)));
}
