/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175053
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_4 + 3] [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (6055669648737432698ULL) : (6055669648737432702ULL))) : (var_7)));
                            var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [0LL] [i_3])) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [i_3] [14LL] [i_2])))));
                            var_12 = ((/* implicit */unsigned short) ((arr_6 [i_3 - 1] [6U] [i_2 + 3] [i_3 - 1]) + (3318770258U)));
                        }
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((6055669648737432722ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        var_13 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 + 1])) : (((/* implicit */int) (short)295))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [16LL] [i_2 + 2] [16LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [(unsigned short)8] [i_3] [i_3 + 1] [(unsigned short)8] [i_2 + 1]))) : (976197038U))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            var_15 &= ((/* implicit */signed char) ((arr_14 [i_5 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)255))));
            var_16 = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0] [(_Bool)1]));
        }
        arr_16 [i_0] = ((/* implicit */unsigned short) ((short) ((_Bool) var_5)));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_26 [i_6] [i_7] [i_8] = 3318770258U;
                    var_17 -= ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (arr_20 [i_7])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) arr_20 [i_10])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [14U])), (var_9))))));
                                arr_34 [i_6] [i_6] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */short) arr_10 [i_8]);
                                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (short)-27796))) ? ((((_Bool)1) ? (2463497284U) : (arr_6 [i_6] [i_7] [i_7] [i_9]))) : (((arr_6 [i_6] [i_10] [i_9] [i_9]) & (arr_6 [i_9] [i_7] [6LL] [i_9])))));
                                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (((_Bool)1) ? (1831470012U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) arr_14 [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((signed char) 6055669648737432702ULL))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (min((((/* implicit */unsigned long long int) (unsigned short)276)), (arr_19 [i_6]))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (_Bool)1);
        var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 787779160U)) ? (((/* implicit */int) (unsigned short)17930)) : (((/* implicit */int) var_5)))) ^ (((/* implicit */int) (unsigned char)175))))), (((((arr_10 [6ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11]))) : (-9154435592837522462LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        var_23 = ((/* implicit */long long int) arr_37 [i_11]);
    }
    var_24 = (short)27795;
    /* LoopSeq 1 */
    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
    {
        var_25 -= ((/* implicit */signed char) min((4778469760381141157LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) + (arr_19 [i_12])))) ? ((+(((/* implicit */int) arr_21 [i_12])))) : ((~(((/* implicit */int) arr_23 [i_12 - 1] [i_12 - 1] [i_12 - 1])))))))));
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_31 [i_13] [i_13] [(signed char)8] [(signed char)8] [i_12] [i_12])) ? (4421086582606829768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13189))))), (arr_30 [i_12] [i_12 + 2] [i_13]))), (((/* implicit */unsigned long long int) (_Bool)1))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-1LL) : (((long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [1U] [i_12] [i_12 + 2])) ? (((/* implicit */int) arr_41 [i_12] [i_12] [i_12 - 1])) : (((/* implicit */int) arr_41 [i_12] [i_12 + 2] [i_12 + 2]))))) : (((((/* implicit */_Bool) max((arr_31 [i_13] [i_13] [i_13] [(unsigned short)8] [i_13] [(unsigned short)8]), (((/* implicit */unsigned short) (short)30726))))) ? (max((arr_37 [i_13]), (((/* implicit */unsigned long long int) arr_21 [0U])))) : (((((/* implicit */_Bool) arr_18 [i_12])) ? (arr_2 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) 4294967295U))))))));
            arr_44 [i_12] [i_12] [i_12] = max((((arr_24 [i_12 + 1]) ^ (arr_24 [i_12 + 1]))), (((/* implicit */unsigned int) (_Bool)1)));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_13] [i_12]))));
                        arr_51 [i_12] [i_12] [i_15] [i_15] [i_15] = ((arr_1 [i_12 + 2]) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_13] [i_12 + 1] [(signed char)13] [i_12])) ? (((arr_6 [i_12] [i_12] [i_15] [i_15]) << (((8388607U) - (8388597U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_12] [i_13] [i_14] [i_15]))))))));
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_12 - 1] [i_12] [i_12]))) : (max((2424355347U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_25 [5U] [i_13] [5U] [i_13]))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
        {
            arr_54 [i_12] [i_12] = ((/* implicit */long long int) var_8);
            var_30 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 4778469760381141157LL)) ? (arr_50 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) : (arr_50 [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_12 + 2]))));
            arr_55 [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)65281)) : (((/* implicit */int) (short)-13165))))))) & (((arr_24 [i_12 - 1]) - (3696182775U)))));
            arr_56 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_4)))) | (((/* implicit */int) arr_23 [i_12] [i_12] [i_16]))))) ? (1831470012U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_12] [(signed char)12] [(signed char)12] [(signed char)12] [i_12])) ? (arr_48 [i_16] [(short)8] [(short)8] [(short)8] [i_12]) : (((/* implicit */int) var_8)))))));
            var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) -1914155711)), (arr_1 [i_12])))) && (((/* implicit */_Bool) arr_42 [10])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_46 [i_12] [i_16] [i_12] [i_12])))), (18446744073709551588ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_36 [i_12] [i_16]), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_36 [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)13188)) : (((/* implicit */int) var_9))))))))));
        }
        var_32 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7808267935427933787LL)))))));
        arr_57 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_41 [i_12] [i_12] [i_12 - 1])))) : (min((arr_3 [i_12 - 1] [i_12 - 1]), (((/* implicit */unsigned int) arr_41 [i_12 + 1] [i_12] [i_12]))))));
    }
    var_33 -= ((/* implicit */signed char) var_5);
    var_34 -= ((/* implicit */int) var_1);
}
