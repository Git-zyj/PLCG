/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129671
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) ((_Bool) 3635590880U));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_0])))) - ((-(((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((3635590880U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511)))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14740))) - (3635590897U)))) || (((/* implicit */_Bool) ((unsigned int) var_1)))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) var_5);
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = (+(max(((~(((/* implicit */int) var_3)))), (((var_1) ^ (((/* implicit */int) (unsigned short)37)))))));
                        var_16 = ((/* implicit */unsigned long long int) (~(((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_11 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))));
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_4] [i_3])))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((int) arr_5 [i_0]));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_7 [i_5] [i_4] [3U]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_0] [i_0] [i_0])) ? (arr_17 [i_0] [i_2] [i_3] [i_4] [i_6]) : (((/* implicit */int) (signed char)42))))) : (max((((((/* implicit */_Bool) 1148140102)) ? (((/* implicit */unsigned long long int) 144112989052600320LL)) : (var_5))), (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_0] [i_3]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = ((/* implicit */int) min((min((((/* implicit */long long int) ((int) arr_2 [i_0] [i_4]))), ((-(arr_4 [i_6]))))), (((/* implicit */long long int) (((+(((/* implicit */int) (signed char)113)))) * (((/* implicit */int) arr_8 [i_0])))))));
                            var_21 = ((/* implicit */_Bool) var_5);
                            var_22 |= arr_19 [i_0] [i_2] [i_3] [i_0] [i_4] [9];
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                arr_23 [i_0] [i_2] [0U] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7]))) >= (var_0))))) * (((unsigned int) arr_2 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_23 = (!(((/* implicit */_Bool) (-(659376415U)))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8] [i_7]))) <= (((long long int) (!(((/* implicit */_Bool) var_4))))))))));
                            var_25 = ((/* implicit */int) max((((unsigned short) arr_13 [i_8] [i_7] [i_7] [18])), (((unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [(signed char)10] [i_2] [i_2]))))));
                        }
                    } 
                } 
                arr_32 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_2] [4])), (((((/* implicit */_Bool) (unsigned char)119)) ? (arr_24 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))))))), (((/* implicit */long long int) ((unsigned short) var_0)))));
                var_26 = 3635590880U;
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) var_7);
            var_28 = ((/* implicit */long long int) var_9);
            arr_36 [23ULL] [23ULL] [23ULL] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_10] [i_10] [5U] [i_10] [5U] [i_0])))))));
        }
        var_29 = ((/* implicit */int) (((+((~(arr_5 [(unsigned char)2]))))) < (((/* implicit */int) ((unsigned short) (-(67104768U)))))));
    }
    var_30 = ((/* implicit */unsigned short) max((var_30), (var_4)));
}
