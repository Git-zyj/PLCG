/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10336
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
    var_20 = ((/* implicit */unsigned long long int) (-(-9223372036854775801LL)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 *= max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)26128));
                arr_4 [i_0] [(short)12] = ((/* implicit */signed char) arr_3 [i_1] [(_Bool)1]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), ((unsigned short)65529)));
                    var_23 = ((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_1] [i_0 - 3]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3])) : (((((/* implicit */_Bool) arr_1 [2U] [2U])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [7U]))))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_12 [i_0] [i_1])))) / (((/* implicit */int) (signed char)-125))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [(_Bool)1] [i_4] = ((/* implicit */int) 9223372036854775801LL);
                            var_26 &= ((/* implicit */int) (+(6528356095569287443LL)));
                        }
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (+(arr_10 [i_0 - 2])));
                            var_28 = ((/* implicit */unsigned int) (+(9223372036854775806LL)));
                        }
                        for (unsigned int i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            var_29 = 2008894219;
                            arr_22 [i_7 + 2] [i_4] [16U] [i_4] [i_7] = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_7]);
                        }
                    }
                }
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_8] [i_0] [i_0] [1ULL] [(unsigned short)10] = ((/* implicit */int) (unsigned short)0);
                                arr_30 [i_0] [i_0] [i_0] [i_8] [i_9] [i_8] = ((/* implicit */int) arr_11 [i_0] [i_8 - 1] [i_9] [i_9 + 1] [i_9] [i_10 - 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) (signed char)22);
                                var_31 = ((/* implicit */int) min((var_31), (arr_10 [i_1])));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)160))));
                    var_33 = ((/* implicit */long long int) (unsigned short)26104);
                }
                /* vectorizable */
                for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
                {
                    arr_39 [i_13] [i_13] [i_1] [i_13] = ((/* implicit */signed char) 18446744073709551614ULL);
                    arr_40 [i_0] [i_1] [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0 - 3] [i_1] [i_13]))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_45 [i_13] [i_1] [i_13] [i_1] [i_13] [i_1] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    arr_46 [i_13] [i_13] [16LL] [i_13] = ((/* implicit */signed char) 633017738);
                }
                for (unsigned int i_15 = 4; i_15 < 19; i_15 += 4) 
                {
                    arr_49 [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_15 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_35 -= ((/* implicit */unsigned long long int) (+(max((1775745497U), (((/* implicit */unsigned int) (unsigned short)45709))))));
                        var_36 = arr_7 [i_0] [i_1] [i_15 + 1] [i_15 - 3] [i_16];
                    }
                }
            }
        } 
    } 
}
