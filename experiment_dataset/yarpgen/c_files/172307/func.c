/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172307
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_0 [i_2]);
                            var_19 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)100)), ((-(((/* implicit */int) arr_3 [i_1]))))));
                            var_20 *= ((/* implicit */_Bool) min((((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))))) & (((/* implicit */unsigned long long int) max((279223176896970752LL), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_3]))))))), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (short)-26678);
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_7 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) arr_2 [i_0] [i_1] [i_5]);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                            {
                                var_25 = (-(arr_10 [i_0] [i_1] [17LL]));
                                var_26 = (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6]))));
                                var_27 = ((/* implicit */int) (((+(arr_10 [i_1] [5ULL] [i_6]))) | (arr_10 [i_0] [i_1] [(_Bool)1])));
                            }
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >> (((((((/* implicit */_Bool) (short)19)) ? (279223176896970752LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (279223176896970741LL)))))) ? (var_11) : (((/* implicit */long long int) ((((arr_15 [(signed char)3] [i_1] [i_4] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_4])) : (arr_0 [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(unsigned short)9] [i_4] [i_5])) && (((/* implicit */_Bool) var_9)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) (_Bool)1);
                    var_30 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_21 [i_7])), (min((((long long int) 562949953421311LL)), (((/* implicit */long long int) ((((/* implicit */int) (short)-16383)) < (arr_2 [i_7] [i_8] [i_9]))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) != (((/* implicit */int) var_3)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-16383)) : (((/* implicit */int) (short)16371)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) var_12))))))) : ((-(((long long int) var_14))))));
    var_32 = ((/* implicit */unsigned int) var_4);
}
