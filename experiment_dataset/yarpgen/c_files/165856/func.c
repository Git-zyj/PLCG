/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165856
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2194719714955032032LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (5890961308965599109ULL)))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [(unsigned short)16])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) - (5LL)))))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_3))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */int) (signed char)4)) : ((~(((/* implicit */int) ((arr_8 [21ULL] [i_2] [i_3] [i_2]) && (arr_7 [7ULL])))))))))));
                    var_15 = ((/* implicit */unsigned int) arr_1 [i_2]);
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) ((arr_4 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned int) ((arr_1 [i_1]) & (var_11)))) : (arr_2 [i_1]))), (((/* implicit */unsigned int) arr_8 [i_1] [21ULL] [i_1] [i_1]))));
        var_17 = ((/* implicit */unsigned int) arr_7 [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned char) 0U);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) var_1);
        var_18 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) 5890961308965599109ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (0LL))) % (4216472018584776609LL)))));
    }
    var_19 = ((/* implicit */long long int) var_2);
}
