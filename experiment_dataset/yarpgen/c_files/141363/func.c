/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141363
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */short) (unsigned short)19);
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49152)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */short) ((((/* implicit */long long int) ((((1041646748) == (((/* implicit */int) (_Bool)1)))) ? (345584752) : (((/* implicit */int) arr_4 [i_2 - 2] [i_0] [i_4 - 2]))))) & (-3440872324064077839LL)));
                                var_19 = ((/* implicit */unsigned int) max((var_19), ((~(((((/* implicit */_Bool) min((arr_10 [i_1] [(unsigned short)6] [i_3] [i_4 - 1]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [15LL] [i_1] [(_Bool)1])))) : (((((/* implicit */_Bool) 345584747)) ? (((/* implicit */unsigned int) 345584754)) : (4168448730U)))))))));
                                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) (~(-345584755)))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) 345584754)) : (1970418888908648833ULL)))))));
                                arr_14 [i_4] [i_4] [i_3] [i_2 + 1] [i_3] [i_1] [i_0] = ((/* implicit */signed char) (short)8192);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 -= (_Bool)1;
}
