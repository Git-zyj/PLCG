/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174829
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [(short)3] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-6)))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) >> (((((/* implicit */int) arr_0 [i_0])) - (17906)))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_8 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_2]), (arr_7 [i_2]))))) : ((+(arr_8 [i_2]))))), (1023175796449123361ULL)));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))) < (((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_7 [(signed char)8]))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_8 [19LL]))) : (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (1023175796449123357ULL)))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((1023175796449123338ULL) << (((3966515967U) - (3966515955U)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31195)) + (((/* implicit */int) (unsigned short)65535))))))))));
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_2])), (arr_8 [i_2])))) ? (((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_7 [i_2])))) : (((((/* implicit */int) arr_7 [i_2])) ^ (((/* implicit */int) arr_7 [i_2])))));
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (signed char)0);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)-1))));
    }
}
