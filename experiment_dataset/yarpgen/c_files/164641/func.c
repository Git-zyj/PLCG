/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164641
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
    var_12 = ((/* implicit */long long int) var_2);
    var_13 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_14 ^= ((/* implicit */long long int) (short)-24445);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_15 ^= ((/* implicit */short) (-(var_1)));
            arr_10 [i_1] [i_1] [i_1] = ((unsigned long long int) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) == (((((/* implicit */_Bool) (unsigned short)27657)) ? (arr_6 [i_1] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_12 [i_1] = ((/* implicit */signed char) (unsigned char)254);
        }
        var_16 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_2)))))) <= (((/* implicit */int) (short)1160))));
        var_17 ^= ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]);
        var_18 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_7));
    }
    for (int i_3 = 4; i_3 < 16; i_3 += 2) 
    {
        arr_15 [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [i_3]) & (((((/* implicit */int) arr_4 [i_3])) | (((/* implicit */int) (short)32744))))))) ? (((/* implicit */int) (short)32717)) : (((/* implicit */int) var_8))));
        var_19 ^= ((/* implicit */int) (unsigned short)27657);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))) / (var_11)))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_4])) <= (((/* implicit */int) (unsigned short)37879))))) > (((/* implicit */int) ((arr_27 [i_4] [i_7] [i_6] [i_7] [i_7]) <= (((/* implicit */int) (unsigned short)47737)))))));
                        arr_28 [i_7] [(short)10] [(short)10] [i_4] &= ((/* implicit */signed char) (_Bool)1);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-32744)) != (arr_23 [i_4] [i_6] [i_7])))) == (((/* implicit */int) (unsigned short)32036))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_6] [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_4] [i_5] [(unsigned char)8] [i_7 + 1])) : (((/* implicit */int) arr_24 [(short)19] [(short)8] [(short)4] [i_7 + 1]))));
                    }
                } 
            } 
        }
    }
}
