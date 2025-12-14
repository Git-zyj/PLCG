/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174157
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 58720256U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (short)-6895)) ? (((/* implicit */long long int) var_0)) : (var_11))))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((signed char) (~(arr_5 [i_1] [i_1 + 2]))));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2765466726637411859LL) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))) ^ ((-(arr_5 [i_1 + 1] [i_1 + 1])))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)16382))))), (((((/* implicit */_Bool) (short)32767)) ? (538980747245366533LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16403))))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) / (max((var_11), (((/* implicit */long long int) var_15))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) var_7)))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)16382)))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_6))));
    var_20 |= ((/* implicit */short) (((+(max((((/* implicit */int) var_3)), (-500952982))))) >= (((/* implicit */int) (!(((-538980747245366533LL) >= (-5468316919837447570LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((arr_14 [i_2] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) ? (arr_10 [i_3]) : (((((((/* implicit */_Bool) arr_10 [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_9))))))));
                arr_16 [i_2] [14] [i_2] &= ((/* implicit */long long int) arr_9 [i_3]);
            }
        } 
    } 
}
