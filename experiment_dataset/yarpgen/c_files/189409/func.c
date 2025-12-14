/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189409
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) (unsigned char)93))))))), (((/* implicit */unsigned int) (-(var_10))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) ? (((/* implicit */int) (unsigned short)64516)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (arr_1 [i_0])))) ? (((((/* implicit */int) (unsigned short)38015)) * (((/* implicit */int) (unsigned short)8)))) : (((/* implicit */int) (unsigned char)91))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((var_0), ((((!((_Bool)1))) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)91)), (var_10)))) : (((long long int) arr_5 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_5 [i_1])) ? (var_10) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) != (((/* implicit */int) var_4))));
        arr_8 [i_1] = var_7;
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) (+(((long long int) ((unsigned int) var_3)))));
            arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (arr_9 [i_1] [i_1]) : (arr_10 [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_2])), ((unsigned short)19)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((unsigned int) 0LL)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) var_6)))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_16 [i_3] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (max((arr_15 [i_1]), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3])))))) ? ((~(((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50926))))));
            arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */long long int) 3001643562U)) : (9223372036854775807LL)));
        }
    }
}
