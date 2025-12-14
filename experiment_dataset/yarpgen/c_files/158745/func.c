/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158745
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
    var_12 += ((/* implicit */unsigned int) (+(var_11)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned short) (((+(var_1))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0])))));
        var_14 -= ((/* implicit */signed char) var_0);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) 2038742716U);
                    arr_10 [i_0 - 2] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_15 += ((/* implicit */_Bool) (-(arr_6 [i_0] [i_3] [i_4] [i_0])));
                    var_16 = ((/* implicit */short) (_Bool)0);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        var_17 ^= ((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5 - 2] [i_5]);
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_12 [i_5]);
        var_18 = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_24 [i_5] [i_6] = ((/* implicit */unsigned int) var_11);
            arr_25 [i_5] [i_6] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_2 [(_Bool)1] [i_6] [i_6]))))));
        }
    }
    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            arr_31 [i_7] [i_8] = ((/* implicit */long long int) var_7);
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            arr_42 [i_7] [(unsigned short)6] = ((/* implicit */_Bool) var_0);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_11))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_20 -= arr_2 [i_7] [(unsigned short)5] [i_9];
                            arr_45 [i_12] [i_10] [i_7] [(_Bool)1] [i_7] = ((/* implicit */short) var_4);
                        }
                        var_21 += ((/* implicit */long long int) (unsigned short)60148);
                        var_22 ^= ((/* implicit */short) (-((~(((/* implicit */int) var_5))))));
                        var_23 ^= var_4;
                    }
                } 
            } 
            arr_46 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) var_11);
        }
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~((+((+(((/* implicit */int) arr_11 [i_7] [i_13])))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_22 [i_13] [i_15]))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(1169995338U))))));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_27 += ((/* implicit */unsigned char) (-((-(var_11)))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    for (unsigned short i_18 = 4; i_18 < 10; i_18 += 2) 
                    {
                        {
                            arr_63 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_44 [2] [i_7] [2] [i_17] [(unsigned short)9]))))));
                            arr_64 [i_7] [i_17] [i_17] [i_16] [i_13] [i_7] = ((/* implicit */signed char) arr_62 [i_18] [i_7] [i_16] [i_7] [i_7]);
                        }
                    } 
                } 
                arr_65 [2LL] [i_16] &= ((/* implicit */int) var_9);
                var_28 += ((/* implicit */signed char) ((((((/* implicit */int) (short)-12978)) + (2147483647))) << (((7904577048231280473LL) - (7904577048231280473LL)))));
                var_29 = ((/* implicit */signed char) (short)3581);
            }
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17867))) - ((-(3991971998U))))))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned short i_20 = 1; i_20 < 10; i_20 += 3) 
                {
                    {
                        var_31 = ((/* implicit */int) 8974357441577455751LL);
                        var_32 ^= ((/* implicit */unsigned short) (+(3124971951U)));
                        arr_70 [i_7] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_5))));
    }
    /* LoopNest 3 */
    for (unsigned int i_21 = 1; i_21 < 8; i_21 += 4) 
    {
        for (long long int i_22 = 0; i_22 < 11; i_22 += 4) 
        {
            for (int i_23 = 0; i_23 < 11; i_23 += 4) 
            {
                {
                    arr_80 [i_21 + 1] [(unsigned char)8] [i_23] [i_22] = ((/* implicit */unsigned char) ((arr_73 [i_21]) / (((/* implicit */int) (unsigned short)37555))));
                    var_34 = ((/* implicit */short) arr_77 [i_23] [i_23] [i_22] [i_21]);
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        for (unsigned long long int i_25 = 1; i_25 < 8; i_25 += 2) 
                        {
                            {
                                arr_86 [8LL] [i_22] [9LL] [9LL] [i_22] = ((/* implicit */long long int) var_11);
                                arr_87 [4U] [i_22] [i_23] = ((/* implicit */short) var_0);
                                arr_88 [(short)4] [i_22] [(short)4] [i_22] [i_22] = (short)9443;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_26 = 3; i_26 < 10; i_26 += 4) 
                    {
                        for (signed char i_27 = 4; i_27 < 9; i_27 += 3) 
                        {
                            {
                                arr_94 [4] [i_22] [i_26] [(unsigned char)10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_21 + 1] [i_21] [3] [i_21])) <= (((/* implicit */int) var_2))));
                                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((((/* implicit */int) arr_14 [i_21] [i_23] [i_26] [i_27])) != (var_11))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
}
