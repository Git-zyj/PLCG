/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128403
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_15), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_0]), (((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */int) var_5)) / (arr_3 [i_2 - 1] [(_Bool)1]))) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) arr_5 [i_2 - 4])), ((-(arr_6 [i_0] [i_2] [i_2])))))));
                    arr_9 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_6 [(unsigned short)17] [(unsigned short)17] [i_2]))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) ? ((~(max((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_4 [i_0] [i_1])))))) : (min((arr_1 [i_0]), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (var_0)))))));
                    var_19 = (-(((/* implicit */int) var_10)));
                    var_20 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-78)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))))), (var_10)))))));
}
