/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131120
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 = ((short) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3]))));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] [(unsigned char)9] = ((unsigned long long int) ((3144076462U) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)63383))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((/* implicit */int) var_12)))))));
    var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        arr_18 [i_4 + 1] = ((/* implicit */unsigned int) max((((((((/* implicit */int) (short)-12088)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) < (4294967279U)))) - (1))))), (((/* implicit */int) (short)4))));
        /* LoopSeq 1 */
        for (short i_5 = 4; i_5 < 9; i_5 += 1) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_5 + 3]))))) ? (max((((/* implicit */long long int) (short)-32761)), (-5245014938814361684LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_8 [i_5 - 3]))))))));
            var_19 ^= ((/* implicit */unsigned short) (+((+(0LL)))));
        }
        var_20 ^= ((/* implicit */int) var_14);
    }
}
