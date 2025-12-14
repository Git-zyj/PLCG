/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117279
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_9))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 520172921U)) && (((/* implicit */_Bool) 712360181))))), (min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)0)))))))))));
    var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((max((2729191756417185695LL), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-712360177)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (min((var_1), (((/* implicit */unsigned short) var_0))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) min((max((-712360197), (((/* implicit */int) var_14)))), (((/* implicit */int) min((arr_2 [i_0]), (arr_3 [(signed char)8]))))));
        var_22 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (712360173))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_15)))))) << (((((712360196) & (((/* implicit */int) arr_1 [i_0])))) - (712343552)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((max((((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)112)))))), (var_6))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [6U])) ? ((-(((/* implicit */int) (unsigned short)2)))) : (((((-712360177) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_8))));
                    var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-126))))) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) ((signed char) var_4)))))) > (arr_0 [i_2 + 4])));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) > (((/* implicit */int) (!(((/* implicit */_Bool) 2729191756417185695LL))))))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) min((var_28), (var_2)));
}
