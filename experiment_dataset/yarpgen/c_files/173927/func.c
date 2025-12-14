/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173927
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) != ((+(((long long int) var_10))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) min((var_0), (var_3)))), (min((var_15), (((/* implicit */unsigned char) var_0))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 581615001)) ? (arr_4 [i_2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) 1652096541)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_9)))))))))))));
                    arr_10 [(signed char)14] [i_1] [i_1] &= ((/* implicit */unsigned int) max((max((min((((/* implicit */unsigned long long int) (signed char)-11)), (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-11)), (arr_5 [(short)18])))))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2]))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) (~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 581615001)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_23 *= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))), (min((((((/* implicit */int) (signed char)104)) + (((/* implicit */int) (unsigned char)255)))), ((~(((/* implicit */int) (_Bool)1))))))));
                    var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) max((-1902956664), (((/* implicit */int) (signed char)50))))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-65)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))));
}
