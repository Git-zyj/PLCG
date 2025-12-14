/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132724
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_8)))) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1] [i_2]))) % (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(short)10] [i_3] [(unsigned char)16] [i_3] = ((/* implicit */short) (-(((((/* implicit */int) (short)2048)) - (((/* implicit */int) arr_13 [i_1] [i_2 + 2] [i_2 + 2] [i_4 + 2] [i_2 + 2]))))));
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_4])) ? (arr_2 [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (unsigned char)255);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_12))));
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */short) (+(2492994406467684246LL)));
}
