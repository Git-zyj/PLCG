/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123114
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
    var_10 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 671654982U);
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) -2139186191);
            arr_6 [i_0] [(short)0] [i_1] = ((/* implicit */unsigned int) (unsigned short)511);
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_11 = ((/* implicit */unsigned int) -1345252133);
                arr_11 [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] = (short)4111;
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) (signed char)-1);
                    var_13 = ((/* implicit */int) 1496353543U);
                }
                for (unsigned char i_5 = 2; i_5 < 7; i_5 += 2) 
                {
                    var_14 = ((/* implicit */short) 290706344);
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_2] [i_3] [(signed char)6] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)10431);
                        var_15 = ((/* implicit */unsigned char) (short)3072);
                        arr_20 [i_0] [i_2] [i_2] [1ULL] [(unsigned char)0] [i_5] [i_6] = ((/* implicit */unsigned long long int) 2199006478336LL);
                        arr_21 [i_6] [i_5] [i_3] [i_0] [i_0] &= ((/* implicit */unsigned int) (signed char)127);
                    }
                    arr_22 [i_5] [i_5 + 1] [i_0 + 2] [i_2] [i_0 + 2] = ((/* implicit */short) 9338242280549245059ULL);
                    var_16 = ((/* implicit */unsigned char) 10319152182247329238ULL);
                    var_17 = ((/* implicit */short) (unsigned char)119);
                }
                for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    arr_27 [i_0] [i_2] [(short)3] [i_7 - 1] |= ((/* implicit */unsigned long long int) 1861010861);
                    var_18 = ((/* implicit */signed char) (unsigned short)1008);
                }
                arr_28 [i_0] [i_0] [7ULL] [i_0] = ((/* implicit */signed char) 11860961770089419292ULL);
            }
            arr_29 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) -1720088397);
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) (unsigned char)186);
            arr_34 [i_8] [i_0] = ((/* implicit */unsigned short) 18446744073709551615ULL);
            var_20 = ((/* implicit */long long int) 83540271U);
        }
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
        {
            arr_37 [i_0] [i_0] [(short)7] = ((/* implicit */signed char) (unsigned char)127);
            var_21 = ((/* implicit */unsigned int) (short)-1);
        }
        arr_38 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)10784);
    }
    var_22 = ((/* implicit */unsigned int) var_7);
    var_23 = ((/* implicit */int) var_5);
}
