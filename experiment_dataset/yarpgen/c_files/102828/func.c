/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102828
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
    var_10 &= ((/* implicit */long long int) var_4);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))) ? (((((/* implicit */_Bool) var_9)) ? (13152883265254672675ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9222809086901354496LL) >= (((/* implicit */long long int) -1)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (13152883265254672675ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~(5293860808454878941ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */long long int) max((1155272424U), (((/* implicit */unsigned int) ((int) (~(5293860808454878941ULL)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_7))));
            arr_7 [(unsigned short)14] = ((/* implicit */signed char) (_Bool)0);
            arr_8 [i_0] = ((/* implicit */int) 5293860808454878941ULL);
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49951))))) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))))))));
            var_15 = ((/* implicit */unsigned short) var_9);
            arr_11 [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)59)) ? (arr_2 [i_0] [(unsigned short)3]) : (-2317697930945929544LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27576)) ? (((/* implicit */int) var_7)) : (1)))))), (4104679096034817320LL)));
        }
        for (int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            arr_14 [14] [i_3] [i_3 + 3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)23366))));
            var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 3])) ? (arr_0 [i_3 + 1] [i_3 + 3]) : (arr_0 [i_3 + 1] [i_3 + 3])))));
            var_17 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) 13152883265254672675ULL)) ? (32880113) : (((/* implicit */int) (_Bool)1))))), (((long long int) -2212974679969772155LL))))));
        }
    }
}
