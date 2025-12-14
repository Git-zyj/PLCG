/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165724
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
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 642924147U)) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))) ? (min((((/* implicit */long long int) 812903718U)), (var_1))) : (((/* implicit */long long int) 4118524053U))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [6U] [6U])) ? (arr_8 [i_0 + 1] [(_Bool)0] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) | ((~(var_5))))));
                    arr_10 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8))))) ^ (min((arr_1 [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */_Bool) (-(((var_2) - (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_2)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) < (var_7))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((signed char) var_4))) : (((int) var_5))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
}
