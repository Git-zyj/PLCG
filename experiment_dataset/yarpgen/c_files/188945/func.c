/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188945
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-1)));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_15);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */_Bool) arr_0 [i_1])) ? ((+(((/* implicit */int) (signed char)60)))) : ((-(var_8)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (9223372036854775804LL)));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [9LL] [i_3] [i_3 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_10))))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 11725012523946443795ULL))))) >= (((int) arr_9 [i_1] [i_3 - 1] [i_1]))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((-9223372036854775805LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((signed char) arr_6 [i_1] [i_1]))) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_2] [i_3 - 1]))))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_1] [(signed char)13])))) + (arr_8 [i_1])))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((_Bool) var_14)))));
}
