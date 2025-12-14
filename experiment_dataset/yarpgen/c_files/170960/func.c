/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170960
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [14] [i_1] [i_2] = ((/* implicit */long long int) max((max(((-(((/* implicit */int) (short)18916)))), (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])))), ((+(((/* implicit */int) (unsigned char)249))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (((!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17))) == (var_10))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28109)))))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_7)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1 + 1]))))) : (max((arr_2 [i_0 - 1]), (var_3)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (signed char)41))))), (min((var_2), (((/* implicit */unsigned long long int) (signed char)-43))))))) ? (var_10) : (((((/* implicit */_Bool) var_14)) ? (min((var_4), (((/* implicit */unsigned int) (short)4053)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))))))));
}
