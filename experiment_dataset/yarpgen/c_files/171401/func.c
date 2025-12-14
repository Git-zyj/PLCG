/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171401
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 ^= ((((/* implicit */_Bool) var_7)) ? (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */_Bool) 18349648228128094287ULL)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned short)57694)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_5 [i_3] [i_1] [i_2])), (((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10857))) : (9220633215123355523LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 342610539U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
                            var_16 ^= ((/* implicit */_Bool) arr_1 [i_2]);
                            var_17 -= ((/* implicit */int) max((((unsigned int) arr_2 [i_0])), (((/* implicit */unsigned int) var_11))));
                            arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_3] [i_3] [16LL] [18ULL] [i_3] [i_3]), (((/* implicit */long long int) var_8)))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned int) (~(var_12))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) + (-1301825202)));
    var_20 &= ((/* implicit */unsigned long long int) var_12);
}
