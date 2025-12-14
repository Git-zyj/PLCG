/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159451
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) (-(-5653209772715810510LL)));
        var_15 = ((/* implicit */short) (_Bool)1);
        var_16 = ((/* implicit */int) (-((((_Bool)1) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_11 [i_1] [(short)3] [17ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_10))));
                        arr_12 [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)3]);
                        var_17 = arr_8 [i_4] [i_4] [i_4];
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(arr_8 [i_4] [i_2] [i_1])))) - (var_5)));
                        arr_13 [i_1] = ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))) != (((((/* implicit */_Bool) arr_6 [i_1] [5])) ? (arr_5 [(_Bool)1] [i_2] [i_3]) : (((/* implicit */long long int) var_1))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((~(arr_6 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)64)))))))));
    }
    var_20 = ((/* implicit */int) var_2);
}
