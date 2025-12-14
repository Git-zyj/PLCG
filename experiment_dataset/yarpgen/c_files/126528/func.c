/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126528
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
    var_10 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))))) == (((((/* implicit */_Bool) 192)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))))));
        var_11 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) 16776704U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((arr_0 [i_0]) << (((((/* implicit */int) (unsigned char)42)) - (42))))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] = arr_2 [i_0] [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (2147483647)));
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_12 = ((((((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_2 + 4] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (arr_12 [i_4 + 1] [i_2 + 4] [i_2 + 4]))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 + 1] [i_1]))) + (arr_8 [i_2 + 2]))) - (2306436423695142950LL))));
                        var_13 = ((/* implicit */int) ((signed char) arr_6 [i_1]));
                        var_14 = ((/* implicit */short) ((unsigned char) arr_5 [i_1]));
                        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)42)) | (((/* implicit */int) (short)-4042))));
                        arr_18 [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_14 [i_2 - 1] [i_2] [i_4 + 1]))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = var_4;
        var_16 = ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
    }
}
