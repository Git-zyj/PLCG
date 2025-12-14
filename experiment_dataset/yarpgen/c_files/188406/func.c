/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188406
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
    var_17 = ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) var_11)), (min((var_0), (((/* implicit */unsigned long long int) var_1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_7);
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_12)))))))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_12);
        var_19 = ((/* implicit */int) min((var_19), (arr_5 [i_1])));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    var_20 ^= max((4267119702U), (27847593U));
                    var_21 = ((/* implicit */short) var_6);
                    arr_14 [i_1 + 1] [(short)14] [i_2] [i_3 + 2] = ((/* implicit */short) arr_8 [i_1] [i_1] [i_3]);
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_1 [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) : (var_6))) : (((/* implicit */long long int) (((((~(((/* implicit */int) arr_2 [1ULL] [(unsigned short)10])))) + (2147483647))) >> (((min((arr_5 [i_4]), (((/* implicit */int) arr_13 [i_4] [16ULL] [i_4])))) - (12293))))))));
        arr_20 [(short)2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (unsigned short)35774)) ? (arr_6 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))))))), (((/* implicit */unsigned long long int) var_7))));
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (+(var_8))))) * (max((((((/* implicit */int) (unsigned short)35774)) / (arr_5 [i_4]))), (((/* implicit */int) var_11))))));
    }
    var_23 = ((/* implicit */short) max((var_23), (max((var_16), (var_4)))));
}
