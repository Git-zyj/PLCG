/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120911
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 &= min((arr_3 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_3])));
                            var_19 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_4 [i_3] [(signed char)12])), (min((min((var_5), (((/* implicit */unsigned short) var_15)))), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_2]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 2] [i_0 + 2]))) : (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_0] [i_0] [i_0 - 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-39)) * (((/* implicit */int) (signed char)-39)))))));
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_0 + 2] [i_0 + 2] [i_0])) ? (arr_3 [i_0] [i_0]) : (min((3ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((/* implicit */unsigned long long int) (signed char)23))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 2]))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0 + 2])))) : (((((/* implicit */int) arr_2 [i_0] [i_0 + 2])) + (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) min((8753479234882380016ULL), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_4)))) ? (3ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_12)))))))));
}
