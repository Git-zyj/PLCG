/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165173
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)250))))))), ((+(max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (arr_1 [i_0] [i_0])))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)14224)))), (((/* implicit */int) (unsigned char)6))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [3] [i_1] [i_1])), (arr_4 [i_0])))), (max((arr_1 [i_0] [4U]), (arr_1 [i_0] [i_0]))))))))));
                var_14 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)51322));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (+(max(((+(arr_1 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [10])) : (arr_1 [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) arr_6 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_15 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_11 [(unsigned short)4] [i_3]) : (arr_7 [i_3])))));
            var_16 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))))));
            arr_12 [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (arr_11 [i_3] [i_2])))) && (((/* implicit */_Bool) (~(arr_6 [i_2]))))));
            var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))));
        }
    }
}
