/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133476
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((short) (unsigned char)117)))));
    var_11 = ((unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */long long int) ((short) ((((/* implicit */int) arr_1 [i_0] [i_1])) + (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((var_4) / (((/* implicit */long long int) var_9)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) ((short) ((((((/* implicit */_Bool) var_6)) ? (1445006740832911163ULL) : (arr_5 [i_0] [i_1] [i_0]))) | (((unsigned long long int) (unsigned short)12288)))));
                var_13 *= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((arr_5 [7ULL] [7ULL] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */short) var_3);
    var_15 = ((/* implicit */unsigned short) (~(min((min((var_9), (((/* implicit */unsigned int) (unsigned char)130)))), ((~(var_9)))))));
}
