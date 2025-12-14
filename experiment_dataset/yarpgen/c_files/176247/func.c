/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176247
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
    var_18 = ((/* implicit */_Bool) -8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (+(var_7)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_20 -= ((short) (signed char)-1);
                            var_21 ^= ((/* implicit */long long int) -8);
                            arr_8 [i_1 + 1] [17LL] [i_1] [i_1 + 1] [(signed char)19] = ((/* implicit */long long int) arr_5 [i_0]);
                            var_22 = ((((/* implicit */_Bool) (unsigned short)35604)) ? (14200550965611758369ULL) : (((/* implicit */unsigned long long int) -8)));
                            arr_9 [i_1] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */long long int) min(((~(5))), (((/* implicit */int) (!(arr_1 [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (arr_7 [20ULL] [i_1 - 1] [i_1 + 1])));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_15) : (((/* implicit */unsigned long long int) 6204623761860893965LL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */long long int) 16775168)), (6204623761860893980LL)))))) ? (arr_7 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
}
