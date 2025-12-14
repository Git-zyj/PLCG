/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139101
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
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17066)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (2312922583U)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-33554432) : (-2128009846)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -33554441)) ? (((/* implicit */int) var_0)) : (-33554464)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 33554432)) : (arr_1 [i_0 + 2])))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_1] [i_3 + 2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (10585428160331470468ULL) : (((/* implicit */unsigned long long int) -33554436))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [8U]))))) ? (((/* implicit */int) (signed char)-26)) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_2]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_2] [i_1])) ? (arr_12 [i_3]) : (((/* implicit */int) (unsigned short)10010))))) ? (((((/* implicit */_Bool) 33554441)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8493442140330256332LL))) : (((/* implicit */long long int) arr_12 [i_1 + 3])))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 3]))))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1856333806U)) ? (arr_9 [i_1 + 1] [i_3 - 1]) : (((/* implicit */int) (signed char)-26)))))));
                        arr_15 [i_4] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (33554413)))) ? (var_3) : (((/* implicit */unsigned int) 33554432))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 33554432)) : (var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_3 + 2])) ? (((/* implicit */int) var_1)) : (var_7))))));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_7)) : (var_12)))) ? (((((/* implicit */_Bool) -33554444)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_17 [i_3 + 2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3 + 1] [i_5] [i_5]))) : (var_3)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) var_3)) : (3317376298832757097ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3] [i_3 + 1])) ? (2051280116) : (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3]))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_3 + 1])) ? (var_12) : (((/* implicit */long long int) 414961901U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1])) ? (var_7) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 + 2])) ? (((/* implicit */int) arr_16 [i_1 + 3])) : (((/* implicit */int) (unsigned char)65))))) ? (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_3 - 1]))) : (18446744073709551602ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_1 + 3])))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_1 + 2])) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 - 1] [i_3 - 1])) ? (126) : (((/* implicit */int) var_0))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3993578403468635926ULL)) ? (((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_1])) : (var_3)))) ? (((((/* implicit */_Bool) var_6)) ? (15125235467161950513ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_3 + 1])) ? (3317376298832757097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62291)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 2591551617U)) ? (arr_5 [i_1 - 1]) : (14435670924304632509ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_3 - 1] [i_3 + 1]) : (((/* implicit */int) (unsigned char)43)))))));
                    }
                    arr_21 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_3 + 2])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_3 + 1])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (3826634467U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2664640209U)))) ? (((((/* implicit */_Bool) (signed char)22)) ? (var_3) : (((/* implicit */unsigned int) arr_12 [i_1 + 3])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -33554455)) ? (((/* implicit */int) arr_4 [i_1 - 1] [(unsigned short)4])) : (((/* implicit */int) var_6)))))));
    }
    var_26 = ((/* implicit */int) var_9);
}
