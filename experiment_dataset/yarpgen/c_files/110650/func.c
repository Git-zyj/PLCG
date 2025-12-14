/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110650
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))));
            arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */int) var_8);
        arr_9 [i_0] &= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)27216));
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_12 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_2]))))) || (arr_12 [i_2])));
        var_15 *= ((/* implicit */signed char) (unsigned char)9);
        var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (!(arr_11 [i_2] [i_2])))), (((((/* implicit */_Bool) 3858484176U)) ? (436483119U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))))))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (9)))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((unsigned int) arr_16 [i_3] [i_3])) << (min(((+(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) var_5)) >> (((2401230051209697431ULL) - (2401230051209697413ULL)))))))));
        arr_17 [i_3] = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_14 [i_3] [i_3])))));
        var_18 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_19 = (!(((/* implicit */_Bool) var_3)));
}
