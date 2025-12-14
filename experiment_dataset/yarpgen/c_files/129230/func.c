/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129230
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [13U] |= ((/* implicit */short) (!(((/* implicit */_Bool) 1129515596519984865ULL))));
                arr_8 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_3)))))) ? (((arr_4 [i_0] [i_1]) ? (-16LL) : (((/* implicit */long long int) -2113507255)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                var_14 = ((/* implicit */unsigned short) (+(max((3440894953U), (max((3022396856U), (arr_3 [i_0])))))));
                arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (32767)))) ? (((arr_1 [i_0]) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) * (-849344060844685578LL))) : (((/* implicit */long long int) 402653184U)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_4))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (_Bool)1);
                    var_16 *= ((/* implicit */long long int) arr_5 [i_4]);
                    arr_17 [i_4] [i_4] [i_3] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_16 [5] [5] [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_2]))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_3)), (arr_6 [(_Bool)1])))))) : (var_7)));
                }
            } 
        } 
    } 
}
