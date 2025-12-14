/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105778
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
    var_15 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)31744))))));
    var_16 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]);
                                var_18 = ((/* implicit */int) var_0);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65531)))) <= (arr_12 [i_2] [i_2 + 1] [i_1 + 3] [i_1] [i_1] [i_1])));
                                arr_14 [(signed char)2] [i_3] [i_2] [i_1] [(signed char)2] |= var_3;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (9223372036854775807LL))) << (((((-1) + (21))) - (20)))));
                                arr_21 [i_0] [i_1] [i_1] [i_2] [i_5] [i_0] [i_6] = ((/* implicit */short) 1237778857);
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)448))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))))) & (((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [i_1] [i_6 - 1] [i_1 + 1])))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
