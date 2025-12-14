/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141987
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
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [1U] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-24)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)7)) ^ (((/* implicit */int) (unsigned char)120))))) : ((-(var_1))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_13))) < (((/* implicit */int) arr_1 [i_0]))))))));
                    var_16 += ((/* implicit */unsigned long long int) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [3LL]))) | (8589934584LL))), (((/* implicit */long long int) min((var_5), (((/* implicit */short) var_6)))))))));
                    var_17 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_0)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)2)) < (var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)1])) : (((/* implicit */int) var_0))))) : (max((var_14), (934578362U)))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2042920995694707925ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2]))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) | ((+(var_13)))));
    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_5))))))))));
}
