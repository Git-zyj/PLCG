/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154736
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
    var_18 = ((/* implicit */int) (((~(((((/* implicit */_Bool) 20U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 940515062)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(2070551410U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((20U) < (4294967276U))))))))));
    var_19 = ((/* implicit */long long int) (signed char)85);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 9223372036854775807LL);
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_3))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [(short)16] [i_3] [i_4] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned int) ((signed char) (unsigned char)115));
                        arr_18 [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((short) (((_Bool)1) && (((/* implicit */_Bool) 4294967275U)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
                        arr_22 [i_3] [i_3] [i_4] [i_6] [i_6] = var_5;
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (4294967263U)))) : (((/* implicit */int) (short)10598))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_3 + 1] [i_3 + 3])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_3 - 1] [i_3 + 4])) : (((/* implicit */int) arr_21 [i_4 - 1] [i_3 + 1] [i_3 - 1]))));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_4 + 1] [i_7]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-4261))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))))) : (((arr_8 [i_3] [i_4]) ^ (var_13)))));
                    }
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_12 [i_4 + 1] [i_4] [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-98)) < (((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}
