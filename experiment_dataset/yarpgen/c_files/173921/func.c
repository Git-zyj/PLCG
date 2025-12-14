/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173921
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
    var_12 = ((/* implicit */signed char) min(((-(((((/* implicit */int) (unsigned short)1023)) + (((/* implicit */int) (unsigned short)1)))))), ((((-(((/* implicit */int) (unsigned short)65527)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4))));
    var_14 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 13903925239997850823ULL)))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1])) % (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_0]))) > (2538177653679249959LL)))) : ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) == (((/* implicit */int) (unsigned short)1))));
                }
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) ((unsigned short) -1083923838742273663LL)))))));
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)58179);
                arr_14 [(short)8] [(short)8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) min((arr_4 [i_1 + 1] [i_1] [i_1 + 1]), (((/* implicit */unsigned short) ((arr_7 [i_1 + 1]) < (((/* implicit */unsigned long long int) arr_6 [i_0])))))))) : ((+(((/* implicit */int) arr_2 [i_1 - 2] [i_1]))))));
            }
        } 
    } 
}
