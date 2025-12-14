/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139180
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0 + 2])), (((long long int) (_Bool)1))))) ? (min(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                arr_5 [i_0] = ((/* implicit */short) max((2402031711U), ((+(((unsigned int) 1237771430))))));
                arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (3U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [(unsigned char)10] [i_1]))))) : (arr_0 [i_0 + 2]))) > (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))))))));
                arr_7 [6] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_1] [i_1]);
                arr_8 [i_1] [i_0] = ((/* implicit */long long int) var_16);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) * ((-(((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) var_4)) ? ((-(1436623649))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_13)))))) : (((/* implicit */int) ((unsigned char) (short)24783)))));
        arr_12 [i_2] = ((/* implicit */_Bool) (signed char)-126);
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_4);
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_8);
        }
    }
}
