/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136428
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), ((~(1702841574518892786LL)))));
    var_19 = ((/* implicit */int) var_16);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-5110997796793717515LL)))) : (((((/* implicit */unsigned long long int) 1702841574518892780LL)) + (var_4))))) >> (((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-5110997796793717515LL)))) : (((((/* implicit */unsigned long long int) 1702841574518892780LL)) + (var_4))))) >> (((((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) - (190))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_1);
    }
    for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1 + 1] = ((/* implicit */short) (unsigned short)4200);
        var_20 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1702841574518892792LL)) ? (var_8) : (var_10))))))), (((unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1 - 3])), (arr_4 [i_1]))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((2064384) - (2064368)))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 3]);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (unsigned char)112))))) ? (min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) 1702841574518892799LL)) ? (((/* implicit */long long int) 2064362)) : (-1702841574518892787LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1702841574518892786LL))))));
                        var_22 -= ((/* implicit */short) ((((arr_15 [i_4] [i_4 + 1] [i_3] [i_2]) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) (short)(-32767 - 1))))) + (32781)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_1 - 3] [i_1 - 3] [i_3] [i_4 + 1] [i_1 - 3] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) var_5)))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) > (3099762422U))))));
                            arr_19 [i_1 - 2] [i_2 - 1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((unsigned short) var_13));
                        }
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (signed char)-49)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_2 - 1] [i_2 - 1])), (arr_15 [i_2 - 1] [i_1] [i_3] [i_1 - 1])))))))));
                            var_25 = ((/* implicit */unsigned long long int) var_15);
                            var_26 = ((/* implicit */unsigned char) arr_20 [i_1]);
                            var_27 -= ((/* implicit */signed char) arr_23 [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_4 + 1] [i_4 - 1]);
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_28 [i_1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_1 + 1])) + (32148)))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_4)));
            /* LoopSeq 4 */
            for (int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
            {
                var_28 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)22328))))))));
                arr_31 [i_8] = ((/* implicit */unsigned char) ((_Bool) var_16));
            }
            for (int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
            {
                arr_35 [i_1 + 1] = ((/* implicit */unsigned int) arr_6 [i_7]);
                arr_36 [i_7] [i_9] |= ((/* implicit */short) arr_23 [i_1 - 2] [i_1 - 2] [i_9] [i_7] [i_7]);
                arr_37 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) 1702841574518892798LL);
            }
            for (int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
            {
                arr_40 [i_10] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)32762)), (-8)))) ? (min((((/* implicit */long long int) (_Bool)0)), (1702841574518892791LL))) : (1702841574518892786LL))));
                arr_41 [i_10] [i_10] [i_1] = ((/* implicit */long long int) arr_39 [i_1 - 1] [i_1] [i_10] [i_1 - 2]);
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1 - 1] [i_1])))));
                var_30 = (-(((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1])));
                arr_44 [i_1] [i_7] [i_7] [i_11] = ((/* implicit */_Bool) (~(arr_6 [i_1 - 2])));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (short i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_31 -= ((/* implicit */int) ((short) arr_46 [i_1]));
                            var_32 = ((/* implicit */_Bool) arr_27 [i_1]);
                        }
                    } 
                } 
            }
            var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_4))))));
        }
        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            arr_53 [i_14] [i_1 - 3] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-1702841574518892791LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_14] [i_1] [i_1]))))))))), (((long long int) ((var_16) + (((/* implicit */unsigned long long int) var_8)))))));
            arr_54 [i_1 - 3] [i_1 - 3] [i_14] = ((/* implicit */short) ((int) arr_34 [i_1 - 1] [i_1 - 1]));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            {
                arr_59 [i_15] [i_15] = ((/* implicit */unsigned char) (~(min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (+(var_0))))))));
                arr_60 [i_15] = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_1)))))), (((unsigned long long int) var_10)));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) (+(var_4)));
}
