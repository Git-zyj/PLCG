/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183957
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
    var_16 = ((/* implicit */signed char) var_10);
    var_17 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1112898351U)))), (0ULL))), (((unsigned long long int) ((((/* implicit */_Bool) 2032)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_14))))))) ? ((~(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))) ? (((unsigned long long int) -905474207)) : (((/* implicit */unsigned long long int) -905474224)))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)163))) ? (((/* implicit */int) min((((_Bool) (short)18846)), ((_Bool)1)))) : (((/* implicit */int) ((signed char) arr_2 [i_0])))));
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)0)) >> (((140737488355327ULL) - (140737488355322ULL))))))) ? (((long long int) ((signed char) arr_2 [i_0]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((long long int) (short)24434))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_22 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))));
                        arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned short)57788);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_8))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            var_24 = ((/* implicit */short) max(((~(arr_14 [i_4] [i_5] [i_5 + 1]))), (((/* implicit */unsigned int) ((signed char) arr_14 [i_4] [i_5] [i_5 - 2])))));
            arr_18 [i_4] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((arr_2 [i_4]), (((/* implicit */unsigned long long int) arr_17 [i_4] [i_5 - 1]))))) ? (((((/* implicit */int) var_15)) + (((/* implicit */int) arr_0 [i_4] [i_5])))) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)101)))))));
                            var_26 = ((/* implicit */signed char) -905474224);
                            var_27 ^= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_28 -= ((/* implicit */unsigned short) ((477376398U) << (((var_13) - (2763045195U)))));
                arr_28 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) ((unsigned char) (unsigned short)28743))) : ((~(((/* implicit */int) var_12))))));
            }
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned short) ((arr_16 [(signed char)0]) / (arr_16 [(short)8])))))));
            arr_29 [14ULL] [i_5] [i_5 + 1] |= ((/* implicit */unsigned int) arr_17 [i_4] [i_5]);
        }
        arr_30 [i_4] = ((/* implicit */signed char) (short)-24434);
        arr_31 [i_4] = ((/* implicit */short) var_9);
    }
}
