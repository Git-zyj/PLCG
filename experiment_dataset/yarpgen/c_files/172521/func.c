/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172521
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))));
            arr_6 [i_1] = ((/* implicit */long long int) var_1);
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (-16777216))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (short)-10742)) + (-16777193)));
        }
        var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) 403107955)) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_12))));
        var_19 |= ((/* implicit */int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 3221225472U)) : (arr_5 [i_0] [i_0] [i_0])))));
        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))))))) ^ ((+(arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_2);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_8 [i_4] [i_3]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (844536583U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4])))))) || (arr_12 [i_3])));
            }
        } 
    } 
}
