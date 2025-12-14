/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186351
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_2] [9ULL] [(signed char)3] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_2] [i_2] [(unsigned char)1] [i_3] [i_0]));
                        var_13 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_3])) : (arr_2 [i_1]))));
                        arr_12 [8U] [i_0] [i_2] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_1 [(unsigned short)5])));
                    }
                } 
            } 
            arr_13 [(signed char)10] [i_0] [i_0] = ((arr_9 [i_0] [i_0] [i_0] [7U] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_1] [4LL] [i_6] [i_6] [i_0] [i_6] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            arr_23 [i_0] [i_0] [i_5] [i_0] = var_11;
                            arr_24 [i_0] = ((/* implicit */long long int) 3693483056U);
                            arr_25 [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [(signed char)9] [9ULL] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_8]))));
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            arr_34 [i_0] [i_1] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) 2556243357203681381LL);
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (_Bool)1))));
                        }
                        arr_35 [0ULL] [0ULL] |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [10ULL]))));
                        var_17 = ((/* implicit */unsigned long long int) arr_21 [i_0]);
                        arr_36 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_11] [(signed char)4]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_18 = ((/* implicit */long long int) var_7);
                arr_43 [i_0] [i_0] [i_0] = ((var_1) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_42 [i_0] [i_11] [(signed char)11])) : (((/* implicit */int) arr_7 [i_12] [i_0] [i_0]))))) : (arr_28 [0ULL] [i_11] [i_0] [i_12] [i_0] [i_11]));
                arr_44 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
            }
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_40 [i_0] [i_11] [i_13]));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (var_11) : ((-(((/* implicit */int) arr_51 [i_15] [i_0] [5ULL] [i_11] [i_0]))))))));
                            var_20 = ((/* implicit */signed char) var_1);
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_15])))));
                            var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((567816762U) < (3509608690U))))));
                arr_54 [i_11] [(short)6] [(signed char)6] [i_11] |= ((/* implicit */unsigned long long int) var_1);
            }
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                for (short i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    {
                        arr_66 [i_0] [i_17] [i_17] [(unsigned char)0] [i_16] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) | (785358606U)));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_0] [i_16] [i_17])) - (((/* implicit */int) arr_61 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_33 [(unsigned char)6] [i_0] [i_17] [0ULL])) : (arr_40 [7LL] [i_16] [i_16]));
                        arr_67 [i_0] [i_0] [(unsigned short)6] [i_0] &= ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
            var_25 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
        }
        for (short i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            arr_82 [i_0] [i_19] [5ULL] [i_19] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_22] [i_20] [i_22])) ? (((/* implicit */int) arr_57 [i_0] [i_20] [i_22])) : (((/* implicit */int) var_2))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(3509608663U))))));
                            arr_83 [i_0] [i_0] [7] [i_19] [i_0] [i_21] [8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) / (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14091172931120157054ULL)))) || (((/* implicit */_Bool) ((int) var_3))));
                        arr_88 [(unsigned char)8] [(signed char)6] [i_23] [(unsigned char)8] [8U] |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5))))));
                    }
                } 
            } 
        }
        var_29 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 12; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 3) 
            {
                {
                    var_30 += ((/* implicit */long long int) var_0);
                    var_31 = ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && ((_Bool)1))))));
                }
            } 
        } 
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
    {
        arr_98 [i_27] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) 3509608690U)) ? (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) arr_0 [i_27]))))) : (min((var_12), (((/* implicit */long long int) 785358606U))))))));
        var_32 -= ((/* implicit */unsigned short) (_Bool)1);
        arr_99 [i_27] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-102)) % (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
    {
        arr_103 [i_28] [i_28] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (short i_29 = 0; i_29 < 12; i_29 += 1) 
        {
            for (int i_30 = 0; i_30 < 12; i_30 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_31 = 0; i_31 < 12; i_31 += 3) 
                    {
                        arr_112 [i_28] [i_28] [i_28] [i_28] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(max((arr_33 [i_28] [i_28] [i_30] [i_31]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        arr_113 [i_30] |= ((/* implicit */signed char) 3509608698U);
                        var_33 *= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (var_11) : (((/* implicit */int) (signed char)-63))))), ((+(arr_28 [i_28] [i_28] [i_30] [i_28] [10U] [i_28]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_114 [i_28] [i_28] [i_28] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (_Bool)1)), (arr_100 [i_30]))) & (arr_100 [i_28])));
                    arr_115 [i_28] [i_28] [i_30] [i_28] = ((/* implicit */_Bool) var_8);
                    arr_116 [i_28] [9] [6U] [i_28] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1575179756)) ? (((/* implicit */long long int) 878706252)) : (1963787760022289996LL)))) ? (((/* implicit */unsigned int) (~((~(-878706252)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_28] [i_28] [i_28] [i_28] [i_28]))) | (41553734U))));
                    arr_117 [10ULL] [i_28] [i_30] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_28] [i_29] [i_30])) ? (arr_21 [i_30]) : (var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1)))))) / (((unsigned long long int) arr_86 [(_Bool)1] [(_Bool)1] [i_30]))))));
                }
            } 
        } 
        arr_118 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_28])) + (2147483647))) >> (((((/* implicit */int) var_8)) - (45369)))))) ? (((/* implicit */int) min((arr_108 [i_28] [6] [i_28]), (arr_108 [i_28] [i_28] [(unsigned char)10])))) : (((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_7)) : (var_11)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_32 = 0; i_32 < 23; i_32 += 3) 
    {
        for (signed char i_33 = 0; i_33 < 23; i_33 += 3) 
        {
            for (int i_34 = 0; i_34 < 23; i_34 += 3) 
            {
                {
                    arr_128 [i_32] [i_33] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 23; i_35 += 2) 
                    {
                        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                        {
                            {
                                var_34 &= var_0;
                                var_35 -= ((/* implicit */unsigned int) (((_Bool)1) && ((_Bool)1)));
                                arr_135 [i_32] [i_33] [i_34] [i_33] [19] = ((/* implicit */unsigned char) 3509608689U);
                                arr_136 [i_33] [i_33] [i_34] [i_33] [1U] = ((/* implicit */signed char) arr_130 [(signed char)6] [i_32] [(unsigned char)20] [(signed char)6] [i_36] [(short)10]);
                                arr_137 [i_32] [i_33] [14LL] [i_34] [i_33] [i_35] &= ((/* implicit */unsigned long long int) arr_126 [i_32] [i_32] [i_32]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_37 = 0; i_37 < 23; i_37 += 3) 
                    {
                        for (unsigned int i_38 = 0; i_38 < 23; i_38 += 2) 
                        {
                            {
                                arr_146 [i_32] [11LL] [i_34] [(signed char)3] [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_125 [i_38] [i_38] [i_38] [i_38]))))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_125 [i_37] [i_34] [i_32] [i_32])))))));
                                arr_147 [i_33] [18U] [i_33] [i_37] [i_38] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (signed char)-63)))));
                                arr_148 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32] [i_33] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) min((var_10), (((/* implicit */unsigned long long int) var_1))))))));
                                arr_149 [i_32] [i_33] [i_33] [i_32] [i_38] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(-878706252))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
