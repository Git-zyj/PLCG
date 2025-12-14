/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166575
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) arr_6 [i_0 + 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) > (0U))));
                                arr_16 [i_0] [i_1] [i_3] [i_2 - 3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_3 [i_0 + 1] [i_1]))))));
                                arr_17 [i_0] [i_1] [i_3] |= ((/* implicit */short) (+(((int) arr_5 [i_3] [i_3] [i_0 + 3]))));
                                arr_18 [i_4] [i_2] [i_0 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2] [i_2 + 2])), (arr_10 [i_0 + 2] [i_0 - 1] [i_2 - 2] [i_2 + 1])))));
                                arr_19 [i_0 + 3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(min((4035199484870659176ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2]))) : (var_7))), (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 3]) | (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [i_2])))))))));
                    arr_21 [i_0] [i_0] [i_0 + 2] [i_0] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14411544588838892439ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_14 [i_0 + 2] [i_0 - 1] [i_0] [i_1] [i_1] [i_2 - 1] [i_2]))))), (4035199484870659172ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14411544588838892461ULL))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_26 [i_6] = ((/* implicit */signed char) min((arr_7 [i_6] [i_5] [i_1]), (((/* implicit */long long int) min((arr_14 [i_6] [i_5] [i_2] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 288230376151711743ULL))))))))));
                                arr_27 [i_1] = max((((/* implicit */long long int) ((int) var_2))), (((((long long int) arr_11 [i_0] [i_1] [i_0] [i_5] [i_6])) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 3] [i_2 + 1] [i_2 + 3] [i_2 - 3]))))));
                                arr_28 [i_6] [i_5] [i_2 - 1] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2 + 3] [i_0 - 2]))));
                                arr_29 [i_6] [i_6] [i_2 - 2] [i_6] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 1] [i_5])) ? (((/* implicit */int) ((short) arr_6 [i_2 - 2] [i_0 - 1]))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((var_5) != (18446744073709551615ULL)))), (((unsigned char) arr_2 [i_0 - 1])))))));
                                arr_30 [i_0] [i_1] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)26385)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-12)), ((unsigned short)26385))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
