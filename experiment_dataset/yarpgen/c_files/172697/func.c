/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172697
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 19U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (short)16851))))))))) : (((unsigned long long int) var_8))));
    var_18 *= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_15)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((4294967294U), (((/* implicit */unsigned int) (short)-16867))));
                    var_20 += ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        var_21 |= max((9606096277691507508ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (22U)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967282U)) || (((/* implicit */_Bool) 0))));
        arr_10 [i_3 + 1] [(short)20] |= ((/* implicit */int) max((((/* implicit */signed char) ((-8057936932673055944LL) >= (((/* implicit */long long int) 2048))))), ((signed char)53)));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(-8057936932673055926LL))), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) 2067)) > (4294967283U))))))) : (((long long int) min((var_6), (9606096277691507525ULL))))));
            var_23 = ((/* implicit */signed char) 0ULL);
        }
    }
}
