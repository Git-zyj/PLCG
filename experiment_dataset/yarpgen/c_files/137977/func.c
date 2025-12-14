/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137977
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
    var_10 = var_6;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) arr_2 [3U] [i_2]);
                        arr_12 [24LL] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) (short)32765)) - ((~(-584475810)))));
                        var_12 = ((/* implicit */signed char) (short)-23542);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3]))))) ? ((~(((/* implicit */int) arr_0 [(unsigned short)13] [7ULL])))) : (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_3] [2LL]))));
                            arr_16 [i_4] [i_4] [11LL] [i_2 - 1] [i_4] = ((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4]);
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                } 
            } 
        } 
        var_14 &= ((/* implicit */unsigned char) ((signed char) arr_13 [i_0] [i_0] [10ULL] [(signed char)15] [i_0]));
        var_15 *= ((unsigned int) (unsigned short)28893);
        arr_17 [(unsigned char)11] = var_8;
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_2 [i_0] [(unsigned short)12]))));
    }
    var_17 *= ((/* implicit */unsigned char) var_2);
}
