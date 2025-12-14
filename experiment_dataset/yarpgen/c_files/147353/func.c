/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147353
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) 2483343529U)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) var_6);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 4; i_4 < 18; i_4 += 2) 
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [3LL] = arr_14 [11LL] [i_1] [13ULL] [i_3] [i_1];
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [8LL] [i_2] [i_3] [i_3])) || (((((/* implicit */_Bool) arr_10 [i_4 - 3] [i_1] [i_4] [i_4] [17ULL] [i_4 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_4 - 2])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_4 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_0)))))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                var_14 *= ((/* implicit */int) ((arr_3 [i_5]) == (arr_3 [i_5])));
                                arr_21 [(signed char)6] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) var_3);
                            }
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                            {
                                var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [17LL] [17LL])) ? (((/* implicit */long long int) arr_19 [i_6] [i_6] [i_6] [i_3])) : (((long long int) arr_8 [(short)3] [(unsigned char)0] [14LL] [14LL]))))));
                                var_16 -= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_23 [i_3] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_6] [i_0] [i_2] [i_0]))))) * (arr_1 [i_0])));
                            }
                            for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                            {
                                arr_26 [i_0] [i_0] [i_2] [i_3] [i_1] = ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_7] [i_7])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_2] [i_1] [8])) ? (arr_18 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) arr_13 [i_7] [(unsigned char)12] [i_0] [(unsigned char)12] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : ((-(arr_23 [i_2] [8LL] [i_7]))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)244)))))));
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15647219512995893553ULL)) ? (arr_23 [i_3] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */long long int) 1749915655U)) <= (arr_1 [i_7])))))))));
                            }
                            var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2799524560713658063ULL)) || (((/* implicit */_Bool) (signed char)-68))))) | (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_16 [14] [14] [(unsigned char)18] [i_3])))))));
                            var_20 = (~((+(min((arr_19 [i_3] [i_1] [i_3] [i_3]), (((/* implicit */unsigned int) arr_22 [i_2] [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((signed char) 18446744073709551615ULL));
}
