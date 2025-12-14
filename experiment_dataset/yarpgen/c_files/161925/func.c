/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161925
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
    var_16 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_15) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (var_11))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [15ULL]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-10))))) : (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (short)10)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((((/* implicit */int) min(((short)11), ((short)-11)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_9 [i_4] [(unsigned char)3] [i_1 + 3] [i_0])) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (short)-15223)))) - (11))))));
                                arr_16 [14LL] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -9223372036854775804LL);
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((unsigned int) arr_7 [i_4 + 1] [i_3] [i_0])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_9 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_1 + 2])))) ? (arr_12 [i_0 - 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1]) : (arr_12 [i_0 - 1] [(signed char)6] [2LL] [i_1 + 1] [i_1])));
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0]))) != (6394193622507706438ULL)))));
            }
        } 
    } 
}
