/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15770
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) (unsigned short)255)) & (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [(signed char)1])))))) & (max((((((/* implicit */int) arr_6 [12ULL] [i_1 - 1] [i_1 - 1] [i_0 - 2])) ^ (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 + 3] [(unsigned char)5])) == (((/* implicit */int) arr_5 [i_2])))))))));
                    arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-28)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50240)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_16 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_2] [i_0 - 1] [i_1 - 1] [i_0 + 4] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)17282)) > (((/* implicit */int) (signed char)27)))))) : (arr_2 [(_Bool)1])));
                            var_18 *= ((/* implicit */signed char) (!((_Bool)1)));
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [(unsigned short)8] [i_1 - 1] = ((((/* implicit */int) arr_11 [i_5] [i_2] [i_1 - 1] [i_0 - 2])) > (((/* implicit */int) arr_11 [i_0 + 4] [i_1 - 1] [i_2] [i_3])));
                            var_19 -= ((/* implicit */unsigned short) (_Bool)1);
                        }
                        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)17293)) >> (((2831641107901088208LL) - (2831641107901088179LL)))))));
                        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 + 4] [i_1] [i_1 - 1] [i_0 + 4]))));
                        var_22 -= (~(((/* implicit */int) (short)-31761)));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_22 [i_0 - 2] [i_0 - 1] [i_1 - 1] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0 + 4] [i_0 + 1])) >> (((((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0 + 1])) - (16173)))));
                        var_23 = ((/* implicit */unsigned long long int) (~(((((arr_13 [3] [i_1] [i_1] [i_1 - 1] [i_1] [(_Bool)1]) + (2147483647))) >> (((((/* implicit */int) (short)31761)) - (31739)))))));
                    }
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)52)) * (((/* implicit */int) arr_10 [i_0 - 2] [i_1 - 1] [i_0 - 2])))))));
                }
                for (signed char i_7 = 4; i_7 < 21; i_7 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) (signed char)42)) % (((/* implicit */int) (signed char)-87)))) * (((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [(signed char)0])) >= (arr_2 [2U])))))));
                    var_26 -= ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)54)))), (((/* implicit */int) (short)31761))));
                    var_27 -= ((/* implicit */unsigned long long int) arr_5 [i_7]);
                    var_28 *= ((/* implicit */long long int) (~(((((/* implicit */int) arr_7 [i_0] [i_1 - 1])) & (((/* implicit */int) (signed char)-42))))));
                }
                arr_26 [i_0] [i_0] [i_0 + 4] = (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 4] [i_0] [i_1 - 1])) == (((/* implicit */int) arr_6 [i_0 + 4] [i_0 - 1] [i_0] [i_1 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-52)), ((((-(((/* implicit */int) (short)5)))) * (((int) (signed char)38))))));
                                var_30 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 + 2])))))) ^ (((((/* implicit */_Bool) 4285452608213082932LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 2])))))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 + 1]))))) : (((/* implicit */int) ((unsigned short) arr_33 [i_0 + 2])))));
                }
                for (int i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) (~(18446744073709551615ULL)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1])) <= (((/* implicit */int) (short)-8805)))))) <= (((((/* implicit */_Bool) 17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (-1377438845379310498LL)))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */short) (((~(2))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((2U) / (((/* implicit */unsigned int) arr_13 [i_13] [i_0 + 4] [i_12] [i_0 + 4] [i_1] [i_0 + 4]))))))))));
                                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) arr_24 [i_0 + 3] [i_1 - 1] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) arr_42 [i_0 + 1] [i_1] [i_11] [i_12] [i_12] [i_12])))) % (((/* implicit */int) arr_3 [i_0 + 3]))))) && ((!(arr_3 [i_12])))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27937))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned short)48045))))));
                }
                var_36 = ((/* implicit */short) (signed char)-64);
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned char) var_15);
}
