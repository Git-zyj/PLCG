/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176316
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [7U] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((90316755U) >> (0LL))));
                arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])), (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [7U]), ((unsigned short)2747))))) : ((((_Bool)0) ? (((/* implicit */long long int) 4204650540U)) : (9068622537266212405LL)))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned char) 31U))))) / (4204650540U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_21 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(arr_17 [i_4 + 1] [i_5])))))) ? (((/* implicit */int) var_7)) : (arr_15 [i_4] [12ULL] [i_4])));
                            arr_22 [i_2] [i_2] [i_3] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)207)))) : (((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-492175809824434593LL)))));
                        }
                    } 
                } 
                arr_23 [21LL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)28596)) : (((/* implicit */int) (signed char)-63))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (signed char)63);
}
