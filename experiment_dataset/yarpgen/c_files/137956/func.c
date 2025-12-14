/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137956
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
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)23290)) : (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42234)) * (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = (!(arr_1 [(unsigned short)6]));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8346400288522194372LL)) ? ((~((~(((/* implicit */int) var_7)))))) : (((/* implicit */int) max((arr_10 [i_3] [i_2] [i_1] [i_0]), (arr_10 [(_Bool)1] [i_1] [i_2] [i_3]))))));
                            var_18 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [7])) || (((/* implicit */_Bool) arr_0 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */long long int) (((_Bool)1) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13640)) ? (((/* implicit */int) var_2)) : (448595701)))) ? (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                            var_19 |= ((/* implicit */unsigned short) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23281)))));
                            var_20 += ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)51101)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_1] [i_0]))) : (arr_11 [i_1] [i_3] [i_1]))) % (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
                var_21 = (unsigned short)42259;
            }
        } 
    } 
}
