/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101901
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
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */int) max((((((/* implicit */long long int) max((((/* implicit */int) (signed char)-21)), (2147483627)))) ^ (max((arr_4 [i_1]), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_11)))))));
                var_19 ^= ((/* implicit */short) ((max(((_Bool)1), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0])))))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */unsigned int) (signed char)-39)), (max((((/* implicit */unsigned int) ((_Bool) arr_3 [i_1]))), (arr_0 [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_11 [i_3] [i_3] = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) max((arr_9 [i_3] [i_3]), (((/* implicit */short) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_3]))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max(((+(((/* implicit */int) ((short) (_Bool)1))))), (((((/* implicit */_Bool) max(((unsigned char)60), (((/* implicit */unsigned char) arr_6 [i_3]))))) ? (arr_5 [i_2] [i_3]) : (((arr_6 [i_2]) ? (var_12) : (((/* implicit */int) var_9)))))))))));
            }
        } 
    } 
}
