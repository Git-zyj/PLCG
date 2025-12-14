/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126194
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
    var_15 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
    var_16 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59793)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)56)), (var_12)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8824))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [20LL] [20LL])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 1008)))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (unsigned char)200))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_0), (((/* implicit */short) arr_7 [i_0] [i_0] [i_1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-((+(var_12)))))));
            }
        } 
    } 
}
