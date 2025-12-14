/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169865
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
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = (+((((+(var_6))) & (18446744073709551615ULL))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_3]);
                                var_11 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)112)) == (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_2] [i_3])), (var_9)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((((((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_3)))) - (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */_Bool) -6589753923617639590LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 24; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_13 ^= (+(var_8));
                var_14 = ((/* implicit */int) arr_15 [i_5] [i_6]);
                /* LoopNest 3 */
                for (long long int i_7 = 2; i_7 < 23; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_25 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 - 3] [i_5] [i_9])) || (((/* implicit */_Bool) var_8))))) == ((~(((/* implicit */int) (_Bool)1))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 2] [i_6] [i_7] [(unsigned char)0])) | (((((/* implicit */_Bool) arr_18 [23ULL] [i_6] [i_5])) ? (((/* implicit */int) arr_15 [i_8] [i_6])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_20 [i_5] [i_6] [16ULL] [i_9])))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) || ((_Bool)1)))))))) : (((long long int) ((((/* implicit */int) arr_15 [3ULL] [3ULL])) < (((/* implicit */int) (_Bool)1)))))));
                                var_16 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) 286440914)));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((3080098386493216235LL), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))), (-2948165350102138024LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 3; i_10 < 18; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((arr_26 [i_10]), (((/* implicit */unsigned long long int) (short)-3235)))) : (((/* implicit */unsigned long long int) (+(arr_16 [i_10] [i_10] [i_10])))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_33 [i_13] [i_12] [17ULL] [i_10 - 2]), (((/* implicit */unsigned short) arr_20 [i_10] [i_10] [i_12] [i_13]))))) | (((/* implicit */int) max((arr_20 [i_10] [i_11] [i_12] [i_10]), (((/* implicit */short) (_Bool)1))))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 4) 
                            {
                                var_19 = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) arr_24 [i_11] [i_13] [i_14])), (arr_32 [i_10] [i_11] [i_11] [i_12] [i_10]))) << (((((/* implicit */int) arr_33 [i_11] [i_12] [i_11] [i_14 + 1])) - (52917))))) - (max((arr_32 [i_10] [i_10] [i_10 + 1] [i_13] [i_10]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_32 [i_10] [i_13] [i_10] [i_10] [i_10]))))))));
                                arr_36 [14LL] [i_13] [i_13] [i_10] = ((((/* implicit */_Bool) ((int) max((arr_30 [i_10] [i_12] [i_12]), (var_2))))) ? (arr_34 [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_10] [i_10 + 2] [i_10]) < (((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_12] [i_13] [i_13] [i_14])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_20 [i_10] [i_11] [i_12] [i_10])))))))));
                            }
                            var_20 ^= ((/* implicit */unsigned long long int) ((_Bool) max((min((arr_35 [i_11] [i_11] [i_11] [i_13]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (_Bool)1)))));
                            arr_37 [i_10] [i_10] [i_12] [i_13] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_20 [i_10] [(unsigned char)13] [i_12] [i_13])) ? (var_2) : (((/* implicit */unsigned long long int) 948481344)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) -948481320)) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_34 [i_10] [i_11]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_34 [i_10] [i_12])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((-((-(arr_14 [i_11]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))))))));
                arr_38 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (short)15207)) - (15207))))) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37301)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 3) 
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((9823100521535846861ULL) + (((/* implicit */unsigned long long int) arr_39 [i_10 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_10 + 2] [i_11] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_11] [i_11] [i_15])))) : (max((((/* implicit */unsigned long long int) arr_35 [i_11] [i_10] [i_11] [i_15])), (8623643552173704755ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((arr_21 [i_10 - 1] [i_10] [i_11] [i_15]), (((/* implicit */int) (short)-14568))))) ^ ((~(arr_35 [i_11] [i_11] [6ULL] [i_11]))))))));
                    arr_41 [i_11] [i_15] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_33 [i_10] [i_11] [i_15] [i_10])), ((~(((arr_32 [i_10] [i_10] [i_10] [i_15] [i_11]) + (((/* implicit */unsigned long long int) var_5))))))));
                }
            }
        } 
    } 
}
