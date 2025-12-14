/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14355
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
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [13] [i_0] = ((/* implicit */long long int) arr_2 [10ULL]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 |= ((/* implicit */_Bool) ((((_Bool) arr_10 [10ULL] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])) ? (((unsigned int) arr_10 [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_4] [i_4 + 1])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(unsigned short)1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1])) + (((/* implicit */int) arr_10 [i_4] [i_4] [0ULL] [i_4] [(unsigned short)4] [i_4 - 1])))))));
                                arr_15 [(_Bool)1] [i_3] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((var_3) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */int) arr_8 [i_0])) >> (((1910886540) - (1910886522))))) : (((/* implicit */int) (short)-20184)))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [(signed char)6] [(signed char)6] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1685554194122084051LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */int) max((max(((short)-20184), ((short)20185))), (((/* implicit */short) ((arr_0 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))))))))) >= (((/* implicit */int) max(((short)20161), ((short)23727))))));
                        arr_19 [i_5] [i_2] [i_1] [2ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))))));
                        arr_20 [(signed char)12] [i_5] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_5] [i_5] [i_2] [8ULL] [i_5])), (-809085850)))) * (((var_2) ? (((/* implicit */unsigned long long int) var_11)) : (1125899638407168ULL))))), (var_12)));
                        var_19 = ((/* implicit */short) min(((~(((((/* implicit */unsigned long long int) var_3)) | (arr_18 [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-5)) | (((((((/* implicit */int) var_10)) + (2147483647))) >> (((var_3) - (3536510189U))))))))));
                    }
                }
            } 
        } 
    } 
}
