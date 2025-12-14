/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112198
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
    var_18 = ((/* implicit */signed char) (~((-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)-37)), (((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((-(var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)9])) ^ (((/* implicit */int) arr_3 [i_0] [i_1]))))) | ((~(var_10))))));
                var_21 *= ((/* implicit */unsigned int) (unsigned char)59);
                var_22 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((67108863) >= (((/* implicit */int) arr_3 [i_0] [i_1])))), (((((/* implicit */int) var_13)) != (((/* implicit */int) arr_3 [i_0] [(signed char)9]))))));
                var_23 = ((/* implicit */unsigned long long int) ((65535U) << (((/* implicit */int) (!(((/* implicit */_Bool) ((307732961U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) ((arr_12 [i_2] [i_3 + 1] [i_3]) < (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                arr_13 [i_3] |= ((/* implicit */unsigned short) ((1998944586U) / (((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_12 [i_3 + 2] [i_3 - 2] [i_3])))));
                arr_14 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_0)))))), ((+(((/* implicit */int) arr_10 [i_2] [i_2] [i_3 + 1]))))));
            }
        } 
    } 
}
