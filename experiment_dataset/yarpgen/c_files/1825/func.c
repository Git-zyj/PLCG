/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1825
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)39430), (((/* implicit */unsigned short) (short)-7831))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) (short)-31754)))) : (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((max((arr_2 [i_3 - 1] [i_0 - 2]), (11896427138662354327ULL))), (arr_2 [i_3 - 1] [i_0 + 1]))))));
                                arr_10 [i_0] [i_1] [(unsigned char)22] [i_3 + 1] [i_0] [i_0] [i_3 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                                arr_11 [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_4 [i_0 + 3])), (max((((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])), (arr_0 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_6] [i_6] [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1742977469782315749ULL)) ? (11896427138662354342ULL) : (16703766603927235864ULL))), (((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                        {
                            arr_24 [i_7] [i_5] [i_7] [i_0] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_21 [i_8] [i_6 + 1]));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [(signed char)0] [i_6 - 2] [i_8] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 2] [i_6 + 2] [i_6 + 1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))))))));
                            var_14 = ((/* implicit */short) (~((~(((/* implicit */int) var_3))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_26 [i_0] [i_0] [i_6] [i_7] [i_0] [0LL] [i_0]), (((/* implicit */long long int) arr_15 [i_0 - 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_0 + 1] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) arr_4 [i_5])) | (((/* implicit */int) var_9)))) : (arr_22 [i_0] [i_5] [i_6] [i_6 + 1]))) : (((/* implicit */int) arr_8 [i_0 + 3] [i_0 - 2] [i_6 + 2]))));
                            var_16 = ((/* implicit */long long int) 6550316935047197286ULL);
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            arr_31 [i_5] [i_0] [i_7] [i_10] = ((/* implicit */short) 16703766603927235867ULL);
                            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11896427138662354314ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7)))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (long long int i_12 = 1; i_12 < 21; i_12 += 3) 
                {
                    for (int i_13 = 3; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_15 [i_0 - 1] [i_0 + 2]))) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 2])) : (((arr_15 [i_0 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_15 [i_0 - 2] [i_0 + 3])) : (((/* implicit */int) arr_15 [i_0 - 2] [i_0 + 2]))))));
                            arr_39 [(signed char)10] [i_12] [i_0] [i_11] [i_0] [i_5] [i_0 + 1] = ((/* implicit */int) arr_28 [i_0] [i_12 + 3] [i_11] [i_0 + 3] [i_13 - 2]);
                            arr_40 [i_0] [i_0] [i_0] [i_12 + 1] [i_13] [(short)24] = max((((/* implicit */unsigned long long int) max((((arr_15 [i_0] [i_0]) ? (var_8) : (var_4))), (max((((/* implicit */long long int) var_6)), (var_4)))))), (6550316935047197290ULL));
                            var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_13 + 2])) ? (arr_12 [i_13 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                var_20 = ((/* implicit */int) (signed char)109);
                arr_46 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_42 [i_15])))) : (arr_1 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_15] [i_14] [i_14] [i_0 + 1]))))) >> (((min((arr_36 [15ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)109)))) - (82ULL)))))));
                var_21 = ((/* implicit */long long int) arr_2 [4LL] [i_14]);
            }
            var_22 ^= ((/* implicit */unsigned short) arr_37 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_14]);
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                for (int i_17 = 2; i_17 < 23; i_17 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_18 = 3; i_18 < 23; i_18 += 3) 
                        {
                            arr_54 [i_0] [i_0] = ((/* implicit */long long int) arr_32 [i_0] [(unsigned char)12] [i_0] [i_0 + 2]);
                            var_23 += ((/* implicit */_Bool) var_6);
                        }
                        for (signed char i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                        {
                            arr_58 [i_0] [i_0] [(short)8] [(unsigned short)23] [1ULL] [i_17 + 1] [i_19] = ((((/* implicit */_Bool) (-(var_2)))) ? (max((min((var_5), (arr_55 [24] [(unsigned short)0] [i_16] [i_17 - 1]))), (((/* implicit */unsigned long long int) ((unsigned int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_19] [i_17 + 1]))));
                            arr_59 [(unsigned char)4] [i_0] [(unsigned char)4] [i_17] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)30524)), (((1742977469782315757ULL) / (((/* implicit */unsigned long long int) 6331724409395459702LL))))))) ? ((~(((((((/* implicit */int) (short)-24334)) + (2147483647))) >> (((6550316935047197302ULL) - (6550316935047197277ULL))))))) : (min((arr_52 [i_0 + 1] [13] [i_14] [i_0] [i_16] [i_17] [i_19]), (arr_52 [i_19] [i_19] [i_17] [i_0] [i_0] [i_14] [i_0])))));
                            var_24 *= ((/* implicit */short) arr_0 [i_19]);
                        }
                        for (signed char i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                        {
                            arr_63 [i_0] [i_0] [i_16] [i_17 - 2] [i_20] = ((/* implicit */short) min((min((arr_43 [i_17 - 1] [i_16] [(signed char)0] [i_16]), (arr_43 [i_17 - 2] [i_16] [i_16] [i_14]))), (((((/* implicit */_Bool) arr_43 [i_17 - 1] [i_17] [(signed char)14] [i_17])) ? (arr_43 [i_17 + 1] [i_17] [i_16] [i_16]) : (arr_43 [i_17 + 1] [i_16] [i_16] [i_16])))));
                            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_8 [i_0 - 1] [i_14] [i_0 - 1]), (((/* implicit */unsigned short) arr_30 [i_0] [(_Bool)1] [i_14] [i_16] [i_17 + 1] [i_17] [i_20]))))), (min((((/* implicit */unsigned int) (_Bool)1)), (1023U)))))) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_14] [i_16] [i_17 - 1] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_27 [i_14] [i_14] [i_16] [i_17 + 2] [i_20])))) : (((/* implicit */long long int) ((/* implicit */int) (short)-27923)))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_41 [i_0] [i_0 - 1] [i_16])) ? (arr_41 [i_0] [i_0 + 3] [i_16]) : (arr_41 [i_0 - 2] [i_0 + 2] [i_16])))))));
                            arr_64 [i_0] [i_14] [i_16] [i_0] [i_20] = ((((/* implicit */_Bool) ((signed char) ((unsigned char) arr_35 [i_0] [i_17] [i_20])))) ? (((((/* implicit */_Bool) 9959096433890644770ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27923))) * (1742977469782315749ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0 + 3] [i_14] [i_17 - 2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_14] [i_16] [16] [i_20]))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
                        {
                            var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0 + 3] [i_0 + 3] [4] [i_21]))), (16703766603927235861ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_0] [(unsigned short)16] [(unsigned short)16] [i_21])) % (((/* implicit */int) (unsigned char)30))))), (16703766603927235867ULL))));
                            var_28 = ((/* implicit */short) var_2);
                        }
                        var_29 += ((unsigned short) max((((unsigned int) 16703766603927235888ULL)), (((/* implicit */unsigned int) (_Bool)1))));
                        var_30 = ((/* implicit */short) min((var_30), (max((((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_17 + 1] [i_0 + 1])) || (((/* implicit */_Bool) 2100451045U))))), (((short) (+(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_16] [i_17])))))))));
                    }
                } 
            } 
        }
        for (int i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_7 [i_0] [i_22] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_52 [i_0] [13] [i_22] [i_0] [i_22] [i_22] [i_22])) : (var_2)))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (1742977469782315749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17465))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_22] [i_22] [i_0] [i_22])))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_22] [i_0 + 3] [i_22] [i_22] [i_22] [(signed char)10] [i_22])), (var_6)))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 3] [i_22]))) ^ (((-4626911641052922232LL) - (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [i_22]))))))))))));
        }
        for (int i_23 = 0; i_23 < 25; i_23 += 2) /* same iter space */
        {
            arr_73 [i_23] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
            var_33 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0]))) < (arr_41 [(signed char)4] [i_23] [i_0 + 2]))))))));
        }
    }
    var_34 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((16703766603927235900ULL) != (((/* implicit */unsigned long long int) 2194516264U)))))) : (var_10)))));
}
