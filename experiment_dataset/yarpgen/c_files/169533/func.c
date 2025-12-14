/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169533
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */long long int) var_6);
                    arr_8 [i_2] [i_1] [(short)3] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)250))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((6559097963457865789ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 6166286819287853243LL))) ? (((/* implicit */int) arr_9 [i_3])) : ((+(((/* implicit */int) (unsigned char)236))))))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) arr_6 [i_3])))), (((/* implicit */int) min(((unsigned short)47471), (((/* implicit */unsigned short) (short)-32760)))))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4269185693732859792LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (unsigned short)11157)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_19 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9053718001389485734LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (4294967286U)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) arr_11 [i_4] [i_3]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (short i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_4] [(unsigned short)8] [(short)15] [i_6] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_11) ? (((/* implicit */int) arr_15 [12LL] [12LL] [i_5])) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (_Bool)0))))) ? (((((((/* implicit */int) min(((short)-27668), (((/* implicit */short) (signed char)18))))) + (2147483647))) << (((9223372036854775795LL) - (9223372036854775795LL))))) : (((/* implicit */int) var_1))));
                            arr_26 [i_3] [i_6] [i_5] [(short)6] [i_7] [i_7] [i_7] = ((/* implicit */short) (~(var_12)));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) ((_Bool) arr_19 [i_3] [i_4] [i_3] [i_3]))))));
        }
        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            arr_29 [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_6 [i_8])))), (((/* implicit */int) arr_17 [i_3] [i_8] [i_3] [i_3] [i_3] [i_3]))))) ? ((-((~(2264663543U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (_Bool)1)) >> (((4294967295U) - (4294967274U))))))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_27 [i_8]))));
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            arr_33 [i_3] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2368567175U) : (4294967292U));
            arr_34 [i_3] = ((/* implicit */short) ((unsigned short) min((((/* implicit */int) (unsigned char)9)), (((((/* implicit */int) (short)-27294)) & (((/* implicit */int) (short)26968)))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10] [i_10])) ^ (((/* implicit */int) arr_18 [i_10] [i_10] [(unsigned short)4] [i_10] [i_10]))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (var_16)));
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        for (short i_14 = 2; i_14 < 13; i_14 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-26421)) : (var_12)));
                                var_26 ^= ((/* implicit */unsigned long long int) (unsigned short)13354);
                                var_27 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_14] [i_13 - 1] [23U] [i_10] [i_10])) > (((/* implicit */int) (short)13174)))) && (((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_6))));
    }
    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)139)) + (((/* implicit */int) (_Bool)1))));
        arr_50 [i_15] = ((/* implicit */int) arr_21 [(signed char)15] [i_15] [i_15] [i_15]);
        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)8)), (12U)));
    }
    for (int i_16 = 2; i_16 < 17; i_16 += 3) 
    {
        arr_53 [i_16] = ((/* implicit */long long int) var_9);
        var_31 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) arr_11 [i_16] [i_16 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (13335249801054672731ULL))))));
    }
}
