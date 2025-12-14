/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176538
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
    var_17 = ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) var_5);
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (57344LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7997))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (12767322114656992873ULL)))))));
                                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned short) ((short) var_4)));
                            }
                        } 
                    } 
                    var_20 = ((min((((((/* implicit */_Bool) -6981825610001951982LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7423))) : (-8742530248221259258LL))), (((/* implicit */long long int) arr_3 [i_2 - 3] [i_2])))) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_2 - 3]))));
                    arr_18 [i_1] [i_1] = ((/* implicit */signed char) 18446744073709551592ULL);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */unsigned char) -57345LL);
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)19964))));
                        var_22 = ((/* implicit */unsigned long long int) ((2588538439498692796ULL) >= (((/* implicit */unsigned long long int) 0LL))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [(short)10] [i_7] [i_7] = ((/* implicit */_Bool) (~(((9219457968439335773ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_7])))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_31 [i_8] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((arr_9 [i_0] [i_0] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                            var_23 = ((/* implicit */signed char) arr_30 [i_1] [i_1] [i_5] [i_7] [i_8]);
                            arr_32 [i_0] [0LL] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_29 [i_0] [i_0]);
                        }
                        for (long long int i_9 = 1; i_9 < 20; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((8742530248221259257LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [(unsigned char)0])))))) / (((unsigned long long int) arr_10 [i_0] [i_0] [i_5] [i_5] [i_7] [12]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_5] [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9])) || (arr_30 [i_1] [i_1] [i_1] [i_1] [i_9])));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_7] [i_1] [i_7] [i_0] [i_1] [i_9])) ? (((/* implicit */int) arr_14 [i_9 + 1] [i_0] [i_1] [i_9 + 1] [i_9 + 1] [i_0] [i_9])) : (((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 2]))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0])) ? (8742530248221259257LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6904)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] [i_7])))))));
                    }
                    for (short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_5] [i_1] = ((/* implicit */int) ((short) -6543180467109651280LL));
                        arr_38 [i_1] [i_1] = ((/* implicit */_Bool) 69269232549888LL);
                        arr_39 [i_1] = ((((/* implicit */_Bool) arr_27 [i_1] [i_5] [i_10])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_5])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])));
                    }
                    arr_40 [i_1] [i_5] = ((/* implicit */unsigned char) ((unsigned short) -8742530248221259265LL));
                    var_28 = ((/* implicit */short) var_9);
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [(short)5] [i_1] [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))));
                }
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)16327)), (18446744073709551592ULL)));
            }
        } 
    } 
}
