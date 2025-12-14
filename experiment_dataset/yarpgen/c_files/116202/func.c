/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116202
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((((arr_3 [i_2]) + (((/* implicit */long long int) arr_5 [i_1])))) == (min((arr_0 [i_0]), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1]))))))) : (((/* implicit */int) min((max((var_12), (arr_2 [i_0]))), (((/* implicit */short) ((_Bool) (unsigned short)52766))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) ((arr_3 [i_1]) <= (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))));
                    arr_6 [i_0] [i_1] [i_2] = max((max((arr_4 [i_2] [i_1] [i_0]), (arr_4 [i_2] [i_2] [i_2]))), (arr_4 [i_2] [i_1] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4] [i_3] [i_3])) - (((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_7 [i_3]) : (((/* implicit */int) arr_10 [i_3] [i_4] [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) : (arr_7 [i_3])))));
                arr_13 [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_14 [i_3] [i_4] = ((/* implicit */long long int) min((-1545310574), ((-2147483647 - 1))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_4);
    var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52766)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (min((var_6), (((/* implicit */long long int) var_8))))))) ? (min((12264394U), (((/* implicit */unsigned int) (short)20415)))) : ((+(min((((/* implicit */unsigned int) var_9)), (2147830863U)))))));
}
