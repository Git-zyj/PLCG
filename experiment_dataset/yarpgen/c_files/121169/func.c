/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121169
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) max((var_4), (((/* implicit */unsigned int) var_9)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (var_4)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (signed char)69))))))))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (unsigned char)4))))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))) < (var_10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_1)))) ? (max((var_17), (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) ^ (((/* implicit */int) arr_5 [i_2 + 3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 1] [i_2 - 3] [i_2 + 2]))) : (min((0U), (((/* implicit */unsigned int) var_3))))))))))));
                arr_9 [i_2] [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (arr_2 [3ULL] [i_3 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (min((((/* implicit */unsigned int) var_3)), (var_4))))) : (min(((+(1332369079U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [4U] [13ULL])))))))));
                var_21 -= ((/* implicit */short) var_13);
            }
        } 
    } 
}
