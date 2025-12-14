/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14797
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((arr_1 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41)))))))));
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((var_5) | (10)))) : (((long long int) arr_3 [i_0] [i_1] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_6 [(unsigned char)12] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_5 [i_2])));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [7ULL] [i_3] [i_4]), (var_9))))) == ((~(arr_1 [i_0])))));
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_0] [i_2]);
                        var_22 = ((/* implicit */unsigned short) (unsigned char)120);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))));
        }
        for (int i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            arr_15 [15LL] [i_5] [15LL] = ((/* implicit */int) arr_3 [i_0] [8ULL] [i_5]);
            var_24 = ((/* implicit */int) arr_5 [i_0]);
        }
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_14 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214)))))) : (max((((/* implicit */long long int) var_9)), (arr_10 [(_Bool)1] [(signed char)1])))))));
        var_26 = ((/* implicit */unsigned char) var_1);
        var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)54))))), (417850705321147132ULL)));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) 417850705321147132ULL);
        arr_21 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (max((((long long int) arr_18 [i_6] [i_6])), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_6] [(unsigned short)6] [i_6] [i_6] [(unsigned char)19] [i_6])))))))));
        var_28 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) (unsigned char)41)))));
        arr_22 [i_6] = ((/* implicit */unsigned char) max(((~(arr_1 [i_6]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_6])))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) (unsigned char)56);
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_28 [i_8] = ((/* implicit */unsigned char) ((short) ((unsigned int) arr_13 [i_8])));
            arr_29 [i_7] [i_8] = ((/* implicit */unsigned long long int) var_7);
            arr_30 [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_7])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_7 + 2])) : (arr_17 [i_7 - 1] [i_7 - 2]))))));
            arr_34 [i_9] = ((/* implicit */int) ((arr_10 [i_7 + 2] [i_7 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))));
            arr_35 [i_9] [i_9] = ((/* implicit */signed char) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 + 3])))));
        }
    }
    var_30 = ((/* implicit */short) max((((/* implicit */unsigned char) var_2)), (((unsigned char) var_8))));
}
