/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143968
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
    var_14 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_12)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))) : (((((/* implicit */_Bool) arr_1 [5U] [i_0 + 1])) ? (18407894921593568793ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((_Bool) var_0)) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_7);
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                        {
                            var_17 &= ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] [i_5] [i_5]);
                            var_18 = ((/* implicit */unsigned char) (+(var_9)));
                        }
                        var_19 *= ((33546240U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 2) 
                    {
                        var_20 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28816))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28823))) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((-(4294967287U)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_13 [i_3 - 1] [(short)0] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) max((min((4261421056U), (((/* implicit */unsigned int) -781740060)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_16 [i_6 - 3] [i_3] [(_Bool)1] [i_2] [i_3] [i_3] [i_1])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28836))) / (7970278151338012717ULL)))));
                        arr_19 [i_2] [i_1] [i_1] [i_3] [i_3] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)65332))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_3] [i_3] = (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_10 [i_2])));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28840)) ? (((/* implicit */int) (short)2926)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_12)) : (arr_13 [16LL] [i_7 - 1] [i_7] [i_7])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) (unsigned char)103)));
                        arr_25 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 15U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_24 = 4294967295U;
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_25 &= ((/* implicit */unsigned short) (_Bool)1);
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) ^ (-1LL))))));
                            var_27 = ((/* implicit */long long int) ((unsigned char) arr_4 [i_9 - 2]));
                            var_28 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)2926)))) % (arr_17 [i_1] [14LL] [i_1] [i_1] [i_1] [i_1])));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) var_13);
                            arr_35 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_24 [i_3]));
                        }
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_12] [i_9] [i_2])))))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_31 [i_3] [i_3 - 1] [i_3 + 1] [i_9] [i_3] [i_3 + 1] [i_9 + 1]))));
                        }
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) arr_36 [i_1] [i_2] [i_3] [i_2] [i_13]);
                            var_33 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))));
                            arr_42 [i_1] [i_3] [i_1] [i_9 + 2] [i_9 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (4065315950U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_13])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) & (5456639578087727884ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7077)))));
                            var_34 = ((/* implicit */signed char) 4261421056U);
                            var_35 = ((/* implicit */unsigned long long int) (short)-28807);
                        }
                        var_36 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)2934))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 19; i_14 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) 23LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) 33546240U)))))) : (((unsigned long long int) (!(((/* implicit */_Bool) -5LL)))))));
                        var_38 = ((((/* implicit */_Bool) ((unsigned long long int) ((10476465922371538898ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) ? (((arr_21 [i_2] [i_3 - 1] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1])) && (((/* implicit */_Bool) arr_34 [i_1] [i_2] [(unsigned char)1] [i_3] [(unsigned char)1] [i_14])))))));
                        arr_45 [i_1] [i_3] = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_3 + 1] [i_14]);
                        var_39 = ((/* implicit */short) (unsigned short)39826);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_15 = 2; i_15 < 19; i_15 += 4) 
    {
        arr_48 [i_15 - 2] [i_15 - 2] = arr_11 [i_15];
        arr_49 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (67108863U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_50 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_15 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) : (4294967278U)));
    }
}
