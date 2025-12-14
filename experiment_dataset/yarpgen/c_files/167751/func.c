/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167751
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
    var_17 = var_14;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) <= (((/* implicit */int) arr_4 [(unsigned short)1] [i_0] [i_1])))))) / (var_3)));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8756656948721707950ULL)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41305))));
                arr_6 [i_1] [(_Bool)1] [(unsigned short)3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_14)) : (var_15))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [(short)1] [i_3] [i_4] = ((/* implicit */unsigned char) var_15);
                    var_20 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_2])))));
                    var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_4 + 1] [i_4]))) : (((long long int) var_6)))));
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((long long int) ((arr_0 [i_4 - 1]) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 + 1])))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_5)) - (211)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_2] [i_3] [i_2])))) : (((arr_13 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4 + 1]))) : (var_2)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_14);
}
