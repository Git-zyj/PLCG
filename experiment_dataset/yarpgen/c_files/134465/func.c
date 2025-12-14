/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134465
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
    var_12 = ((/* implicit */_Bool) min((((min((((/* implicit */long long int) (unsigned char)244)), (var_5))) ^ (((/* implicit */long long int) 2734217595U)))), (((/* implicit */long long int) 2734217595U))));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((long long int) var_1)) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_9))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [19LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_1] [i_1 - 1]) : (arr_2 [i_0] [i_1] [i_1]))) | (arr_2 [18LL] [i_1] [i_1 - 1]))))));
                arr_5 [i_0] [(signed char)10] [(_Bool)1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) 2734217595U)) ? (1560749701U) : (2734217595U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(signed char)9] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_3 [22LL] [22LL] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [19LL] [i_1] [i_1]))) : (arr_2 [17U] [i_1 - 1] [i_1 - 1])))))));
                var_14 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [15U] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2734217595U)) ? (1560749723U) : (2734217595U)))) ? (min((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]))) ? (((unsigned long long int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1 - 1])))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1560749701U)))) ? (((((/* implicit */_Bool) arr_2 [12ULL] [i_1] [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_2 [i_0] [(signed char)12] [(signed char)12]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) - (arr_2 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
