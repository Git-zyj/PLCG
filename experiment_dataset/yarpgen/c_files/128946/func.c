/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128946
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 1])))), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(signed char)2] [i_2 + 2] [(unsigned char)17] [i_0])))))))) : (((/* implicit */int) arr_3 [i_3] [i_1] [i_1]))));
                        var_11 = ((/* implicit */unsigned int) var_2);
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((min((var_10), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_6 [i_3] [i_2 + 2] [i_1] [i_0])))))))))))));
                    }
                    var_13 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-32))))), (((unsigned int) arr_1 [i_2 - 1] [10ULL]))));
                    var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_2]);
                    var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_0])) ? (arr_0 [i_2 + 2] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_9);
}
