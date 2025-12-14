/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105039
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
    var_10 = ((/* implicit */short) max((((100663296LL) * (((/* implicit */long long int) 4245304413U)))), (((-5896741457888582188LL) * (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-3), (((/* implicit */signed char) var_8))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [(short)14] [i_0] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6500)) ? (250242112) : (((/* implicit */int) (short)-6500))));
                                var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1038))))))) : ((-(var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))) : ((+(1946624334)))));
                                var_12 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] = ((/* implicit */long long int) ((_Bool) -2372118812480008377LL));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) var_2);
                                arr_17 [i_6] [i_2] [i_0] = ((/* implicit */unsigned short) max((((((-1745819488040490548LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_6 + 3] [i_6 - 2] [i_6 + 1])) - (119))))), (((/* implicit */long long int) max((arr_2 [i_6 - 2] [i_6 - 1] [i_6 + 1]), (arr_2 [i_6 + 3] [i_6 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) arr_4 [i_0] [i_2] [(unsigned short)11] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6133))) : (9223372036854775807LL))))), (((/* implicit */long long int) (unsigned short)1038))));
                        var_16 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2 - 1])), ((unsigned short)22)))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (14765386088324630277ULL)));
                    }
                }
            } 
        } 
    } 
    var_18 = max((((((/* implicit */_Bool) 3037089043893720538LL)) ? (-1745819488040490552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1026))))), (((/* implicit */long long int) var_4)));
    var_19 = ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)16441)), (7346086246381157794LL))) & (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_20 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65514))));
}
