/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140421
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_10 = ((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_0 + 2]) ? (((/* implicit */unsigned int) 1981262069)) : (((((/* implicit */_Bool) var_5)) ? ((+(arr_4 [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))));
                                arr_14 [i_3] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> ((+(((/* implicit */int) arr_3 [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21172)))))), (max((arr_7 [i_0 - 1] [i_0 + 3] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 = (!(((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_6])));
                                arr_19 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) (~(min((1354279297U), (((/* implicit */unsigned int) (unsigned short)44374))))));
                                var_13 = ((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) <= (((/* implicit */int) (unsigned short)44366)))))) : (arr_4 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_14 -= ((/* implicit */long long int) arr_22 [i_7] [i_7]);
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) -1981262069)), (6010458104134091472LL)))));
        var_16 = ((/* implicit */signed char) ((unsigned short) arr_21 [i_7] [i_7]));
        arr_23 [i_7] = ((/* implicit */unsigned short) 0U);
    }
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned char) var_9);
}
