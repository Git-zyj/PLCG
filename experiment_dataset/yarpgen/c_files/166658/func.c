/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166658
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) % (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */long long int) ((int) var_3))) : (var_17)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) 93517932U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) (~(arr_1 [i_0] [i_0 + 2])));
        var_21 = ((/* implicit */short) ((((((/* implicit */long long int) var_4)) - (arr_1 [i_0 + 1] [i_0]))) / (arr_1 [i_0 + 1] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((1027242837) * (((/* implicit */int) var_7)))) >= (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))), (arr_1 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((arr_1 [i_1] [i_1]) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))), (((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (short)-29016))))))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_18)))) <= (11479590544599031330ULL))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [(unsigned short)0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((var_1), (1027242837)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) ((var_17) == (((/* implicit */long long int) 93517929U)))))))))) : (min((arr_1 [i_2] [(_Bool)1]), (max((var_17), (var_0)))))));
        var_23 = ((/* implicit */int) arr_7 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                var_24 *= var_15;
                var_25 -= ((/* implicit */unsigned int) arr_10 [i_3] [i_4]);
            }
        } 
    } 
}
