/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185239
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
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) min((8561521770823468408ULL), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (15559417822067696605ULL)))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)219)), ((unsigned short)65519)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37031))) + (var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) != (((/* implicit */int) var_3))))))))));
                var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28504)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0] [(unsigned short)8]) : (2741412009491899042ULL))) : (min((var_2), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [(unsigned short)11]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
}
