/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118752
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 - 3] |= ((/* implicit */short) (unsigned char)206);
        var_12 = ((/* implicit */long long int) var_1);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_13 ^= ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(signed char)9] [i_3]);
                        var_14 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_2 - 3])) ? (arr_5 [i_0] [i_1] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30651)))))));
                        arr_11 [i_3] [i_1] [i_2 + 1] [i_3] = ((/* implicit */long long int) (~(max((36381042), (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_15 += max(((-(((/* implicit */int) arr_3 [i_0 - 2])))), (((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0 - 4])))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = var_3;
        arr_14 [i_4] = ((/* implicit */signed char) 2136018991U);
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-2297))));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (unsigned short)30675))));
                                var_18 += ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)-11237))) >> (((/* implicit */int) ((((/* implicit */int) arr_22 [i_5 + 1] [i_5 - 1] [i_7 - 2] [i_8])) >= (-552318967))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_6 [i_4] [i_4] [i_4] [(unsigned char)3]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                    {
                        var_20 |= ((/* implicit */short) -36381055);
                        var_21 = ((/* implicit */long long int) var_7);
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 3) 
                        {
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_19 [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_17 [i_4] [i_4])));
                            var_23 ^= ((/* implicit */unsigned short) arr_26 [i_5] [i_9] [i_10 - 1]);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((signed char) ((_Bool) var_4))))));
                            arr_31 [i_4] [i_4] [i_6] [(unsigned char)0] [(unsigned char)12] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (1949849092) : (((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */int) (unsigned short)59581)) : (((/* implicit */int) ((unsigned char) (unsigned char)87)))))), (((3159831641U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 - 2])))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25883))) >= (arr_6 [i_4] [i_5] [i_9] [i_11])))) != (((/* implicit */int) arr_20 [i_11]))))))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-11237)) && (((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5] [i_4] [i_5 - 1]))))) >= (((/* implicit */int) var_5))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((-1011193473) <= (1011193464))))) >= ((-(((long long int) arr_27 [i_4] [i_6] [i_9])))))))));
                            var_28 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (3159831639U)))) ? (arr_32 [i_4] [i_4] [i_5] [i_6] [i_9] [i_12]) : (arr_32 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5]));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_13 = 4; i_13 < 13; i_13 += 2) 
                        {
                            var_29 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-23623))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (arr_37 [i_4] [i_5 - 2] [i_6] [(unsigned char)4] [i_13] [i_13]) : (3366381790U)))) | (-1692449212259098959LL)))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (short)-5374))));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                    {
                        var_31 += ((/* implicit */signed char) arr_25 [2ULL] [i_5] [i_5] [i_5] [i_5]);
                        arr_47 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */short) var_10);
                        var_32 ^= ((/* implicit */unsigned short) ((7293616823026537398LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
                        var_33 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)30675)) : (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) % (8278065401204157004LL))) : (((/* implicit */long long int) arr_6 [i_4] [i_4] [i_6] [i_14]))))));
                    }
                    var_34 += ((/* implicit */unsigned long long int) (+(arr_37 [i_4] [i_4] [i_4] [i_5 - 2] [i_5] [i_6])));
                }
            } 
        } 
        arr_48 [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (unsigned short)65525))));
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_2))));
        /* LoopSeq 2 */
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (short i_18 = 1; i_18 < 12; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 12; i_19 += 3) 
                    {
                        {
                            arr_62 [i_15] [i_16] [i_16] [i_17] [i_18 + 1] [i_18 + 2] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)243))));
                            var_37 = ((/* implicit */unsigned short) var_7);
                            var_38 *= ((long long int) (+(((/* implicit */int) arr_28 [(signed char)8] [i_16] [i_16] [5U]))));
                        }
                    } 
                } 
                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) arr_26 [i_16] [i_16] [i_17])), (6ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_15] [i_16] [i_16] [i_17]))) : (min((((/* implicit */long long int) arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), ((~(arr_32 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
                arr_63 [i_16] [i_16] [(unsigned short)8] = ((/* implicit */_Bool) 1963869158);
            }
            for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_50 [i_15])) ? (81488241) : (arr_50 [i_16])))));
                var_41 = ((/* implicit */short) var_6);
                arr_67 [i_15] [i_15] [i_16] [i_20] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_20 [i_20])) || (((/* implicit */_Bool) arr_58 [i_15] [i_15] [i_16] [i_20] [i_20] [i_20])))), (((_Bool) (unsigned char)16))));
            }
            arr_68 [i_15] [i_15] [i_16] |= 2295857948U;
        }
        for (short i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) 
            {
                for (unsigned char i_23 = 0; i_23 < 14; i_23 += 2) 
                {
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)243)) & (((/* implicit */int) (unsigned char)252))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_24 = 3; i_24 < 13; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)35))))));
                            var_44 = -5872768821531881115LL;
                            var_45 += ((/* implicit */short) 137438953471ULL);
                        }
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned char) ((_Bool) arr_64 [i_15] [i_21] [i_21]));
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) var_5))));
        }
        var_48 &= ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) 8278065401204156994LL))), (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)26))))));
        /* LoopNest 2 */
        for (unsigned char i_25 = 3; i_25 < 13; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 14; i_26 += 2) 
            {
                {
                    var_49 = ((/* implicit */_Bool) max((var_49), (((((/* implicit */_Bool) arr_82 [i_25 - 2] [i_25] [i_25 - 3])) && (((/* implicit */_Bool) max((arr_82 [i_25 + 1] [i_25 - 1] [i_25 - 1]), (arr_82 [i_25 - 2] [(short)2] [i_25 - 2]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_27 = 2; i_27 < 12; i_27 += 2) 
                    {
                        var_50 *= ((/* implicit */int) var_6);
                        arr_86 [i_15] [i_25] = ((/* implicit */unsigned char) arr_24 [11] [i_25] [(unsigned short)6]);
                        var_51 &= -7505435248573469321LL;
                    }
                    arr_87 [i_15] [i_15] [i_25] [i_26] = ((/* implicit */int) arr_74 [i_25] [i_25]);
                }
            } 
        } 
    }
    var_52 += ((/* implicit */unsigned char) var_1);
}
