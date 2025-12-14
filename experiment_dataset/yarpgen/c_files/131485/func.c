/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131485
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((max((-423624269), (171182699))), (((/* implicit */int) arr_1 [i_0]))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(15495481649183447142ULL))))));
                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)95)), (2951262424526104474ULL)));
                var_22 = ((/* implicit */_Bool) ((signed char) var_16));
            }
        } 
    } 
    var_23 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)79)) >> ((((-(((/* implicit */int) (unsigned short)65535)))) + (65541)))));
                                var_25 = ((/* implicit */unsigned char) var_8);
                                var_26 = ((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 2]);
                                var_27 = ((/* implicit */short) arr_1 [15]);
                            }
                            var_28 ^= ((/* implicit */short) (unsigned char)90);
                            var_29 = ((/* implicit */short) arr_6 [0]);
                            arr_16 [i_3 + 1] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) 8042174401069712332LL);
                                arr_26 [i_3 - 2] [i_7] [i_9] = var_3;
                                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((12945248931987641453ULL), (((/* implicit */unsigned long long int) 1483328693))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5809)) ? (max((((/* implicit */int) arr_18 [i_3] [i_8])), (-19240264))) : (((/* implicit */int) arr_17 [i_2] [(unsigned char)4])))))));
                                arr_27 [i_9] [i_9] [i_9] [i_8] [(short)9] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 423624257)) ? (max((var_5), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)49))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 2] [i_3 + 1] [i_3])))));
                            }
                        } 
                    } 
                } 
                arr_28 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-101)), (((((/* implicit */unsigned long long int) 9223372036854775792LL)) - (15495481649183447151ULL)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)105))));
            }
        } 
    } 
}
