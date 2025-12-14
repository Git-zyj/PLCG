/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12742
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)103))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) ? ((+(arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((max((var_13), (((/* implicit */int) (signed char)-104)))) + (arr_1 [i_0]))))));
                arr_6 [(short)11] = ((/* implicit */unsigned char) max((((arr_4 [i_0]) + (arr_4 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_4 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                arr_12 [(unsigned short)9] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) >= (var_1)))), ((+(arr_10 [i_2] [i_3] [i_2])))))));
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3])) + (((/* implicit */int) arr_8 [i_2]))))) ? (arr_10 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(arr_3 [i_3] [i_2]))))))));
                arr_14 [i_3] [i_3] [i_2] = ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3])) / (((/* implicit */int) arr_9 [i_2] [i_3]))))) : (arr_10 [i_2] [i_2] [i_3]));
            }
        } 
    } 
}
