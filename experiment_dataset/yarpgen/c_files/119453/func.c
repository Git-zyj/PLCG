/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119453
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 += ((/* implicit */_Bool) arr_0 [i_0 + 3]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(arr_3 [i_2] [i_1] [i_0 - 2]))) * (((/* implicit */unsigned long long int) ((arr_2 [i_2]) + (((/* implicit */long long int) arr_0 [(_Bool)1]))))))))));
                    arr_9 [i_0] [i_0] [i_0] [3U] = arr_1 [i_2];
                    arr_10 [(signed char)4] [(_Bool)1] [(unsigned short)8] [(signed char)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [24U] [i_2])) ? (((((/* implicit */_Bool) ((int) arr_0 [i_1]))) ? (arr_7 [i_0 + 1] [i_0] [i_0] [9U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) (short)20313)))), ((!(((/* implicit */_Bool) var_10))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((var_5) / (((/* implicit */unsigned long long int) var_14)))))) << (((unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_3] [i_3] [i_0] [i_3] [(_Bool)1] = ((/* implicit */signed char) min((-2758230330593499311LL), (((/* implicit */long long int) (unsigned short)30999))));
                                arr_16 [i_0] [i_0] [(unsigned short)22] [i_0 + 1] [i_0] |= ((/* implicit */signed char) (_Bool)1);
                                var_19 += ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned short) ((((arr_11 [i_0] [(_Bool)1] [i_0 - 2] [i_0 - 1] [i_0 + 3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 - 2])))) + (((((/* implicit */int) (short)-26989)) - (((/* implicit */int) (signed char)13))))));
    }
    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-89)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 335368099U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2264952689U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3848691129U)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (_Bool)0))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12100378830328901819ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) arr_7 [i_5] [i_5] [10ULL] [i_5])), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) 918286939U))))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) max(((unsigned short)4099), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_24 [i_5] [i_6] [i_7] &= ((/* implicit */unsigned char) ((unsigned int) var_13));
                }
            } 
        } 
        arr_25 [i_5] |= ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5 + 1] [i_5]))) : (56249100402413674ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-13)))))));
        var_23 -= ((/* implicit */unsigned long long int) max((((arr_0 [i_5 + 1]) & (((/* implicit */int) arr_21 [i_5 + 1] [i_5 - 1] [i_5 - 1])))), (((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) (_Bool)1))))));
    }
    var_24 &= min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_2))))), (((/* implicit */unsigned int) var_15)));
}
