/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152812
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_5 [5LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2]))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0]))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)6] [i_2] [i_2])))))));
                                arr_13 [i_4] [i_4] [(short)0] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_5 [i_0] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_14 &= ((/* implicit */int) 2651045044764322559LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) 4166550932U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(short)11] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            arr_18 [i_0] [i_0] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) / (-1LL))) : (((/* implicit */long long int) ((arr_6 [i_0] [i_5] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(signed char)13])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
        {
            arr_22 [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) var_0)));
            var_16 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_17 = ((/* implicit */short) arr_11 [i_7] [i_7] [i_7]);
        var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)31)))))) <= (var_5)))), ((~((-(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((arr_26 [i_8]) <= (arr_26 [i_8])))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
        var_20 = ((((((/* implicit */_Bool) var_9)) ? (arr_26 [i_8]) : (arr_26 [i_8]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((+(((/* implicit */int) (signed char)5)))) : (((/* implicit */int) var_7))))));
    }
    var_21 &= ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))));
    var_22 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (unsigned char)142)))) : (((/* implicit */int) var_9)))))));
}
