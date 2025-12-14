/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130069
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_3 - 4] [(unsigned short)2]))));
                            arr_13 [(_Bool)1] [i_1] [(short)1] [(_Bool)1] [i_3] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0 - 1] [0U] [i_1] [i_3 - 3]))));
                            var_12 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 - 2]))));
                            arr_14 [(unsigned short)1] [3U] [i_3] [i_4] = ((/* implicit */unsigned char) var_5);
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [7LL] [i_3] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) (short)9174)) : (((/* implicit */int) var_9)))))));
                            arr_18 [(short)4] [(_Bool)1] [(short)4] [i_3 + 1] [i_3] = ((/* implicit */short) arr_1 [i_1]);
                            arr_19 [i_0] [i_0] [i_3] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned char)7])) % (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_4 [1LL]) : (((/* implicit */int) var_4))))) : (-8274062000378483304LL)));
                        }
                        arr_20 [(signed char)9] [i_0 - 2] [i_3] [i_3 - 3] [i_2] = ((/* implicit */signed char) arr_0 [i_0]);
                        arr_21 [i_3] [i_1] [i_2] [(signed char)10] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)252)) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 + 1])))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (+(var_8)));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) var_3);
        /* LoopNest 3 */
        for (long long int i_6 = 4; i_6 < 15; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_24 [i_0] [(unsigned short)11] [i_0])))))));
                        arr_33 [i_0] [(short)10] [(unsigned short)3] [i_6] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)4)))) * (((/* implicit */int) ((((/* implicit */_Bool) 1986084266U)) || (((/* implicit */_Bool) (signed char)-61)))))));
                        arr_34 [(short)12] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [(short)13] [i_0 - 1] [i_0 + 1] [10LL] [i_6 + 2])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (-8461890773998848867LL))))) != (var_10)))) : (((/* implicit */int) var_0))));
                        arr_35 [17U] [i_6] [4U] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((((((/* implicit */_Bool) ((var_9) ? (arr_30 [i_0 - 2] [6]) : (((/* implicit */int) arr_7 [(short)5] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) - (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [9U] [4U]))))) + (6028777826832333138LL)))));
                    }
                } 
            } 
        } 
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned char) (-(var_1)));
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9 + 1] [i_9 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9 - 1] [i_9 + 2])))))) ? (((/* implicit */int) arr_6 [i_9 + 1] [i_9 + 1])) : (((((/* implicit */int) arr_6 [i_9 - 1] [i_9 + 1])) ^ (((/* implicit */int) arr_6 [i_9 - 1] [i_9 + 1]))))));
    }
    var_16 = ((/* implicit */int) var_10);
}
