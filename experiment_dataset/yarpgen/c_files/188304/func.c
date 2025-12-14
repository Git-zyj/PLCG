/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188304
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
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [10U] [i_3]);
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] [i_1 + 3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (6663564912154356252LL) : (((/* implicit */long long int) var_1))))));
                                arr_16 [i_0] [i_1] [(signed char)2] [i_3] [i_4] = ((/* implicit */unsigned char) (unsigned short)20193);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 3] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 2] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (var_0)))) : (((unsigned long long int) arr_1 [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) (unsigned char)0)) ? (var_13) : (var_14))))), (var_2)));
                                arr_22 [i_5] [6] [i_2 - 1] [i_5] [i_6] [i_5 + 1] = ((/* implicit */signed char) var_10);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 634047563U)) ? (arr_7 [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned int) var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) - (9223372036854775807LL)))) ? (((/* implicit */long long int) var_14)) : (min((var_0), (var_0))))) >> (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4257527292892167510LL))))), (min((((/* implicit */unsigned int) (unsigned char)9)), (var_14))))))))));
    var_21 = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) var_10)) ? (157008663892934605ULL) : (((/* implicit */unsigned long long int) var_1))))))));
}
