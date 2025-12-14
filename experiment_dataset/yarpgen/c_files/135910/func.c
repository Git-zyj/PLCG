/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135910
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))))) : (min((((((/* implicit */_Bool) var_2)) ? (6753144940438995809ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16715661989737530669ULL))))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) (unsigned char)172))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (10248831901307178035ULL) : (arr_7 [i_3 + 1] [i_2] [i_1] [i_0]))) : (arr_1 [i_2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)83)) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)112)) / (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_2]))) : (-2475091886712615170LL))))))));
                            arr_11 [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2] [i_0 - 1] [i_3] [i_3 + 1])) : (((/* implicit */int) var_13)))) ^ (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_2] [i_0 + 2] [i_1 - 1] [i_3 - 2])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_0 + 2])) : (((/* implicit */int) var_7))))));
                            arr_12 [i_0] [i_1] [i_2] [(short)18] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)127));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_5 [i_1 - 3] [i_5 + 1] [i_4 - 1])))));
                            arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 4] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_5] [i_4] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)3068)) : (((/* implicit */int) (signed char)-82)))), (((((/* implicit */_Bool) arr_15 [(signed char)21] [i_4] [i_4] [i_5] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_25 [i_6] [i_7 - 1] [i_6] [i_1] [(unsigned short)18] [i_0] [i_6] = ((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */_Bool) 8197912172402373581ULL)) ? (arr_13 [i_0 + 1] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_17 [i_6] [i_6] [i_7 + 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_4);
}
