/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138960
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [8] [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) (short)-30768)) && (((/* implicit */_Bool) -2135310183)))))))) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-4952)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)4] [(unsigned char)4]))))) < (((/* implicit */unsigned int) ((1332723536) / (((/* implicit */int) (signed char)123))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [(signed char)0] [i_1])) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (short)0)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) && (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (0LL)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [5U]) : (1463169533))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [4] [4])) && (((/* implicit */_Bool) (unsigned char)202)))))))) / (min((arr_2 [i_0] [(unsigned char)7] [i_1]), (arr_2 [i_1] [(unsigned char)7] [i_0])))));
                var_18 = ((/* implicit */long long int) max((var_18), (((((((/* implicit */_Bool) arr_5 [(short)4] [i_1] [i_1])) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)198))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) arr_4 [8LL] [8LL])) : (arr_1 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_13);
    var_20 -= ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -789169716)) && (((/* implicit */_Bool) (unsigned char)51))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned char)43))));
}
