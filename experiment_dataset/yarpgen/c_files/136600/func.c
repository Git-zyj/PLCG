/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136600
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned char)15))) >> (((min((((/* implicit */long long int) var_7)), (-8619222471286156875LL))) + (8619222471286156898LL)))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-23358), ((short)25196)))))));
    var_16 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [4ULL] [i_1] [16] &= ((/* implicit */unsigned short) 3773904052U);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_0 - 1]));
                        arr_11 [i_0] [i_2] [15U] [(unsigned char)0] = ((/* implicit */_Bool) ((short) (short)-23358));
                        var_18 = (i_2 % 2 == zero) ? (((/* implicit */long long int) ((((arr_7 [i_0 - 2] [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0])))) >> (((((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_0 - 1])) - (46366)))))) : (((/* implicit */long long int) ((((arr_7 [i_0 - 2] [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0])))) >> (((((((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_0 - 1])) - (46366))) + (36114))))));
                    }
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 239549338)) % (((unsigned int) (short)23357))));
                    arr_12 [i_0 + 1] [(unsigned char)10] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58051)) == (((/* implicit */int) (unsigned short)19318))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_13);
    var_21 = ((/* implicit */int) var_10);
}
