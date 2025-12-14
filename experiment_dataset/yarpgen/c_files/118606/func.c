/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118606
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
    var_10 = ((/* implicit */unsigned char) (short)24164);
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_9))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_14 += ((/* implicit */short) ((((/* implicit */int) (signed char)-44)) < (231613568)));
                        arr_10 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) && (((/* implicit */_Bool) ((unsigned int) var_5)))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_2]))))) ? (arr_7 [i_0] [i_0 - 3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2]))) / (var_7))))));
                    }
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_0 [i_0 + 2]) + (2147483647))) >> (((arr_0 [i_0 + 3]) + (186247157)))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) * (min((var_7), (var_7))))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0 + 1] [i_0 - 3]) ? (min((((/* implicit */unsigned int) arr_2 [i_0])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((_Bool) -231613568)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [10U] [i_0] [i_0 - 1])))));
        var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_3 [8]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))))));
    }
}
