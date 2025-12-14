/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102849
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)43506)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (534251579U)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_13))))), ((!(((/* implicit */_Bool) (unsigned short)43506)))))))) != ((+(arr_2 [i_1])))));
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_4 [i_0] [i_0] [13ULL])))), ((+(((/* implicit */int) (unsigned short)43522))))))) + (min(((+(1170255834U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43506)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((unsigned int) (((+(((/* implicit */int) (unsigned short)22025)))) < (((/* implicit */int) (unsigned short)22023)))));
                            var_17 *= (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])) >= (((/* implicit */int) arr_7 [i_3] [(unsigned char)9] [i_0]))))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */short) min((min((((/* implicit */long long int) 130023424)), (arr_6 [i_0] [i_0]))), (min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((unsigned short)37598), (((/* implicit */unsigned short) (_Bool)0)))), (var_11))))) * ((+(var_8)))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_0))));
}
