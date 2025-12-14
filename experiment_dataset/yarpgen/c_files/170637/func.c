/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170637
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (-(max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_15);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */int) (unsigned char)114);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_15 [i_3] = var_10;
                        arr_16 [i_1 - 1] [i_1] [i_2] [i_1 - 1] [i_3] [i_4] = ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (var_4));
                    }
                } 
            } 
            var_20 ^= (~(((/* implicit */int) (signed char)127)));
        }
        var_21 = ((/* implicit */unsigned short) (~(arr_10 [i_1 - 2] [11U])));
        arr_17 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [(unsigned short)12] [i_1 - 1]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 4; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_28 [i_8] [(unsigned short)4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-6)))) || (((/* implicit */_Bool) 156466472U))));
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_29 [i_5 - 4] [5ULL] [i_5 - 4] [i_8] = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned int) (unsigned short)27364)))));
        arr_30 [i_5 - 1] [(unsigned short)3] = ((/* implicit */unsigned int) (!((_Bool)0)));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_5 - 2] [i_5 - 1]) / (((/* implicit */unsigned long long int) 156466472U))))) ? (((/* implicit */long long int) ((4138500823U) >> (((/* implicit */int) arr_26 [i_5] [i_5 - 3]))))) : (var_11))))));
        var_25 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_5 + 1])) != (var_9)));
    }
    var_26 = ((/* implicit */int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) max((var_19), (((/* implicit */short) var_7))))))))));
}
