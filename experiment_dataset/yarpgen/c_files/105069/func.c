/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105069
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
    var_10 = ((/* implicit */unsigned char) 17229367344512028346ULL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (short)22575)) : (((/* implicit */int) (short)22584)))) : (((/* implicit */int) (unsigned short)992))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)181))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)22560))))) : ((+(1152903912420802560LL)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */int) max(((short)22554), (((/* implicit */short) (unsigned char)127))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (-2062860794163074815LL)));
                            arr_15 [i_1] [i_1] [i_1] [14LL] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)249))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)30)) ? (17229367344512028342ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))));
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22560)) ? (((/* implicit */int) (short)22558)) : (((/* implicit */int) (unsigned short)12))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) max(((unsigned char)138), (((unsigned char) arr_17 [i_6] [i_6] [i_6]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) >= (((/* implicit */int) (short)-22528)))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) + (((((/* implicit */_Bool) (unsigned char)134)) ? (17229367344512028360ULL) : (((/* implicit */unsigned long long int) -1LL))))))))));
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_6] [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_12 [i_8] [i_7] [i_6] [i_5] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_5] [i_0] [i_7] [i_7])))) ^ (((((/* implicit */_Bool) arr_8 [i_0] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (((/* implicit */int) (unsigned short)6370))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [(unsigned short)18] [i_9] [i_9] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_9] [i_0] [i_0]))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_8))));
        }
        arr_32 [(unsigned char)2] [i_0] &= ((/* implicit */long long int) min((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])), ((~(((/* implicit */int) (unsigned short)30088))))));
        arr_33 [i_0] = ((unsigned short) ((signed char) arr_30 [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    for (long long int i_10 = 1; i_10 < 20; i_10 += 3) 
    {
        arr_38 [(signed char)18] [i_10 + 1] |= arr_35 [i_10 + 2];
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_18 = ((/* implicit */short) arr_35 [i_10 + 2]);
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            arr_48 [i_10] [i_11] [i_14] [(signed char)17] [i_13] [(unsigned char)5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */int) arr_36 [(unsigned char)21] [i_10])) : (((/* implicit */int) arr_40 [i_10 - 1])))), (((/* implicit */int) (unsigned char)155))));
                            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)116)))))));
                        }
                    } 
                } 
            } 
        }
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_10 - 1] [i_10 + 2] [(short)11] [i_10 + 2]))))) ? ((~(((/* implicit */int) arr_43 [(signed char)7] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17])))) : (((((/* implicit */int) (short)19874)) / (((/* implicit */int) (unsigned short)10010))))));
        var_21 -= ((/* implicit */short) arr_47 [i_10] [(unsigned char)2] [(unsigned short)1] [i_10] [i_10 + 2] [i_10 + 1] [(unsigned short)4]);
    }
}
