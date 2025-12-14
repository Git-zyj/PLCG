/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147253
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) >= (var_9))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_1)))) : (((((/* implicit */_Bool) (unsigned short)8889)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)142))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned char)156)) % (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) max((var_7), ((unsigned char)187)))) ? ((-(((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))));
                                var_12 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((int) (unsigned char)52))) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (14525750190958653788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 - 1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)20679)) == (arr_7 [i_0] [(signed char)6] [i_0] [i_3 - 1] [(signed char)6]))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_4)))) ? (((((/* implicit */int) arr_9 [i_0])) << (((((((/* implicit */int) arr_0 [i_0] [i_1])) + (10070))) - (14))))) : (((/* implicit */int) arr_0 [i_2] [i_1]))))))))));
                }
            } 
        } 
    } 
}
