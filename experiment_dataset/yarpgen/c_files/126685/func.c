/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126685
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
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) var_11)), (max((((/* implicit */int) ((_Bool) var_7))), (((int) var_6))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-26)), ((~(((/* implicit */int) (signed char)26))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((-(arr_1 [i_1]))) > (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_2]) : (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-24)) : (arr_6 [i_0] [i_0] [i_1] [i_2])))) ? (max((arr_5 [0] [i_2]), (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) > (4294967295U)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned char) var_7));
    var_20 = ((/* implicit */unsigned char) (~((-((~(var_16)))))));
}
