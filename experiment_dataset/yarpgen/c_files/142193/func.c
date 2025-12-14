/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142193
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) max((var_13), (arr_3 [i_0])))), ((~(((/* implicit */int) (short)32766))))))), (min((((var_15) & (((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0])))))))));
            var_20 = ((/* implicit */_Bool) ((int) (unsigned short)2));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (var_17)))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_12 [i_4] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) var_14);
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_17))));
                    }
                } 
            } 
            arr_13 [i_2] [i_2] = ((/* implicit */_Bool) arr_6 [i_0] [i_2]);
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_11))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_11 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))))));
            var_24 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2] [6ULL] [i_0]))) : (arr_5 [i_0] [(short)0])))));
        }
        for (int i_5 = 3; i_5 < 24; i_5 += 1) 
        {
            var_25 = (-(((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1]))) : (var_2))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    {
                        arr_22 [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_1 [i_7 - 1] [i_7 + 3])) : (arr_19 [i_0] [i_5 + 1] [i_5 + 1] [i_0]))) * (((/* implicit */long long int) 4294967271U))));
                        var_26 = ((/* implicit */short) min((((/* implicit */int) arr_14 [i_5] [i_5 + 1] [i_7 - 1])), (min((arr_2 [i_0] [i_5 + 1]), (((/* implicit */int) arr_14 [i_5] [i_5 + 1] [i_7 - 1]))))));
                        arr_23 [4U] [i_6] [i_7 - 2] &= ((/* implicit */unsigned short) 24U);
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(var_0))))));
                arr_29 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_11))))));
                var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_17)) - (((var_15) + (((/* implicit */long long int) arr_15 [i_8]))))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned int i_11 = 3; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(arr_26 [i_10]))))));
                            arr_36 [i_0] [i_0] [i_8] [i_11] [i_9] [i_10] [i_11] = ((/* implicit */int) arr_4 [i_8]);
                            var_31 = ((/* implicit */short) (~(arr_16 [i_11 + 2] [i_8])));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_32 [i_0] [i_0] [i_10] [i_10])) % (((/* implicit */int) arr_8 [i_8])))))))));
                        }
                    } 
                } 
            }
            var_33 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_8] [i_0])) : (((/* implicit */int) var_5))))), (var_17))) & (((/* implicit */unsigned int) max((arr_33 [i_0]), (((/* implicit */int) var_13)))))));
        }
        var_34 = ((/* implicit */unsigned short) ((unsigned int) arr_28 [i_0] [i_0]));
        arr_37 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_20 [i_0] [(signed char)0] [i_0] [i_0]))), ((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_24 [i_12])) : (((/* implicit */int) var_10)))) - (((/* implicit */int) var_1)))));
        var_35 = ((/* implicit */short) ((((((((/* implicit */_Bool) min((arr_33 [i_12]), (((/* implicit */int) (unsigned short)2))))) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_25 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_12] [i_12])))))) + (2147483647))) >> (max((((((/* implicit */_Bool) arr_25 [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_12)) : (-1770384005))), (((var_7) & (((/* implicit */int) arr_7 [i_12]))))))));
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12])) ? (arr_19 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((arr_26 [i_12]) % (var_7)))))) << (((((4294967271U) << (((/* implicit */int) (_Bool)1)))) - (4294967244U))))))));
    }
    var_37 &= ((/* implicit */long long int) (+(var_7)));
}
