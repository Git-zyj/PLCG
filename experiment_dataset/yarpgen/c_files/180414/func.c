/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180414
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
    var_18 |= var_10;
    var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
    var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), (var_0))))) : (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) | (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_3 [i_1 + 1] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (839635830169618109ULL))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 + 1] [i_0] [i_0])) - (max((((/* implicit */unsigned long long int) (_Bool)1)), (16537465791901717563ULL)))));
                                var_22 = max((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_3 + 2] [i_2] [i_0]))), (arr_3 [i_0] [i_1 - 2] [i_1 - 2])))), (var_15));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19586)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_0 - 1] [i_0 - 1] [i_0 + 2]))) : (7585138896306909441ULL)))))) ? (((unsigned long long int) ((arr_3 [i_1] [i_1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((unsigned char)175), (((/* implicit */unsigned char) (signed char)-93))))), (((unsigned int) arr_6 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 - 2])) ? (var_3) : (var_1))) * (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1])) ? (14954219353961357603ULL) : (13533854960887983626ULL))))), ((+(((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))))));
    }
}
