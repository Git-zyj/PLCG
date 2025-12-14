/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119485
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (short)-1);
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((-680911901668369204LL) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))))))), (max(((~(((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (arr_13 [i_0 + 2] [i_1] [i_0 + 1] [i_0 - 2] [i_0 + 2]))))) : (((arr_10 [i_1] [i_1] [i_0] [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2]) / (arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
                var_12 = ((/* implicit */unsigned char) var_10);
                arr_16 [i_0] [i_0] = ((/* implicit */int) ((short) arr_4 [i_0]));
            }
        } 
    } 
    var_13 = var_2;
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
    var_15 = ((/* implicit */unsigned char) -1723132237);
}
