/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167537
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (-(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_2) > (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) var_2)))))));
                    var_11 = ((/* implicit */unsigned int) (unsigned short)52963);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                arr_13 [i_3] [(unsigned char)5] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 428842295)) ? (((/* implicit */long long int) var_0)) : (var_7)))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (6147712223503935432LL) : (((/* implicit */long long int) 3295525844U))))) ? ((((!(arr_12 [i_3] [i_3]))) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) max((arr_1 [i_4] [i_4]), (arr_1 [i_3] [i_4])))))))));
                var_13 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234))))), ((+(arr_5 [i_3])))));
            }
        } 
    } 
}
