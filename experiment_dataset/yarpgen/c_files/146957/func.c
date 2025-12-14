/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146957
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((((/* implicit */int) min(((short)-17552), (((/* implicit */short) var_7))))) | (((/* implicit */int) (unsigned short)21934)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43601)))))) : (((long long int) min((arr_0 [i_1]), (arr_0 [i_0]))))));
                var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))))) * (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (arr_4 [i_0] [i_1] [i_1])))));
                var_12 += ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(unsigned char)3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_1] [i_1])))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) min((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))) : (((/* implicit */int) ((signed char) var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                {
                    var_13 = ((/* implicit */long long int) arr_12 [i_2 - 1] [i_2] [i_2 - 3]);
                    var_14 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (arr_8 [i_2] [i_3]))) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_4])) : (((/* implicit */int) arr_12 [i_3 + 4] [i_2 - 2] [i_3 + 4]))));
                }
                arr_13 [i_3] &= ((/* implicit */unsigned int) (unsigned short)43601);
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_7);
}
