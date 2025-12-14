/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145627
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)207)) != (((/* implicit */int) (unsigned char)255)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned short) max(((~(((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_18))))), (((/* implicit */long long int) (+(1154730323U))))));
                                arr_14 [i_0] [8] [i_2] [i_3] [i_4] [0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_0) - (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_1) << (((3978411192U) - (3978411186U))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1129376269U)) >= (((((/* implicit */_Bool) var_5)) ? (17652467507181816592ULL) : (((/* implicit */unsigned long long int) var_17))))))))));
                                arr_15 [11LL] [(unsigned short)11] [11LL] [i_3] [(unsigned short)0] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))))) ? (((/* implicit */int) ((signed char) (short)-32767))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_10 [i_3] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_7);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2542132910U))))), (var_6)))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) ((var_14) || (((var_13) > (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_18 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned char)120)) - (114)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5])))));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((_Bool)1), (var_14))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) 1145659206808825108ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (3008452943U))) != (((/* implicit */unsigned int) -1430876107)))))));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 16; i_6 += 4) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17932))) < ((-(1145659206808825084ULL)))));
        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))));
        arr_23 [i_6 - 4] [i_6 - 4] = ((/* implicit */_Bool) ((7703059U) | (((/* implicit */unsigned int) arr_22 [i_6 + 1]))));
    }
}
