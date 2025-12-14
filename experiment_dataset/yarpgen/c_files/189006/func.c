/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189006
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
    var_16 ^= ((/* implicit */unsigned short) ((short) (unsigned short)53649));
    var_17 ^= ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [(signed char)6] = ((/* implicit */short) var_11);
        var_18 &= ((/* implicit */unsigned char) var_12);
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_19 = arr_4 [i_0] [i_1];
            var_20 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) (unsigned short)11889)));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                arr_14 [i_3] [i_2] [i_0 - 1] &= ((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))));
                var_21 = ((/* implicit */short) (unsigned short)53653);
            }
            arr_15 [i_0] = ((/* implicit */unsigned char) ((5304883044310873827ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
        }
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            arr_19 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_4));
            var_22 += ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)11883));
            arr_20 [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_2 [i_4])))));
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_24 [i_0] [i_5] = ((/* implicit */unsigned char) ((((int) 11102948114841565221ULL)) >> (((((/* implicit */int) ((short) 6001043041102729863ULL))) - (4713)))));
            arr_25 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) (unsigned short)17309)))))));
        }
    }
}
