/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170971
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
    var_15 = (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) 1329453775)), (var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = max((((/* implicit */unsigned long long int) min((-1329453753), (1329453775)))), (max((arr_2 [i_1 - 2]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))))));
                var_17 = arr_2 [i_0];
                var_18 &= ((/* implicit */unsigned long long int) max((((unsigned int) (+(((/* implicit */int) var_1))))), (max((arr_3 [i_0] [i_1] [i_1 - 1]), (arr_3 [i_0] [i_1] [i_1 + 1])))));
                var_19 -= (~(max((max((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_1 - 1]))), (min((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_0]))))));
                var_20 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_1)), (arr_4 [i_1 - 1] [i_1 - 1]))), (max((arr_3 [i_1 + 1] [i_1] [i_1 - 1]), (arr_4 [i_1 - 2] [i_1 - 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((((unsigned long long int) arr_6 [i_3 + 1] [i_3 + 2])), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_6] [i_4])) : (((/* implicit */int) var_9)))))))));
                                var_22 = ((/* implicit */unsigned char) max((((unsigned int) (~(((/* implicit */int) var_8))))), (((unsigned int) (((_Bool)1) ? (var_11) : (((/* implicit */int) arr_6 [i_5] [i_2])))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) min((arr_20 [i_2] [i_6] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 1]), (arr_20 [i_3] [i_2] [i_3 + 2] [18] [i_3 - 1] [i_3 - 1])))) ? ((~(13191227895792657457ULL))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_11)))), (arr_15 [i_3] [13ULL] [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (arr_18 [i_3] [i_2] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1329453775)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_3 + 2]))))) : (((unsigned long long int) var_8))))));
            }
        } 
    } 
}
