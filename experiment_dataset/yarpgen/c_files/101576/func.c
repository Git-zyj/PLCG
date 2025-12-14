/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101576
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
    var_17 = (+(635987883563365052ULL));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (unsigned short)52706);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (3587225322117635581ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) var_8)), (17308996214206821752ULL)))))) ? ((-(max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_16)))))) : (((arr_2 [i_2 + 2] [i_2 - 1]) % (((var_5) << (((((/* implicit */int) arr_10 [14ULL])) - (17748)))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) (signed char)127))))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_15))))), (var_9)))));
                                var_21 = (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [i_0] [i_3] [i_4])) | (((/* implicit */int) arr_7 [i_4])))), (((/* implicit */int) arr_10 [i_2 + 1]))))));
                                arr_14 [i_4] [4ULL] [13U] [13U] [i_4] [1U] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)52706);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((((-(14859518751591916050ULL))) - (max((17810756190146186553ULL), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_1])) || (((/* implicit */_Bool) 7390212164759616257ULL))))), ((~(arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned short)49611);
    var_23 = ((/* implicit */unsigned int) var_14);
}
