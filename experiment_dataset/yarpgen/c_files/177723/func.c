/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177723
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_8))));
                    var_17 = ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) & (((/* implicit */int) (_Bool)1))))) > ((((_Bool)1) ? (((-6107970365199491903LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_18 = var_7;
    var_19 += var_10;
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_20 = min(((_Bool)1), ((((((_Bool)1) && (((/* implicit */_Bool) -722090659253605145LL)))) && ((!(((/* implicit */_Bool) var_15)))))));
                var_21 = ((/* implicit */_Bool) 9223372036854775792LL);
            }
        } 
    } 
}
