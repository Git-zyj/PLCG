/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127405
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
    var_14 += ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 |= ((/* implicit */int) ((var_8) / (((/* implicit */unsigned int) (+(var_2))))));
        var_16 |= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (max((13ULL), (arr_1 [i_1] [i_0]))))) > (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
        }
        var_18 = ((/* implicit */int) arr_2 [i_0] [(signed char)1] [i_0]);
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)212))))) != (((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (35336)))))))) >= (arr_6 [i_2] [i_2])));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) && (((/* implicit */_Bool) var_12))));
        arr_7 [i_2] = ((/* implicit */long long int) var_3);
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_12)) <= (arr_6 [i_2] [i_2])))) >> (((/* implicit */int) var_7))));
    }
    var_21 = ((/* implicit */int) var_7);
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    var_23 += min((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)44)))) < (var_9)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (var_6))) : (((/* implicit */int) var_0)))));
}
