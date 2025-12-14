/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108807
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
    var_14 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)59848)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59844)) > (((/* implicit */int) arr_9 [i_2] [i_4 + 2] [i_4 - 3] [i_2])))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_1] [i_1] [i_1])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            arr_16 [(unsigned char)2] [i_0] [i_1] [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */signed char) arr_8 [(unsigned short)9] [i_2] [i_5]);
                            var_17 *= ((/* implicit */long long int) ((arr_5 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] [(short)1] = var_9;
                        }
                        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [(short)8] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))));
                            var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)5]))))) ? (((/* implicit */int) arr_11 [i_1] [i_6] [i_6] [i_6 + 2] [i_1])) : (((/* implicit */int) var_0)));
                            arr_20 [i_0] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) (short)-32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_6] [i_6]))) : (((unsigned long long int) var_4))));
                            var_20 = ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [6LL])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_6])))));
                        }
                        arr_21 [i_3] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_3]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
            {
                {
                    var_21 = (i_8 % 2 == 0) ? (((((((/* implicit */_Bool) 140949180)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_7] [i_8])) : (((/* implicit */int) (unsigned short)37883)))) * (((((/* implicit */int) var_13)) << (((arr_5 [i_8]) + (4705291628704113000LL))))))) : (((((((/* implicit */_Bool) 140949180)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_7] [i_8])) : (((/* implicit */int) (unsigned short)37883)))) * (((((/* implicit */int) var_13)) << (((((arr_5 [i_8]) + (4705291628704113000LL))) - (5857206989123670832LL)))))));
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_13 [(unsigned short)10] [i_7] [i_8 + 1] [i_8 + 2] [i_8]))))) % (((/* implicit */int) arr_27 [i_8] [i_8 - 2] [i_8 + 1] [i_8 - 3]))));
                    arr_28 [i_8] [0ULL] [i_8 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_7] [i_7] [7] [i_7] [i_8] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_0] [i_7] [i_8 - 2])) : (((/* implicit */int) var_0)))) * (((/* implicit */int) ((unsigned short) (unsigned short)59848)))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) (((+((+(((/* implicit */int) arr_32 [i_10 + 1] [i_10 + 2] [i_10])))))) != (((int) (-(((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_42 [i_9] [i_10] [i_11] [i_10 + 1] [i_13 + 1] [i_12] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_31 [i_9] [(short)13]), (((/* implicit */unsigned long long int) arr_36 [i_11] [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [(short)8] [i_9] [(_Bool)1])) ? ((-(-2030822002))) : (((/* implicit */int) ((((/* implicit */int) arr_29 [(unsigned char)6])) <= (1077645830))))))) : (arr_35 [13U] [i_9])));
                                arr_43 [(unsigned short)13] [i_13 - 2] [i_13] [i_13] [i_9] = ((/* implicit */short) arr_36 [i_13 - 1] [i_9] [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_9] [i_9] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_9)), (var_3))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_35 [i_9] [i_9])))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_9])) >> (((((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9])) + (22490)))))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((short) var_13)), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9] [(unsigned short)10] [(unsigned short)10] [i_9]))) > (arr_37 [i_9] [i_9] [i_9] [i_9]))))))), (min((((/* implicit */unsigned long long int) arr_41 [(signed char)8])), (min((((/* implicit */unsigned long long int) arr_39 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] [i_9])), (arr_33 [14ULL] [(_Bool)1] [i_9]))))))))));
    }
}
