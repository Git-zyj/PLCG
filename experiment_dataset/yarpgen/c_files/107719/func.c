/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107719
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
    var_18 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((-6748032382616536929LL), (((/* implicit */long long int) var_2))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) var_15)) : (6748032382616536928LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_17) : (var_16))) : ((-(var_13)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 6578209947070925237LL)))) : (((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))))), (-6748032382616536943LL)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_0])))))));
                    var_21 -= ((/* implicit */unsigned short) (_Bool)1);
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1])) % (((/* implicit */int) arr_1 [i_0]))))) & (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])) ? (arr_2 [i_0] [i_0] [i_0]) : (var_1)))))) <= (max((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_1])) | (var_16)))), (arr_3 [i_0] [i_0] [i_2])))));
                    var_22 = ((/* implicit */_Bool) ((signed char) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_9))))));
                }
            }
        } 
    } 
}
