/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115673
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
    var_19 &= ((/* implicit */signed char) 11ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [10U] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned char) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2])))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> ((((~(((/* implicit */int) var_16)))) + (179))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((short) 34359738367LL));
                            arr_13 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_0] [4LL] = (~(((/* implicit */int) arr_5 [i_4 - 1] [(unsigned short)5] [(unsigned short)5] [i_0])));
                            var_23 = ((/* implicit */int) (~(arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 1])));
                        }
                    }
                }
            } 
        } 
    } 
}
