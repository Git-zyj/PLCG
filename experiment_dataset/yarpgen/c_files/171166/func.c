/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171166
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) (+(((arr_4 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [(unsigned char)9] [(unsigned short)6] [i_3]) : (min((arr_8 [i_0] [i_0] [i_0] [9LL] [i_3]), (arr_8 [i_0] [(unsigned short)2] [i_2] [i_2] [i_3])))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max(((~(((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned char)6])) - (((/* implicit */int) arr_1 [i_0] [7ULL])))))), (((((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_3 - 1])) + (((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_3 - 1])))))))));
                            var_18 *= max(((~(((((/* implicit */_Bool) arr_3 [1LL] [1LL])) ? (arr_3 [i_2] [8LL]) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_3])))))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [(unsigned short)6]))), ((~(18014398509481983ULL))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(arr_2 [9LL] [i_3])))))) == (arr_8 [i_3 - 1] [i_3] [i_2 + 1] [i_1] [i_0]))))));
                            var_20 = ((/* implicit */long long int) (~(18428729675200069632ULL)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_1 [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [0U]))))), (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_0] [i_0] [4ULL]), (((/* implicit */unsigned char) arr_1 [i_0] [i_1])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_2 [3U] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)12] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */long long int) (((~(((/* implicit */int) arr_9 [i_0])))) - (((/* implicit */int) arr_4 [i_1] [i_1]))))) * (min((((/* implicit */long long int) (unsigned short)55710)), (8707135632538262654LL))))))));
                            var_23 = ((/* implicit */long long int) (!(max((arr_12 [9LL] [i_4] [(unsigned short)12] [i_5]), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) > (arr_0 [i_4])))))));
                            arr_14 [(short)5] [i_4] [0ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_5 - 1])) ? (arr_0 [i_4 - 3]) : (arr_0 [i_4 + 2]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_4] [0LL] [i_4 - 4])))));
                            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_1 [i_5 - 3] [i_1]) ? (min((((/* implicit */unsigned int) arr_4 [i_1] [3LL])), (arr_11 [i_1] [10LL] [i_5]))) : (min((arr_11 [i_5] [i_1] [i_0]), (((/* implicit */unsigned int) arr_4 [(unsigned short)10] [(_Bool)0]))))))) % (((((/* implicit */_Bool) (+(arr_3 [i_1] [i_4])))) ? ((-(1127582198227271091ULL))) : (((arr_4 [i_5] [i_5 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_4 - 1] [i_0]))) : (arr_10 [i_4] [i_1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((var_3) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_8))) : (min((((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))))));
    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))))), (var_11)));
    var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_5))))), (((/* implicit */unsigned long long int) var_10))));
}
