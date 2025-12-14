/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186653
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
    var_10 = ((/* implicit */unsigned short) 1685362296U);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) (short)-12784);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7299953627285309384LL)) && (((/* implicit */_Bool) 1685362296U))));
                                arr_16 [i_0] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [7] [i_2] = arr_4 [i_1] [i_0] [i_1];
                    arr_18 [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46721)) && (((/* implicit */_Bool) 1685362304U))))), (1685362285U)));
                    var_13 = ((/* implicit */unsigned short) ((((1685362308U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1 - 1] [(unsigned char)4] [i_1 + 1] [i_1 + 1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3367961723U)) ? (2609605012U) : (1685362285U))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_5 [i_5] [i_5] [1U])))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 549755813887ULL)) && (((/* implicit */_Bool) 0)))))))));
        arr_21 [i_5] = ((/* implicit */_Bool) 1685362284U);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) (_Bool)1);
        var_15 = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 2609605017U))));
                                arr_39 [i_9] [i_7] = ((/* implicit */int) arr_15 [i_6] [i_7 - 2] [i_8] [i_9 + 1] [i_7 - 2]);
                                var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_11 = 4; i_11 < 17; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_12] [2] [i_8] = ((((/* implicit */int) arr_13 [i_11 + 1] [i_8 - 2] [i_12] [i_8 + 1] [i_12] [i_7 - 1] [i_6])) >> (((((/* implicit */int) var_8)) - (50926))));
                            var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) arr_20 [i_7])) >= (arr_2 [i_11] [i_12]))));
                        }
                        for (short i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8 + 1] [i_7 + 1]))) < (arr_2 [i_7 - 2] [i_11 - 3])));
                            arr_50 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [5LL] [i_7] [i_8])) && (((/* implicit */_Bool) arr_47 [i_6] [i_11]))))) % ((+(((/* implicit */int) var_8))))));
                            arr_51 [i_6] [i_7 - 2] [i_8 + 1] [i_11] [i_13] = ((/* implicit */int) (_Bool)1);
                            arr_52 [i_6] [i_6] [i_8 + 1] [i_11] [i_13] [i_7 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1685362280U))));
                        }
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1685362274U)));
                        arr_53 [i_6] [16U] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) 219133902);
                    }
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_2))));
}
