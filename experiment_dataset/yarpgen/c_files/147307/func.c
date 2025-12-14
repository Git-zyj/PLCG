/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147307
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_1] [i_0])) ? (arr_0 [i_2] [i_1]) : (549755813887ULL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 3] [i_1]))) & (arr_5 [i_0] [i_1 + 1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)7] [i_2 - 1])))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [4])))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4611686018427387903ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30475)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_2 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned short)8] [i_1] [i_0] [i_3 - 2] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2971)) ? (((/* implicit */int) (unsigned short)62584)) : (((/* implicit */int) (unsigned short)2971))))) - (((((/* implicit */_Bool) (unsigned short)2971)) ? (((/* implicit */long long int) ((arr_1 [(unsigned short)6] [i_2 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (var_4)))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_0] [i_3])) + (14655)))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_3])))))));
                                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                {
                    arr_21 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (_Bool)1)), (0LL))) > (((/* implicit */long long int) ((/* implicit */int) max((arr_18 [i_7 + 1] [i_6 + 1]), (arr_18 [i_7 + 1] [i_6 - 1])))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */long long int) -1)) : (9223372036854775807LL)))) ? (((/* implicit */int) arr_19 [i_5] [0U] [i_7])) : ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_22 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) < (var_4)))));
    var_24 = ((/* implicit */long long int) var_15);
}
