/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151416
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1 - 3] = ((/* implicit */unsigned char) 27U);
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    arr_12 [i_2] [i_1] [i_2 - 2] = ((/* implicit */int) 18446744073709551615ULL);
                    arr_13 [i_2] [i_2] [(unsigned char)6] = ((/* implicit */unsigned int) (_Bool)1);
                    var_21 = (_Bool)1;
                }
                for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    arr_18 [i_1] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (signed char)15);
                                var_23 = ((/* implicit */_Bool) (signed char)107);
                                arr_24 [i_5] = ((/* implicit */long long int) 15987899227651892698ULL);
                                arr_25 [i_5] [i_1] [i_1] [i_4] = 406249667U;
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (unsigned short)59954))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */signed char) (_Bool)1);
                                arr_32 [8U] [i_1] [i_6] [i_7 - 1] [(unsigned short)11] = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (short)8257))));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) 524280U))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned short)59954))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_29 -= ((/* implicit */unsigned int) -5647163803405086605LL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                        {
                            var_30 *= ((/* implicit */short) 13LL);
                            arr_37 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (signed char)127);
                        }
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_40 [(_Bool)1] [i_1 - 3] [i_6] [i_9] [i_11] = ((/* implicit */int) (_Bool)1);
                            var_31 = ((/* implicit */unsigned long long int) 4283543764U);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */int) (unsigned short)59954);
                            var_33 *= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_0] [i_1 - 2] [i_1] [(signed char)9] = ((/* implicit */unsigned char) 18380547407963607519ULL);
                            var_34 = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_35 = ((/* implicit */unsigned long long int) 0);
                    }
                }
                arr_47 [i_1 - 1] = (unsigned char)247;
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) var_7);
}
