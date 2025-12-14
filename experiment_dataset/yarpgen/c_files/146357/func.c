/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146357
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) var_13))));
        var_16 = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0] [i_0 - 1]));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) (signed char)115);
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) var_6))));
        }
        for (int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_4);
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32979)) ? (-1245947076) : (((/* implicit */int) var_1))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-86))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_17 [i_0] [i_0] [(unsigned short)7] [i_5] = var_7;
                arr_18 [i_0] [i_2 + 1] [i_2] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_2]);
                var_20 = ((/* implicit */unsigned int) (!(arr_10 [i_0] [i_2 + 1] [i_5])));
                arr_19 [i_0] = (!(((/* implicit */_Bool) (unsigned short)41674)));
            }
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) 0));
            arr_23 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((arr_4 [i_0]) - (((((/* implicit */int) arr_6 [i_0 - 1])) - (((/* implicit */int) var_13))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_21 = arr_16 [i_7] [i_0] [i_0];
            arr_26 [i_0] [i_7] = ((/* implicit */_Bool) ((short) var_2));
            arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3434)) ^ (((/* implicit */int) (short)15765))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */_Bool) (unsigned short)0);
        arr_32 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : (-5697813004748076373LL)));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_12))));
}
