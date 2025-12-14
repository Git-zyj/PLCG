/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129816
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
    var_18 = (((_Bool)1) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (unsigned short)63169)));
    var_19 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-8814875738541366748LL), (((/* implicit */long long int) var_11)))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned short)52279)))), (min((((/* implicit */int) arr_10 [i_3 + 1] [14U] [i_3 - 2] [i_3 - 1])), (min((((/* implicit */int) (short)32755)), (0)))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 3227554352U);
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [8LL] [8LL])) & (((/* implicit */int) (unsigned char)153))))), ((~(-2471921586962574622LL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_11);
}
