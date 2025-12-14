/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165341
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) ((unsigned char) var_1))))));
    var_13 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) max((arr_1 [i_1]), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-22690))))) ? (arr_1 [i_1]) : (((arr_1 [i_0]) ^ (((/* implicit */int) arr_3 [i_0 + 1] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), ((-(-4301777731839655752LL)))));
                            arr_9 [i_0 - 1] [i_2 - 1] [(unsigned short)19] = ((/* implicit */unsigned char) (+((~(arr_6 [i_0] [i_0] [i_0 - 1] [i_0])))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 3) 
                            {
                                arr_13 [i_4] [i_1] [i_0] = arr_4 [i_2 - 1] [i_2] [i_4];
                                var_16 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4754857408113592942LL))))) == (((/* implicit */long long int) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_5)))))))));
                            }
                            arr_14 [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_5 [i_0 + 1] [i_2 - 1] [i_2 + 1])))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */unsigned char) (((~(arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))) >> ((((~(-4754857408113592942LL))) - (4754857408113592900LL)))));
            }
        } 
    } 
}
