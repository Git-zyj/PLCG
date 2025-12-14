/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134095
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8247681310731744571LL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */short) (~((+(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_14)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_4 [21ULL] [11ULL] [i_2]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_4);
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((2304717109306851328ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13)) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]))))) ? (((arr_10 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_4])) ? (-823483718) : (((/* implicit */int) var_0)))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_7))), ((~(((/* implicit */int) var_10))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) 1795317278)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [7ULL]))) : (((unsigned int) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (1097364144128ULL)))));
                                arr_20 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min(((signed char)-118), ((signed char)28)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 22; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    arr_28 [i_8] [i_7] = ((/* implicit */signed char) arr_3 [i_8]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((-2147483637) & (((/* implicit */int) var_1))))))) << ((((+(((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_7] [i_8] [i_9] [i_9]))) : (var_12))))) - (51ULL)))));
                                var_24 *= ((/* implicit */unsigned int) var_12);
                                arr_34 [i_8] [i_8] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)51316)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)496)))), (((((/* implicit */_Bool) var_8)) ? (1795317286) : (((/* implicit */int) arr_5 [i_7 - 1] [i_7 + 2] [i_10]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) arr_31 [i_0] [(signed char)21] [(signed char)21] [i_0] [i_0]);
                    arr_35 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_7] [i_8] [i_8] [i_8]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        arr_38 [(unsigned short)5] = ((/* implicit */unsigned int) arr_30 [i_11] [i_11] [i_11]);
        arr_39 [10] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
