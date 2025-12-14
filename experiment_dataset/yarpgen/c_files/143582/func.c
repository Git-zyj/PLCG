/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143582
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
    var_10 = ((/* implicit */long long int) ((unsigned long long int) var_5));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [(signed char)9])) || (((/* implicit */_Bool) arr_2 [i_0]))))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2]))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) arr_11 [(unsigned short)3] [(unsigned short)3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_9 [i_0] [i_0] [i_2] [i_3] [6ULL] [(_Bool)1])))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_11 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_4])))))))) ? (min((((unsigned long long int) arr_11 [i_0] [i_0])), (((/* implicit */unsigned long long int) min((arr_12 [(unsigned char)10]), (((/* implicit */int) arr_8 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)10]))) : (((arr_10 [i_1] [i_2] [(signed char)12]) ? (arr_11 [i_1] [i_2]) : (arr_11 [i_2] [12]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_6))) || (((/* implicit */_Bool) var_2)))) ? ((~((-(((/* implicit */int) (short)9022)))))) : ((-(((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
}
