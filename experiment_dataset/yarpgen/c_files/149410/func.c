/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149410
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
    var_13 -= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
                arr_6 [i_1] = ((/* implicit */long long int) ((int) max((arr_3 [i_0] [i_0] [11LL]), (((/* implicit */unsigned short) (short)32767)))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((-2593545551145959030LL), (((/* implicit */long long int) (unsigned short)16368))));
                            arr_13 [i_0] [i_0] [i_1] [(short)12] [i_0] = ((/* implicit */long long int) ((-280764584) | (-21)));
                            var_15 |= ((/* implicit */long long int) 0U);
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) max((min((var_0), (((/* implicit */long long int) 6144)))), (((/* implicit */long long int) (~(-1414080099))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((((/* implicit */short) (unsigned char)111)), ((short)-14479))), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_5 - 3])) && (((/* implicit */_Bool) var_2)))))));
                            arr_20 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (short)32767)), (1414080099)));
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_5] [(unsigned short)8] [i_5] [i_5] [i_5 - 2]))));
                            arr_22 [i_1] [i_1] = min((arr_9 [i_5 - 2] [i_5] [i_5]), (((/* implicit */long long int) max((1864914734), (993396642)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
