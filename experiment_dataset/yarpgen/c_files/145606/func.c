/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145606
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))))) ? ((~((+(var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12952)) ^ (2147483643))))));
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_3 [i_2] [i_0] [i_0])), ((-(((170412530) & (((/* implicit */int) arr_1 [i_2]))))))));
            var_22 = ((/* implicit */unsigned char) ((long long int) ((min((var_10), (((/* implicit */long long int) var_6)))) & (min((-2654229563960795958LL), (9223372036854775807LL))))));
            arr_6 [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)511))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_23 = ((_Bool) arr_8 [i_4 - 1]);
                        arr_13 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) (+(arr_4 [i_4] [i_3] [i_0])))) - (arr_5 [i_0] [i_4 - 1])));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_1))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [14LL] [i_3])))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) (~(4611686018426863616LL)));
        var_25 = ((/* implicit */long long int) ((_Bool) ((unsigned int) var_10)));
    }
    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        arr_17 [i_6] = ((/* implicit */short) min((((/* implicit */long long int) ((arr_12 [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 2]) == (arr_12 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 3])))), (((((/* implicit */_Bool) arr_12 [i_6 + 3] [i_6 + 3] [18U] [i_6 + 2])) ? (((/* implicit */long long int) arr_12 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])) : (var_1)))));
        var_26 = ((/* implicit */long long int) (+(max(((~(var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)6149)))))))));
        arr_18 [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)2)) + (((/* implicit */int) (_Bool)1))));
    }
    var_27 = ((/* implicit */unsigned short) var_14);
}
