/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154219
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = var_0;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)175)) & ((-(((/* implicit */int) (short)248))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((max((var_4), (((/* implicit */unsigned long long int) (unsigned char)0)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) arr_1 [i_2]))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 8388607)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (8388607))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((_Bool) var_7);
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 8388603)) ? (((/* implicit */int) (short)19505)) : (((/* implicit */int) (unsigned short)57344))))));
                                arr_26 [i_7] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_23 [i_7] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_9] [i_9]))))), (min((var_0), (arr_34 [i_9] [i_9] [i_9] [i_9])))))) : (max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9] [i_13 + 4])))))))));
                                var_18 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(arr_30 [i_9] [i_9])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61440))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) ((_Bool) arr_42 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) : (min((((((/* implicit */int) (unsigned short)16)) - (1120656087))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))));
                            arr_45 [i_10] [i_15] = ((/* implicit */unsigned short) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || ((_Bool)0))))));
                            arr_46 [i_15] [i_15] = ((/* implicit */short) var_6);
                            arr_47 [i_9] [i_15] [i_9] [i_15] = ((/* implicit */_Bool) max((min(((unsigned char)155), (((/* implicit */unsigned char) var_7)))), ((unsigned char)74)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_16 = 4; i_16 < 19; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        {
                            arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_20 = ((/* implicit */_Bool) (short)-19490);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        {
                            arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            arr_60 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))), (-791386803)))) ? (arr_41 [i_10] [i_19] [i_10]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_19]))) : (arr_41 [i_19] [i_19] [i_19])))) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (((((/* implicit */_Bool) (short)29943)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_6)))))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((8388603) % (((/* implicit */int) (unsigned short)65519))))))) : (((((/* implicit */_Bool) -822203839)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19505))) : (350936737953042874ULL))));
                            var_22 = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 11; i_20 += 2) 
    {
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_72 [i_20] [i_20] [i_22] [i_22] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_8 [i_20] [i_20] [i_20] [i_20] [i_20])) - ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((18446744073709551595ULL) ^ (308798817390023975ULL))) != (((unsigned long long int) (_Bool)1)))))));
                            arr_73 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)166))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_78 [i_20] [i_20] [i_20] [i_20] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (unsigned char)230)))))))) >= ((+(((((/* implicit */int) var_7)) | (arr_3 [i_20] [i_20] [i_20])))))));
                            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_25])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 11; i_26 += 2) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) var_6);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) -8388607)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))))))) & ((-(arr_41 [i_20] [i_20] [i_20])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_28 = 3; i_28 < 9; i_28 += 4) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        for (int i_30 = 0; i_30 < 11; i_30 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) var_7);
                                arr_89 [i_29] [i_28] [i_29] [i_28] [i_29] [i_29] = ((/* implicit */unsigned short) var_0);
                                var_27 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)255))));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) (unsigned char)152))))) % (((/* implicit */int) (signed char)89)))))));
                                var_29 *= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)23455)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
