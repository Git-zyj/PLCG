/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149399
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((-1860453313), ((+(-1860453322)))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) 1196210523U);
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) (unsigned char)13);
        var_14 = ((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 + 1])))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 818405092U)) : (((arr_16 [i_2] [i_3 + 1] [i_3 + 1] [i_4]) + (var_5)))));
                    arr_18 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)18248)) + (((/* implicit */int) var_8))));
                }
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (1860453314) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_15 = ((/* implicit */unsigned int) 15280604274310107391ULL);
    }
    var_16 = ((/* implicit */short) var_1);
}
