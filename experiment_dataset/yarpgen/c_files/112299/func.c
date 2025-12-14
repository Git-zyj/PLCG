/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112299
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (signed char)-15);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 + 2])) - (((/* implicit */int) ((short) -801819847957537599LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */signed char) (+(((var_13) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_3]))))));
        arr_10 [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_8 [i_3]))) << ((((((+(-801819847957537578LL))) + (801819847957537598LL))) - (20LL)))))));
        arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) < (var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_3])), (var_3))))))) - (min((var_4), (((/* implicit */unsigned long long int) arr_8 [i_3]))))));
        arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) | (arr_8 [i_3])));
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) ((int) ((unsigned int) 801819847957537599LL)));
        var_22 = ((/* implicit */unsigned char) var_14);
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) min((10901054963103544986ULL), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4]))))))));
    }
    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
            var_25 = var_12;
        }
        var_26 = ((/* implicit */unsigned int) ((var_19) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [8ULL]))) & (min((((/* implicit */unsigned long long int) var_16)), (var_0)))))));
        arr_22 [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_3 [i_5 - 1] [i_5 + 1])))));
    }
}
