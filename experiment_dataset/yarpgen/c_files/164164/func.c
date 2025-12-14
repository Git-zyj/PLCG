/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164164
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) != (arr_1 [i_0])));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0 + 3]) >= (arr_1 [i_0 + 2]))))) > (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
    }
    for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) var_13);
        var_21 = ((/* implicit */int) ((unsigned short) var_11));
        var_22 &= ((/* implicit */unsigned int) var_9);
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17829738634862070851ULL)) ? (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned short)12496)))))) : ((+(((long long int) (unsigned char)27)))))))));
            arr_13 [i_3] [(unsigned short)12] [10] = ((/* implicit */_Bool) (-(arr_8 [i_3])));
        }
        var_24 += ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (arr_10 [i_3] [(unsigned short)11])))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_3]) : (((arr_8 [i_3]) << (((var_10) - (2162314969130851630LL))))))) : (((/* implicit */unsigned long long int) var_7)))))));
        arr_14 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_3] [(signed char)9]))));
    }
}
