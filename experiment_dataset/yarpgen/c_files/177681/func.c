/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177681
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56549))));
            var_16 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))) ? ((~(((/* implicit */int) (signed char)87)))) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_2 [i_1] [i_0]);
                    arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_18 |= ((/* implicit */signed char) ((6) <= (((/* implicit */int) (short)8191))));
                    arr_15 [i_1] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) (~(arr_12 [i_1] [i_3 - 3] [i_3])));
                }
                for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) arr_1 [i_2])));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) > (((/* implicit */int) arr_6 [i_2])))))) <= ((+(arr_12 [i_1] [i_2] [i_4])))));
                }
                var_20 = ((/* implicit */long long int) min((var_20), (arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2])));
                arr_19 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))) | ((+(((/* implicit */int) arr_6 [i_1]))))));
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] = ((/* implicit */unsigned int) (~(-22LL)));
                    arr_24 [i_5] [i_1] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_5 + 3] [i_5] [i_0] [i_5]))));
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_2] [i_5 - 1] [i_5] [i_5])) <= (((unsigned long long int) 11517058560224495959ULL))));
                }
                for (short i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~((+(arr_22 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0]))))))));
                    arr_28 [i_0] [i_1] [i_2] [i_6] &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6]);
                }
            }
            for (signed char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
            {
                arr_31 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7] [i_1] [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0] [i_0]))));
                arr_32 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (signed char)107)))));
            }
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_40 [i_0] [i_10] [i_8] [i_8] = ((/* implicit */long long int) arr_5 [i_9 - 2]);
                            arr_41 [i_1] [i_1] [i_0] [i_8] [i_10] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_8] [i_8] [i_1]))) & (arr_38 [i_9] [i_9 + 4] [i_9] [i_9] [i_9] [i_9 + 3])));
                            arr_42 [i_0] [i_1] [i_8] [i_10] [i_10] = ((/* implicit */short) -2291584122538450963LL);
                            var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) arr_20 [i_0] [i_9 + 1] [i_8] [i_9] [i_10] [i_9]))))));
                        }
                    } 
                } 
                var_24 *= ((short) arr_11 [i_0]);
                var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0])) || (((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_8] [i_0]))));
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) 3409534504U);
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (short)25495)) ? (((/* implicit */int) arr_6 [i_11])) : (((/* implicit */int) arr_6 [i_0])))))));
            }
            for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
            {
                arr_49 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */short) (signed char)73);
                var_28 |= ((/* implicit */short) ((unsigned short) (unsigned char)252));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_0] [i_1])) * (((/* implicit */int) arr_29 [i_12] [i_1]))));
            }
        }
    }
    var_30 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_0))))));
    var_31 -= ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_51 [i_13])) == (max((13435681301513798509ULL), (((/* implicit */unsigned long long int) arr_51 [i_13]))))))) >> (((arr_51 [i_13]) - (3802106087U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) ((long long int) arr_52 [i_14] [i_14] [i_13]));
            arr_55 [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((242885993) ^ (((/* implicit */int) (short)25495)))) << (((((((/* implicit */int) ((signed char) arr_52 [i_13] [i_13] [i_13]))) + (30))) - (5)))));
            arr_56 [i_14] = ((/* implicit */unsigned long long int) (+(arr_53 [i_13])));
        }
    }
}
