/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13473
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
    var_16 = ((/* implicit */unsigned short) ((3730179973516368789ULL) / (((/* implicit */unsigned long long int) var_8))));
    var_17 = ((/* implicit */unsigned short) ((1175863871) / (-630467439)));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (var_8))))))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2] [i_3]))))))));
                        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 549755813872LL)))))) : (((arr_5 [i_3] [i_1]) & (((/* implicit */unsigned long long int) 708240735U))))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned int) (((-(2147483641))) / (((int) 1644217390580077718ULL))));
    }
}
