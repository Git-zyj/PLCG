/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11349
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_2 [i_0]))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (arr_4 [i_0]))))))) * (((((/* implicit */int) var_12)) & (((/* implicit */int) ((arr_2 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_0]))))) == (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(signed char)10])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) var_5);
                    arr_11 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) == (var_11)));
                }
            } 
        } 
        var_21 -= ((/* implicit */_Bool) (~(((arr_3 [i_2] [(unsigned char)14] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2])))))));
        var_22 = ((/* implicit */unsigned long long int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))))))));
    }
    var_23 = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_1)) : (var_14)))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ^ (max((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (~(var_11)))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (6783545269766345959ULL)));
}
