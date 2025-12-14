/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155589
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -939057147)) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (4236455133U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) var_10)))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_0) : (4236455133U))) + (max((var_5), (((/* implicit */unsigned int) arr_0 [i_0] [i_1 - 3]))))))) ? ((~((+(-89634950))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)2295)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 4])) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_2])) : (((/* implicit */int) arr_4 [i_2 - 2] [i_3 + 2])))) : ((~(((/* implicit */int) arr_4 [i_2] [i_3 + 4])))))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 2])) : (((/* implicit */int) arr_6 [i_2 + 1]))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4 + 1]))))), (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_4] [i_3])))))) : (((/* implicit */int) ((unsigned char) 10)))));
                    arr_12 [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-3195)))) ? (7206887334215482906ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3195)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))));
                }
                var_15 = ((/* implicit */long long int) (~(min((arr_8 [i_3] [i_3] [i_2]), (((/* implicit */unsigned int) (short)3195))))));
            }
        } 
    } 
}
