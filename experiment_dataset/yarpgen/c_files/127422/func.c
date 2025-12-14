/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127422
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((arr_5 [i_0] [(signed char)4] [(signed char)11]) & (((/* implicit */int) ((unsigned char) var_10))))) * (((((/* implicit */int) ((((/* implicit */int) (unsigned short)25999)) > (((/* implicit */int) arr_1 [i_1]))))) / ((+(((/* implicit */int) arr_3 [i_0] [i_1])))))))))));
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (unsigned short)25999))));
                        arr_8 [i_3] [i_1] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3 + 1])) ? (((((/* implicit */int) arr_6 [i_1] [i_1] [(signed char)6] [(signed char)6])) - (((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) max(((unsigned short)46858), (var_9))))))) ? (((arr_1 [i_3 + 3]) ? (((/* implicit */int) arr_1 [i_3 + 2])) : (((/* implicit */int) arr_1 [i_3 + 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-2114663591) : (((/* implicit */int) (unsigned short)25992))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 + 2] [i_0 - 1]))))));
                    }
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_2 [i_1] [i_1]))))))), ((unsigned short)11072)));
                }
            } 
        } 
    } 
    var_14 = var_7;
}
