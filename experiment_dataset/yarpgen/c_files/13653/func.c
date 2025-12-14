/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13653
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
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57087))))) : (((/* implicit */int) (signed char)117))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)-77)) : (2028244680))))));
                            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16581850771199614904ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16581850771199614897ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_2 [22U])))) : (-6540639907255076044LL)))) ? (((/* implicit */int) ((signed char) (unsigned short)57090))) : ((-(((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_2])))))));
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775797LL))))) : (((/* implicit */int) (signed char)-117)))) >> (((/* implicit */int) ((_Bool) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))))))));
                            arr_11 [i_2] [(signed char)22] [i_2] [i_3 + 1] = arr_4 [i_0 + 1] [1U];
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 24; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_0] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_4 - 2] [i_2] [i_3] [i_4 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_11))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))) : (max(((+(var_0))), (((/* implicit */unsigned long long int) arr_8 [i_3 + 2] [i_1 - 1] [i_4] [i_4 - 2] [i_2 + 1]))))));
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((unsigned long long int) var_7)) <= (((unsigned long long int) var_18))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_13 [i_1] [20U] [(signed char)18] [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_0);
}
