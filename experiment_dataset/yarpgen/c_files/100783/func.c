/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100783
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [3ULL] [i_0] [i_1])) ? (159354331U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((var_2) ^ (var_8))) : (arr_4 [i_1] [i_1] [4ULL])))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)61762)) & (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_0 [i_1 - 1] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [(unsigned char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)3774))))) : (((unsigned int) arr_0 [i_0] [(unsigned short)0]))))));
                var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)21196)) / (((/* implicit */int) arr_3 [3U]))))))));
                arr_6 [6U] [i_1] = (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20101)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_1 [i_0]))))) / ((((_Bool)1) ? (1600061616U) : (arr_4 [i_0] [i_1] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)12730))));
                    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 + 1]))));
                    var_12 = var_1;
                }
                arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56408)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) : (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))))))))));
}
