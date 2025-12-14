/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186262
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */int) (short)29704)) & (var_11))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))) & ((-(15132284625790672116ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)18] [(signed char)18] [15] [i_1] = arr_4 [i_1] [17LL];
                    var_17 = ((/* implicit */unsigned short) (unsigned char)245);
                    arr_10 [i_0] [i_1] = ((/* implicit */int) arr_1 [(unsigned char)6] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (~(((unsigned int) arr_16 [i_1] [(_Bool)1] [i_3] [(_Bool)1] [i_4] [i_1]))));
                                var_19 &= ((/* implicit */signed char) ((long long int) ((int) arr_6 [i_0] [i_4 - 1] [i_0])));
                                var_20 = ((/* implicit */unsigned int) var_8);
                                var_21 = ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
