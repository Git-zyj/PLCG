/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150133
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_0] [i_0]));
        var_19 = ((/* implicit */long long int) ((short) ((unsigned char) (unsigned short)557)));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)64985)) + (((((/* implicit */int) (unsigned short)64978)) ^ (((/* implicit */int) (unsigned short)551))))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) (unsigned short)575));
        var_21 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
        var_22 = ((/* implicit */short) ((long long int) arr_2 [i_1] [i_1]));
        arr_5 [i_1] [i_1] = arr_2 [i_1] [i_1];
    }
    var_23 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_16 [1ULL] [1ULL] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_12 [i_2] [i_5] [i_4] [i_2] [i_2]));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned short) ((int) (unsigned short)64985))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned short) ((unsigned char) arr_18 [10LL] [i_4] [i_6]));
                        arr_20 [i_2] [i_2] [i_3] [i_2] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)557)) <= (((/* implicit */int) (unsigned short)64973))))) ^ (((/* implicit */int) arr_13 [i_2] [i_2] [i_4])))));
                        arr_21 [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)551));
                        var_26 -= ((/* implicit */signed char) (unsigned short)64985);
                    }
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        arr_24 [i_7] [i_3] = ((/* implicit */signed char) arr_10 [(unsigned char)1] [i_4] [(unsigned char)1]);
                        arr_25 [i_2] [i_3] [i_7 - 2] [i_4] [i_2] = ((/* implicit */unsigned short) arr_1 [i_2]);
                    }
                    arr_26 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_11 [i_2] [i_2]);
                }
            } 
        } 
    } 
}
