/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105806
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
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) (-((+(((var_2) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [11LL]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_0 [i_0 - 3] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(max((var_1), (arr_0 [i_0] [i_1])))))) * (((var_8) * (((7012735234058922464ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((9753472264734120840ULL) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 2503222646U)) ? (7372991448097368230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26893))) == (((8693271808975430775ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63783)))))))), ((+(max((8693271808975430771ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
