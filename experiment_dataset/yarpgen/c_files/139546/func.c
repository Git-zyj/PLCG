/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139546
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((int) var_8));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (0LL) : (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        var_14 = (~(((long long int) arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) arr_5 [i_1] [i_1 + 2]);
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) /* same iter space */
            {
                arr_13 [i_3] [i_3] [i_2 - 1] [i_3] = var_11;
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 1])) << (((((/* implicit */int) arr_9 [i_2 - 1])) - (52052))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) ((unsigned char) (short)25692))) : (((/* implicit */int) arr_9 [i_2 - 1]))));
                }
            }
            for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
            {
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_5 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_5 - 2] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_1 + 2] [i_5 + 1] [i_2 - 1]))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) arr_20 [i_1] [(signed char)3] [i_5] [(_Bool)1] [(unsigned char)13] [(signed char)3]);
                            arr_22 [i_5] [i_2] [i_2] [i_2] [9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5]))))) >> (((((((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_5] [(signed char)13])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_5])) : (((/* implicit */int) (short)25692)))) - (124)))));
                        }
                    } 
                } 
                arr_23 [i_1] [i_5] [i_1] [i_1 + 2] = ((/* implicit */unsigned char) var_6);
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5]))));
            }
            var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [(unsigned char)16] [i_1 - 1] [i_2 - 1] [(unsigned char)16])) ? (((/* implicit */int) arr_12 [6ULL] [i_1 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) (short)25692))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_23 *= ((/* implicit */signed char) ((int) (-(var_3))));
            arr_27 [i_8] [i_8] = ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_24 [i_8])));
        }
        for (int i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) arr_5 [i_1] [i_9]);
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_6 [i_1] [i_1]))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                arr_33 [i_1] [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63316))) : (2264150812U))));
                arr_34 [i_1] [i_1] [(short)14] [10ULL] |= (+(((/* implicit */int) (signed char)3)));
                var_26 = ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_26 [0])) : ((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_10])))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_10] [i_9 + 2] [2U] [i_10])) ? (((/* implicit */int) arr_24 [i_10])) : (((/* implicit */int) (signed char)4))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_1 + 2] [i_9 + 1] [i_9 - 1])) ? (arr_32 [i_1 + 2] [i_9 + 1] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100)))));
                }
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) < (((/* implicit */int) arr_24 [i_10]))));
            }
            for (signed char i_12 = 2; i_12 < 19; i_12 += 3) /* same iter space */
            {
                arr_40 [11LL] [11LL] [i_12] [i_12 + 1] = ((/* implicit */unsigned char) arr_32 [i_1] [i_9] [i_1]);
                var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) (short)25679)) ? (((/* implicit */int) (signed char)-24)) : (arr_15 [i_12 + 1] [i_9] [(unsigned char)2] [i_1 + 1])))));
            }
            for (signed char i_13 = 2; i_13 < 19; i_13 += 3) /* same iter space */
            {
                var_31 &= ((/* implicit */short) 8271134374453230935LL);
                var_32 = ((/* implicit */int) (_Bool)1);
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_3))));
            }
        }
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            arr_47 [i_1 + 2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_14]))))) << (((var_11) + (1064729118))));
            arr_48 [i_1] [(unsigned short)9] = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
        }
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-120)) ? (arr_37 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_1 - 1])))))))));
    }
    var_35 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_12))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((-3044134030923905139LL) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)0))))))));
}
