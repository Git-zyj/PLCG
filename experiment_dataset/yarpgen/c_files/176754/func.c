/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176754
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
    var_19 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 3762610372U)), (10792312079976680545ULL))) >> (((max((((/* implicit */long long int) -1)), (-1418722093799230882LL))) + (43LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned char) ((arr_0 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (signed char)-61);
                    arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [6] [i_3] [i_2])), ((~(7654431993732871069ULL)))))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_2] [i_3] [i_3])), (arr_4 [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((int) -1))) < (0U))))));
    var_22 = ((((((var_6) | (((/* implicit */long long int) var_4)))) == (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) max((7654431993732871066ULL), (((/* implicit */unsigned long long int) -8874916273656545400LL))))) || (((/* implicit */_Bool) var_2))))));
}
