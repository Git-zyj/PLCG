/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137508
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
    var_20 |= ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_13))));
    var_22 = ((/* implicit */unsigned char) (+((+((~(((/* implicit */int) var_9))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((1138365426U), ((-(((((/* implicit */_Bool) var_19)) ? (1138365426U) : (3156601850U))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_0 [i_0 + 1])));
        arr_2 [i_0] [i_0 + 1] |= ((/* implicit */unsigned short) (((-(arr_1 [4]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1138365426U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23298))) : (3156601872U)))) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned short)21269))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1138365433U) >> (((arr_1 [i_2]) - (1123992882U)))))) ? ((+(3156601891U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3156601860U))))))));
                arr_8 [i_1] [(signed char)11] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0 + 1] [i_1 - 1] [i_1 + 3]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) -927952448)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-23272)))) : (((((/* implicit */_Bool) (short)-23272)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned char)184))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                arr_13 [7U] = (((!(((/* implicit */_Bool) 3156601862U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3156601862U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned long long int) 3156601862U)))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) arr_11 [i_0 + 1] [i_1 - 1] [i_5]);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1]))));
                        }
                    } 
                } 
            }
        }
        for (short i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            arr_22 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1138365405U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60675))));
            arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned short)4860)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_5 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_0 + 1]))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (_Bool)1))))));
            arr_25 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (short)23272)) >> ((((~(((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1])))) - (31174)))));
        }
        for (signed char i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            arr_30 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54165))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 + 2] [i_0]))) : (-3877394270254891926LL)));
            arr_31 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_7] [i_7] [i_7]))));
        }
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            var_29 ^= ((/* implicit */long long int) ((3156601863U) >> (((/* implicit */int) (_Bool)0))));
            arr_34 [8U] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (402886044)))) - (1138365435U)));
            arr_35 [8LL] [i_0] [8LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_17 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_8 + 1] [i_8 + 1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
        }
    }
    for (signed char i_9 = 3; i_9 < 10; i_9 += 1) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_28 [(signed char)8] [i_9] [(signed char)8])), (max((((/* implicit */int) arr_16 [14LL] [7U] [(unsigned char)14] [i_9 - 2] [i_9 - 1] [i_9])), (((((/* implicit */_Bool) arr_9 [i_9 + 1])) ? (((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_12 [i_9 - 3] [i_9] [i_9]))))))));
        var_30 += (short)10798;
    }
}
