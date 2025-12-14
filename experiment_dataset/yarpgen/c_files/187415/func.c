/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187415
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
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) var_3);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -461645243)) ? (((/* implicit */int) var_7)) : (var_0)))) ? (((461645243) % (arr_0 [i_0]))) : (arr_0 [i_0])))) ? (max((((/* implicit */unsigned long long int) max((2147483647), (arr_0 [i_0])))), (0ULL))) : (((/* implicit */unsigned long long int) (-(min((var_8), (((/* implicit */long long int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) -77902253)) ? (((/* implicit */int) (signed char)0)) : (461645253))) : (((/* implicit */int) var_4)))));
        arr_3 [i_0] = ((/* implicit */int) min((((unsigned long long int) 15)), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) != (arr_0 [i_0]))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-18864)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((-461645241) >= (((/* implicit */int) arr_4 [i_1 - 1])))) ? (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 1])) << (((arr_7 [0U] [5LL]) + (79965938))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) || (((/* implicit */_Bool) arr_9 [i_1] [8] [i_1 - 1]))))))))));
                                var_17 ^= ((/* implicit */_Bool) (-(min((2663866061210726838LL), (((/* implicit */long long int) arr_13 [(unsigned char)5] [i_3] [i_3] [i_5]))))));
                                var_18 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_0 [i_6]);
                                arr_23 [i_1] [i_1] [i_1] [i_6] [1] = ((/* implicit */long long int) arr_1 [i_6]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) arr_17 [(signed char)9] [(signed char)9] [5LL] [i_2] [i_1] [i_1]);
                    var_21 += ((/* implicit */signed char) -1138620599);
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */long long int) arr_14 [i_1] [i_1 - 2] [(signed char)4] [(signed char)4]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1 - 1]))))), (((arr_16 [i_1 - 1]) << (((arr_16 [i_1 - 1]) - (434615094))))))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_1 - 2] [(unsigned short)5] [i_1] [i_1])))))));
        arr_25 [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (arr_5 [i_1 - 2])))) ? (((((/* implicit */_Bool) var_0)) ? (461645266) : ((-(-461645251))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 - 1])))))));
    }
    var_24 = ((/* implicit */unsigned short) 18446744073709551615ULL);
}
