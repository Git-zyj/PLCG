/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185030
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
    var_19 = var_3;
    var_20 &= ((/* implicit */_Bool) (unsigned short)58986);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 |= arr_2 [i_0];
        var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
        var_23 *= ((/* implicit */_Bool) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_5 [i_1]))));
        var_25 = ((/* implicit */int) max((var_25), ((~(((/* implicit */int) var_6))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_26 += ((/* implicit */unsigned short) var_18);
                        var_27 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_5)))));
                        var_28 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))) : (((((/* implicit */_Bool) var_1)) ? (9150574464562618069LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                        var_29 = ((/* implicit */short) arr_3 [i_3] [i_3]);
                    }
                } 
            } 
            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_1] [i_1] [(signed char)20])) ? (((/* implicit */int) (unsigned short)11801)) : ((-2147483647 - 1))));
            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_2 - 3] [(short)9] [(short)9])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) var_12);
                        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 3])) ? (((/* implicit */int) arr_5 [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 3]))));
                        var_34 = ((/* implicit */unsigned long long int) (signed char)106);
                    }
                } 
            } 
        }
    }
    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) -6158753047235224219LL))));
}
