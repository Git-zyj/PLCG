/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176051
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) 3656770164U)), (16574791104781062304ULL))) - (((/* implicit */unsigned long long int) (-(134217696U)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(unsigned short)5] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((+((~(((/* implicit */int) var_11)))))) : (((((/* implicit */int) arr_9 [i_3 - 1] [i_1 - 1] [i_0 + 2] [i_0])) - (var_9)))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1823162141))) || (((/* implicit */_Bool) arr_2 [i_0] [2LL]))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_2 [i_0] [i_2]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((!(var_8))) ? (((/* implicit */int) (!(arr_12 [i_1] [i_1 - 1] [i_1] [i_1])))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_16 *= ((/* implicit */int) var_8);
    var_17 = ((/* implicit */short) ((unsigned char) var_2));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_18 = var_10;
        var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) (~(((/* implicit */int) arr_17 [i_5]))))));
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1823162141)) ? (-1823162155) : (((/* implicit */int) (short)-4701))))) ? (((((/* implicit */_Bool) -1428681620)) ? (1146363812U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41572))))) : (((/* implicit */unsigned int) arr_18 [i_5]))))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_26 [i_7] [i_7] [i_7] [13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)2349)), (3456268988U)))) ? (((((/* implicit */_Bool) (short)4701)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107)))) : (arr_18 [i_7]))))));
                    var_21 -= ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)166)) + (arr_18 [i_6]))), ((+(((((/* implicit */int) arr_23 [14U] [14U] [i_8] [i_8])) * (2147483647)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_6])))) * (max((4160749599U), (((/* implicit */unsigned int) -1823162145))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 4160749610U))));
                    arr_27 [4LL] [10] [i_7] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                var_24 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21007)) ? ((+(-993994777))) : (((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6]))))), ((~(arr_33 [i_10] [i_9])))));
                var_25 = ((/* implicit */int) var_0);
            }
            var_26 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4160749631U)) && (((/* implicit */_Bool) 4068960558985097991LL)))) ? (((/* implicit */long long int) (-((+(arr_19 [i_6])))))) : (arr_22 [5U])));
            arr_34 [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) ((arr_22 [i_9]) < (((/* implicit */long long int) arr_18 [i_6]))))))))));
            var_27 += ((/* implicit */unsigned int) (~(arr_33 [i_6] [i_9])));
            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [14LL] [i_6] [i_6] [i_9]))))) ? (((/* implicit */int) arr_25 [i_6] [i_9])) : (((/* implicit */int) ((_Bool) var_9)))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_31 [i_13])) ? (((/* implicit */int) arr_31 [i_6])) : (((/* implicit */int) arr_31 [i_13]))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) max((arr_41 [i_6] [i_12] [14ULL] [i_11] [i_6]), (arr_41 [i_6] [(signed char)16] [i_6] [i_13] [i_13])))) | (arr_22 [i_6]))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) max((var_31), (arr_36 [i_6])));
        }
        for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 4) 
        {
            arr_46 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_6])) & ((+(((/* implicit */int) arr_20 [i_14]))))));
            var_32 ^= ((/* implicit */unsigned char) var_7);
        }
    }
}
