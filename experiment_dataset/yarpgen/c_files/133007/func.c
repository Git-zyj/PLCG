/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133007
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
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)7] = ((((/* implicit */_Bool) 2543894110U)) ? (1751073193U) : (1751073169U));
                var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (1751073186U)));
                var_20 = ((/* implicit */signed char) arr_3 [i_1]);
                var_21 = ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))) ? (max((1751073169U), (((/* implicit */unsigned int) arr_1 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967275U), (((/* implicit */unsigned int) arr_1 [i_3]))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [(_Bool)1])))) : (((/* implicit */int) max((arr_1 [3U]), (arr_1 [i_0]))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_2)), (var_10))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2543894127U)) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_5 - 1] [i_4]))))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 4; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_25 [i_4] [i_4] = ((/* implicit */unsigned int) ((short) ((signed char) 2543894094U)));
                                var_25 = ((/* implicit */unsigned int) max((min((-1044702546633618293LL), (((/* implicit */long long int) arr_16 [i_4] [i_4])))), (min((arr_17 [i_4]), (arr_17 [i_4])))));
                                arr_26 [(signed char)8] [i_5] [i_6] [i_5 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])), (arr_16 [i_5 + 1] [i_5 - 1])))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (27U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_6] [i_6])) ? (((/* implicit */int) (short)-17836)) : (((/* implicit */int) ((short) 18446744073709551615ULL))))))));
                                var_26 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_4] [13U] [i_4] [i_7] [i_8]))), (min((arr_2 [i_5 - 1] [i_6 - 1]), (arr_2 [i_5 - 1] [i_6 - 4])))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */_Bool) 4194303LL);
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_5 + 1] [i_4])) ? (arr_7 [i_4] [i_4] [3U] [i_4]) : (arr_7 [i_4] [13U] [i_5] [i_5 - 1])))) ? (arr_12 [i_5] [i_5 + 1]) : (((/* implicit */long long int) 30U))));
                var_29 = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (1879659216U) : (1879659232U))));
            }
        } 
    } 
}
