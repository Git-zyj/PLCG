/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188830
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (~(17629923991681412613ULL)));
        var_14 = ((/* implicit */unsigned char) arr_2 [(signed char)4]);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] [(unsigned char)9] [(unsigned char)9] [i_2] [(unsigned char)4] = ((/* implicit */unsigned char) arr_1 [i_3]);
                        arr_16 [i_1] [i_2] [(signed char)2] [i_4] = ((/* implicit */long long int) min((arr_11 [(signed char)2] [i_2] [i_3] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [(signed char)6])) : (((/* implicit */int) arr_6 [i_2]))))))))));
                        var_15 = ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((6758187733054364144LL), (((/* implicit */long long int) arr_9 [i_1] [i_1]))))))) : (-3302792428027843366LL));
                        arr_17 [i_1] [i_3] [6LL] [(signed char)10] [(signed char)10] |= (signed char)127;
                        arr_18 [i_1] [(signed char)10] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_12 [i_1] [i_4 - 1] [i_2] [i_4 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) 12636071066879928330ULL);
    var_17 = ((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)255)))))))));
    var_18 = ((/* implicit */unsigned char) var_0);
}
