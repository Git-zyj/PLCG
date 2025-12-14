/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159353
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned char)122);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = (unsigned char)31;
        arr_3 [i_0] [(_Bool)1] |= 18446744073709551609ULL;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                arr_11 [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */_Bool) (unsigned char)18);
                arr_12 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)237);
                arr_13 [i_0] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                arr_14 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            }
            arr_15 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            var_11 = ((/* implicit */_Bool) 18446744073709551615ULL);
            var_12 &= (unsigned char)121;
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_13 += ((/* implicit */_Bool) (unsigned char)250);
            arr_22 [i_3 - 2] [i_3] = ((/* implicit */unsigned char) 4ULL);
        }
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            var_14 = (unsigned char)147;
            arr_25 [i_3] = 9081245505628932887ULL;
            arr_26 [i_3] [(_Bool)1] [i_5 - 2] = (_Bool)1;
            var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_16 = ((/* implicit */_Bool) (unsigned char)31);
            var_17 = (_Bool)0;
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)0);
            var_18 = ((/* implicit */unsigned char) 18095915067528554839ULL);
        }
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned char)225))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_38 [i_3] [i_8] = ((/* implicit */unsigned long long int) (unsigned char)255);
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_20 = 13150331855084774404ULL;
                arr_43 [i_3] [i_8] [i_9] = 18095915067528554828ULL;
                arr_44 [i_3] [i_8 - 1] [i_3] = ((/* implicit */_Bool) 274810798080ULL);
            }
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 1) 
            {
                var_21 = ((/* implicit */_Bool) (unsigned char)102);
                arr_47 [i_10 - 2] [i_3] [i_3 - 2] = ((/* implicit */_Bool) 350829006180996777ULL);
                arr_48 [i_10 - 1] [i_3] [i_3] [i_3] = (_Bool)1;
                arr_49 [i_3] [i_3] = (_Bool)1;
                /* LoopSeq 1 */
                for (unsigned char i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) (_Bool)1);
                    var_23 = (unsigned char)154;
                }
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
                var_25 += ((/* implicit */_Bool) (unsigned char)0);
                arr_58 [i_3] [i_3] [i_12 - 1] = ((/* implicit */_Bool) (unsigned char)17);
                arr_59 [i_3] [i_8] [i_3] [i_8] = ((/* implicit */_Bool) (unsigned char)112);
            }
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                {
                    arr_64 [i_13] [i_13] &= ((/* implicit */unsigned char) (_Bool)1);
                    arr_65 [i_3] [i_3] [i_3] = (unsigned char)6;
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                {
                    arr_68 [i_13] [i_8 - 1] [i_8 - 1] [i_8 - 1] |= ((/* implicit */unsigned char) 4289006286329430695ULL);
                    arr_69 [i_3] [i_3] [i_13] [i_15] = 2931696172743956989ULL;
                }
                var_26 = ((/* implicit */_Bool) (unsigned char)18);
                var_27 = ((/* implicit */unsigned long long int) (unsigned char)18);
            }
            var_28 = ((/* implicit */_Bool) (unsigned char)15);
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_29 = (unsigned char)64;
            arr_72 [i_3] [(_Bool)1] [i_16] = 4289006286329430674ULL;
        }
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        arr_76 [i_17] = (_Bool)1;
        var_30 = ((/* implicit */unsigned char) (_Bool)1);
        arr_77 [i_17] = (unsigned char)213;
    }
    var_31 ^= (_Bool)1;
}
