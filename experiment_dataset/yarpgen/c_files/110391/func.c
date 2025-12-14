/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110391
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2])) : (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_4 [i_1] [i_0 - 2])) : (arr_2 [i_0 - 1] [i_0 - 1])))))), (max((((/* implicit */unsigned long long int) (signed char)91)), (268304384ULL)))));
            arr_6 [i_0 + 1] = ((/* implicit */signed char) (+(arr_0 [15U])));
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)15))))) : (((/* implicit */int) ((-5472401549557417185LL) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)2] [i_1])))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)6] [i_0 - 1] [i_0 - 1]))) <= (11725227971572747770ULL))))));
            var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)17)), (3028120932752538743ULL)));
        }
        arr_8 [i_0] = arr_1 [i_0] [i_0 - 2];
        arr_9 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (770499662)));
    }
    for (int i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (unsigned char)135)), (86843559U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [(short)14] [i_2]) : (((/* implicit */int) arr_12 [i_2 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (arr_2 [i_2] [i_2])))) : (((unsigned int) arr_3 [i_2] [i_2] [(signed char)5]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((short) arr_15 [i_2 - 2] [i_2 - 2]));
            var_18 = ((/* implicit */int) ((signed char) arr_0 [i_2 - 2]));
        }
    }
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_9)))))) : (max((var_3), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
