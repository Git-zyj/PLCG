/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141105
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
    var_17 &= (~(max((2353217424U), (((/* implicit */unsigned int) ((_Bool) 1941749893U))))));
    var_18 &= ((/* implicit */unsigned short) var_13);
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2424274345071103830ULL)) ? (((((/* implicit */_Bool) 16022469728638447763ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) : (((/* implicit */unsigned long long int) (((+(var_13))) - (var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) var_1));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_3 + 1])))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((unsigned int) var_8))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_3)), (arr_8 [i_0] [i_0]))) / (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)56378)))) : (((/* implicit */int) var_10))))))))));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (max((((/* implicit */unsigned short) arr_0 [(_Bool)1])), ((unsigned short)65533)))))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)9168)) ^ (((/* implicit */int) var_16)))))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_14))))), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))))));
                var_24 = ((((/* implicit */_Bool) ((long long int) 3144155133U))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1]))) : (((/* implicit */int) var_4)));
            }
        } 
    } 
}
