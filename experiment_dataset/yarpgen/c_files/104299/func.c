/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104299
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [(unsigned char)7] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_0])) & (arr_0 [i_1 - 1] [i_0])))), ((~((-9223372036854775807LL - 1LL))))));
                var_17 = ((/* implicit */signed char) arr_1 [i_1 + 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        for (short i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) min(((unsigned char)138), (((/* implicit */unsigned char) (signed char)35)))))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_16 [i_3] [i_3 - 1]);
                                var_20 = (+(((((/* implicit */_Bool) ((short) 2066083411U))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_17 [(unsigned short)1]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 65520)) != (arr_8 [i_4 - 1])))))));
                                var_21 = ((/* implicit */short) -11LL);
                                var_22 = ((/* implicit */unsigned char) max((310687178445135162ULL), (((/* implicit */unsigned long long int) (signed char)127))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_19 [i_2] [i_3] [i_2 - 2] [i_2] [i_3 - 2] [i_3] [i_2]))) - (((/* implicit */int) arr_12 [i_3] [i_3] [8LL])))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_23 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) 469762048U))), ((+(var_9)))));
                            /* LoopSeq 2 */
                            for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                            {
                                arr_31 [i_2] [i_3] [i_7] [i_8] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31316))) >= (530595784U))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((-(4136811665U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))))));
                                var_25 = ((/* implicit */long long int) min((arr_4 [i_9 + 2]), (min((arr_4 [i_9 - 1]), (arr_4 [i_9 + 1])))));
                                var_26 ^= ((/* implicit */long long int) arr_0 [i_2 - 1] [i_3]);
                            }
                            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (4503599560261632LL))))));
                                var_28 += ((((unsigned int) (unsigned char)99)) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_2 - 2])))));
                            }
                            var_29 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)97)))) >= (((/* implicit */int) (unsigned char)114))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 ^= ((/* implicit */long long int) var_9);
}
