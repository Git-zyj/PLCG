/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149227
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */short) min((((/* implicit */signed char) ((((((/* implicit */_Bool) -1847594137089316862LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (14847428753124511768ULL))) == (((/* implicit */unsigned long long int) max((arr_5 [i_0 - 2]), (((/* implicit */long long int) arr_7 [i_0] [(unsigned char)16] [i_0])))))))), (arr_0 [i_0 - 2])));
                    var_12 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_6 [i_0] [i_0 - 1] [10LL] [i_2 + 4]) >= (((/* implicit */long long int) arr_7 [i_0] [i_0 - 1] [i_0 - 1]))))), (max((((/* implicit */long long int) arr_3 [i_0])), (arr_6 [i_0] [i_0 - 1] [i_2] [i_2 + 4])))));
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) -479921155974716233LL)), (11814543653146833799ULL))))))));
                    var_14 = ((/* implicit */long long int) ((((arr_4 [i_0 - 1] [i_2 - 2]) | (arr_4 [i_0 - 1] [i_2 - 1]))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))));
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1]))) > (arr_7 [i_2 - 1] [i_1] [i_0 - 1]))) ? (max((arr_4 [i_2 - 3] [(unsigned char)21]), (((/* implicit */long long int) arr_3 [i_2 + 1])))) : (max((((/* implicit */long long int) arr_7 [i_2 - 1] [i_1] [i_0 - 2])), (arr_4 [i_2 + 2] [i_1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_8);
}
