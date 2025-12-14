/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148554
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
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (min((var_6), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */_Bool) (unsigned char)255);
                        var_13 = ((/* implicit */_Bool) ((arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3]) ? (((var_9) ? (min((var_6), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) max((var_8), (1347642828U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_4 [i_3] [i_2] [i_0]), ((unsigned char)1)))))))));
                        var_14 = ((/* implicit */unsigned int) max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_2)), (var_3))))))));
                    }
                    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_4 [(unsigned char)11] [i_1] [i_1 - 1])))));
                }
            } 
        } 
    } 
}
