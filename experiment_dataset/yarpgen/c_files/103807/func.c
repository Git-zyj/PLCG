/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103807
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = min((5U), (((/* implicit */unsigned int) max(((unsigned short)21636), (((/* implicit */unsigned short) (_Bool)1))))));
                var_14 = ((/* implicit */unsigned char) (signed char)18);
                var_15 |= ((/* implicit */int) (_Bool)1);
                var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_5 [i_0] [(unsigned short)3] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((min((5186475431050406028LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)1])), ((unsigned short)12183))))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                arr_13 [(unsigned short)16] &= ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) > (min((((/* implicit */long long int) -2147483639)), (min((((/* implicit */long long int) (unsigned char)152)), (-1229975267165623959LL)))))));
                var_17 = max((arr_6 [i_2] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (0U)))));
                var_18 = ((/* implicit */int) ((6564369773574178180ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [(_Bool)0])))));
                arr_14 [18ULL] &= ((/* implicit */unsigned char) arr_10 [i_2] [(short)16]);
            }
        } 
    } 
    var_19 = var_1;
}
