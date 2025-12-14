/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11330
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((641034079), (-641034085)));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) (((!(((/* implicit */_Bool) 641034079)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_1 + 3])))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0] [(unsigned short)15] [(signed char)6]) > (((/* implicit */unsigned long long int) 641034079))))) != (((/* implicit */int) min(((unsigned short)37482), (((/* implicit */unsigned short) (short)-11232)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 19; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_18 -= ((/* implicit */int) var_6);
                var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 641034094))));
                var_20 -= ((/* implicit */short) max((((((_Bool) 14228051832797092350ULL)) ? (((/* implicit */int) arr_7 [i_2 - 4])) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (var_1) : (641034079))))), (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned char) ((unsigned long long int) var_1));
}
