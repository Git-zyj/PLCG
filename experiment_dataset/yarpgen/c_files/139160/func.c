/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139160
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
    var_13 = ((/* implicit */signed char) (short)3486);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) -905173237);
                    var_15 = ((/* implicit */signed char) (_Bool)1);
                    var_16 = ((/* implicit */long long int) 4294967295U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                arr_13 [i_3] [i_4] [3ULL] = ((/* implicit */short) (signed char)0);
                /* LoopSeq 3 */
                for (short i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    var_17 = (short)32767;
                    var_18 = ((/* implicit */unsigned char) (short)32754);
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_19 = ((/* implicit */short) 905173236);
                    arr_22 [i_3] [(signed char)0] [i_6] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_20 = ((/* implicit */unsigned short) 12412106431147493316ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) (signed char)-108);
                                arr_29 [(unsigned short)3] [i_7] [i_6] [i_7] [i_8] [(unsigned short)1] [i_8] = ((/* implicit */unsigned long long int) (short)16205);
                                arr_30 [i_3] [i_4] [i_6] [10U] &= ((/* implicit */unsigned char) 6034637642562058330ULL);
                                var_22 = ((/* implicit */short) 7037947547438863679ULL);
                            }
                        } 
                    } 
                    arr_31 [i_3] [i_4] [i_6] [(unsigned short)9] = 9223372036854775807LL;
                }
                for (unsigned int i_9 = 2; i_9 < 7; i_9 += 1) 
                {
                    arr_34 [i_9] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    arr_35 [i_3] [i_4] [i_9] [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            }
        } 
    } 
}
