/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179731
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [10] &= ((/* implicit */unsigned char) (unsigned short)49297);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2] [i_2 - 1]))) : (var_6)))) ? (((arr_5 [i_2] [14ULL] [14ULL] [i_2 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2 - 1] [i_2] [15]))))));
                            var_20 = ((/* implicit */unsigned int) max(((unsigned short)49297), ((unsigned short)16239)));
                            arr_9 [i_3] [(signed char)17] [i_0] [i_0] [i_0] = ((((((/* implicit */int) (signed char)60)) == (((/* implicit */int) (unsigned short)16239)))) ? (max((((((/* implicit */_Bool) arr_3 [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [8] [(unsigned short)0] [8] [(unsigned short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1] [i_1] [(unsigned short)3] [i_1] [i_0]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (arr_8 [i_1] [i_1] [i_0 - 1] [(signed char)13] [i_0 - 1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0] [9] [i_0] [i_0] [i_0])) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1])))));
                arr_10 [i_0] = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))));
                var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)244)), (var_18)))) ? (((/* implicit */int) (short)11185)) : (((/* implicit */int) arr_6 [i_0] [7ULL] [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) var_3);
    var_24 = ((/* implicit */unsigned short) var_12);
}
