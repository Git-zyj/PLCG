/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145007
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_2 + 1]))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 1])) < (((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 1]))))))));
                    var_11 = ((/* implicit */unsigned short) arr_4 [(signed char)11] [i_0]);
                }
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) max((arr_5 [(unsigned short)14] [i_1]), (((/* implicit */short) arr_2 [i_0] [i_0] [i_0]))))) : (max((var_6), (((/* implicit */int) (unsigned char)182))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) max(((unsigned char)74), (((/* implicit */unsigned char) (_Bool)0)))))))) > (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3 - 1])) && (((/* implicit */_Bool) arr_5 [i_3] [(short)4]))));
        arr_11 [i_3 + 1] = ((/* implicit */signed char) var_10);
    }
    for (int i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) arr_1 [i_4 + 2] [i_4 - 2])))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4 - 1]))));
        arr_17 [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (var_0) : (((/* implicit */long long int) var_5)))) == (((/* implicit */long long int) ((unsigned int) arr_9 [i_4])))))), (max((((/* implicit */int) arr_0 [i_4])), (var_6)))));
    }
}
