/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104889
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = min(((-(max((4294967291U), (((/* implicit */unsigned int) arr_1 [i_0])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))));
                var_15 = ((/* implicit */short) arr_0 [i_0]);
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) min((arr_3 [i_1]), (((/* implicit */unsigned int) min((arr_2 [i_0]), (arr_2 [i_1])))))));
                var_16 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) (unsigned char)0)) : (var_5)))), (((((/* implicit */_Bool) 4294967281U)) ? (arr_3 [i_1]) : (4294967295U)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_17 = ((/* implicit */short) arr_6 [i_2]);
        arr_7 [(_Bool)1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)27951))));
        var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_2]))))));
    }
    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        arr_10 [(unsigned short)13] = min(((+(((/* implicit */int) arr_9 [i_3])))), ((((!(((/* implicit */_Bool) 4U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_9 [i_3])))));
        arr_11 [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_3]))));
        arr_12 [i_3 - 1] = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) 18U))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((_Bool) min((((/* implicit */signed char) arr_8 [i_4] [i_5])), (arr_9 [i_6])))) ? (((/* implicit */unsigned int) (~(var_5)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 72733170U)), (arr_19 [i_6 - 1] [i_4] [i_4] [4U])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_4] [i_6]))))) : (max((3628223510U), (4294967271U)))))));
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((~(var_12)))))), (((((/* implicit */_Bool) 5743835474026843943ULL)) ? ((~(18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((7051218433518792144ULL), (5ULL))))));
                        arr_21 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_6] [i_6] [i_7] [i_6] [i_4] [i_5] = ((/* implicit */unsigned int) -9026470072792970708LL);
                            arr_25 [i_3] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */int) arr_17 [i_4] [(_Bool)1]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_28 [i_3] [i_4] [i_4] [i_5] [i_4] [21] [17ULL] = ((/* implicit */_Bool) arr_9 [i_3]);
                            arr_29 [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) min((18446744073709551610ULL), (((/* implicit */unsigned long long int) (!(arr_8 [i_5 + 2] [i_3 - 3]))))));
                            var_22 = ((/* implicit */unsigned long long int) min((((_Bool) (+(((/* implicit */int) arr_16 [0ULL] [0ULL]))))), ((!(((/* implicit */_Bool) min((4294967290U), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max(((+(((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6216213665872359803LL))))), (((/* implicit */long long int) (~(min((((/* implicit */int) var_1)), (var_5)))))))))));
}
