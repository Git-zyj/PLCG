/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141006
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
    var_14 = (signed char)127;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_15 += arr_2 [i_1];
            arr_5 [i_1] [i_1] [i_1] = var_3;
            var_16 = ((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) 9223372036854775807LL))));
            arr_6 [i_1] [(unsigned short)13] [i_1] = ((/* implicit */int) arr_2 [i_0]);
        }
        arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(signed char)3]);
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                arr_13 [i_2] [6] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_2])))))) | (((((/* implicit */_Bool) arr_3 [i_2])) ? ((-(((/* implicit */int) (unsigned short)65517)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6))))))));
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((((/* implicit */short) var_6)), (max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (signed char)2))))), (arr_20 [(unsigned char)15] [i_4 - 3] [i_4 + 1] [i_4] [i_4 - 2])))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((max((arr_2 [i_4 + 1]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9946548153503526919ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)64079))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
