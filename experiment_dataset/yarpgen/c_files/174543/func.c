/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174543
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */int) (short)12729)) + (((/* implicit */int) (short)-12729))));
        var_16 = ((/* implicit */_Bool) arr_1 [i_0 - 2]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_14 [i_0 - 3] [(_Bool)1] [(unsigned short)19] [i_2] = ((/* implicit */signed char) var_4);
                        arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_3] = min((((/* implicit */int) ((unsigned short) max(((short)12729), ((short)-12745))))), ((~(((/* implicit */int) arr_6 [i_0 - 2] [i_1] [(short)15])))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) arr_10 [i_1] [(short)9] [i_1] [i_1]))))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 3] [i_0 - 3])), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [20LL] [i_1] [18LL])) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */_Bool) (short)12743)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_8 [i_0] [0U] [i_1])))))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_1 [i_4])), (((((/* implicit */int) (unsigned char)172)) / (((/* implicit */int) arr_9 [i_4] [2U]))))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) arr_8 [i_4 - 2] [i_4] [i_4 - 2]);
        var_18 = ((/* implicit */int) arr_2 [i_4 - 2]);
    }
    var_19 = ((/* implicit */unsigned short) (-(((unsigned int) var_7))));
}
