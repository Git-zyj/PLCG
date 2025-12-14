/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132594
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
    for (int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((unsigned int) arr_3 [i_0 + 1] [i_0 - 2]));
                var_12 = ((signed char) ((max((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (arr_3 [i_0 - 2] [8U]))) | (arr_3 [i_0 - 1] [i_0 - 2])));
                arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((arr_2 [i_0] [i_1]), (arr_2 [i_0 - 1] [i_1]))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) ^ (arr_3 [i_1] [i_1])))) : (min((((/* implicit */unsigned long long int) arr_1 [15] [i_1])), (arr_0 [i_0] [i_1])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))) - (((((/* implicit */_Bool) arr_1 [i_0 - 4] [(short)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [i_1]))) : (arr_3 [(signed char)12] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) arr_1 [i_0 - 2] [18U])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) <= (arr_3 [i_0] [i_1])))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((min((((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_4)))))) + (max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_5)))), (((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_3])))) ? (((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [(signed char)12] [i_3])) && (((/* implicit */_Bool) arr_6 [i_3]))))))));
                var_14 = ((/* implicit */unsigned short) ((signed char) min((max((((/* implicit */unsigned char) arr_2 [i_2] [i_3])), (arr_5 [i_3]))), (((/* implicit */unsigned char) ((arr_10 [i_3] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [13U] [13ULL])))))))));
            }
        } 
    } 
    var_15 = ((max((((((/* implicit */int) var_8)) != (((/* implicit */int) var_1)))), (((((/* implicit */int) var_6)) != (((/* implicit */int) var_6)))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_8))))), (max((var_2), (((/* implicit */short) var_3))))))) : (((/* implicit */int) var_8)));
}
