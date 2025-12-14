/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146020
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
    var_20 = ((/* implicit */_Bool) ((short) (-2147483647 - 1)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1 + 1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                                arr_12 [i_4 - 2] [i_3] [4LL] [i_1 - 1] [4LL] |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_2 [i_3 - 1]))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((-(max((((/* implicit */long long int) (short)-2191)), (var_10)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)2191)));
                                arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 16686349523644858152ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2183))) : (24028208U))), (((/* implicit */unsigned int) (unsigned short)32256))));
                                var_22 -= ((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0] [10U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
