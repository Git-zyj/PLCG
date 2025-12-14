/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146721
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) var_8)), (12398136248983630555ULL)))))) ? (var_0) : (((((((/* implicit */_Bool) var_3)) ? (825709229114937130LL) : (-825709229114937137LL))) >> (((((var_11) ? (-825709229114937130LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (825709229114937134LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)28722)), (min((((((/* implicit */_Bool) (unsigned char)100)) ? (825709229114937130LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (-825709229114937151LL)))));
                                var_13 = ((/* implicit */unsigned short) (((~(arr_6 [i_2 + 1] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1])))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((min((max((((/* implicit */int) (_Bool)1)), (269598713))), (((/* implicit */int) (short)1)))), (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_1]), (arr_7 [i_1] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */signed char) var_4);
}
