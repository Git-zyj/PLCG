/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141792
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = (+((~((~(((/* implicit */int) arr_8 [i_0] [i_0])))))));
                    var_19 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_2 + 1] [(unsigned char)11] [i_0])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_0] [(unsigned short)10])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) (-(arr_11 [i_3] [i_4])))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_3] [i_3])), (arr_14 [i_4])))))) : ((-(((/* implicit */int) arr_14 [i_4])))));
                arr_17 [i_4] [22U] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_3] [i_4]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5482572543901518718LL))))) : (((/* implicit */int) arr_12 [i_3] [i_4]))));
                var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3])))))));
            }
        } 
    } 
}
