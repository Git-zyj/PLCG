/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16357
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
    var_20 &= ((/* implicit */unsigned char) min((((unsigned long long int) ((0ULL) <= (((/* implicit */unsigned long long int) var_16))))), (6141641520455007975ULL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_21 -= arr_1 [i_0];
        var_22 = ((/* implicit */int) 3560948774586334549LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            var_23 = (-(((/* implicit */int) ((((/* implicit */int) max(((short)32767), (arr_4 [i_2] [i_2] [i_1])))) > (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            arr_6 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))) : (arr_3 [i_1])));
        }
        for (signed char i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            var_24 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
            var_25 = ((/* implicit */long long int) ((short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 7854769220070080798LL)) : (0ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_3] [i_1]))))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_26 ^= ((/* implicit */unsigned int) arr_12 [i_1] [i_3] [i_1] [i_4] [i_5] [i_5]);
                    var_27 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_4] [i_4 - 1] [i_5] [i_5])) ? (arr_12 [i_3] [i_3] [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_12 [i_1] [i_1] [i_1] [i_4 - 1] [i_4] [i_5]))), (((((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_4] [i_4 - 1] [i_4 + 3] [i_4])) ? (arr_12 [i_4] [i_4] [i_4] [i_4 + 2] [i_4] [i_5]) : (arr_12 [i_3] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))));
                    var_28 = ((/* implicit */unsigned int) ((long long int) ((int) arr_13 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])));
                    var_29 += ((/* implicit */unsigned short) arr_8 [i_1] [i_4] [i_5]);
                }
                for (int i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    var_30 ^= max((((unsigned long long int) max(((unsigned char)140), (((/* implicit */unsigned char) (signed char)121))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) (unsigned char)6))))), (-4560025123960610172LL)))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) -3878185485921538810LL))));
                    var_32 = ((/* implicit */signed char) ((unsigned char) (unsigned char)1));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 1193242499375192597LL))));
                }
                arr_19 [i_1] [i_1] [i_3 + 1] [i_4 + 1] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) (unsigned char)140)) ? (arr_0 [i_1]) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_3] [i_1]))))), (((/* implicit */int) max((arr_11 [i_4 + 1] [i_4] [i_4]), (arr_11 [i_4 + 1] [i_4 + 1] [i_4]))))));
                var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) % (((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 3] [i_3 - 1] [i_3 + 1] [i_1] [i_1]))))));
                var_35 = ((/* implicit */long long int) 25ULL);
                /* LoopNest 2 */
                for (unsigned int i_7 = 4; i_7 < 23; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 24; i_8 += 2) 
                    {
                        {
                            arr_24 [i_7] = ((/* implicit */unsigned char) (~(((unsigned int) arr_14 [i_8] [i_8 - 2] [i_7] [i_7 - 2]))));
                            var_36 = ((/* implicit */signed char) arr_12 [i_1] [i_3] [i_3 + 1] [i_4 + 3] [i_7] [i_8 + 1]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 2) 
            {
                var_37 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (12998140386958331800ULL))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7704825407516252591ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(arr_26 [i_1])))) : (((unsigned long long int) (unsigned short)38878))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 24; i_10 += 3) 
                {
                    var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7854769220070080778LL)) || (((/* implicit */_Bool) (short)-14777)))))) * (max((arr_5 [i_3]), (arr_5 [i_1])))));
                    var_39 &= ((/* implicit */int) var_18);
                }
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 3) 
        {
            var_40 |= ((/* implicit */unsigned long long int) max((((int) (short)27115)), (((/* implicit */int) (unsigned char)173))));
            var_41 = ((/* implicit */long long int) (unsigned short)4033);
            var_42 = ((/* implicit */short) (unsigned char)115);
            var_43 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) min((var_1), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])))))));
        }
        var_44 *= ((/* implicit */unsigned long long int) max((arr_7 [i_1]), (((unsigned char) arr_7 [i_1]))));
        var_45 = ((/* implicit */int) (short)-1);
    }
    for (int i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_46 += ((/* implicit */short) ((((/* implicit */_Bool) 7006538864056387318LL)) ? (((/* implicit */unsigned long long int) ((long long int) (short)-2713))) : (arr_3 [i_12])));
        var_47 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)18444)) ^ (((/* implicit */int) (unsigned char)66))))), (((((/* implicit */_Bool) (short)28726)) ? (((((/* implicit */_Bool) arr_8 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27115))) : (arr_30 [i_12] [i_12] [i_12] [i_12]))) : (((/* implicit */unsigned int) var_10))))));
    }
}
