/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11670
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
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), ((~(var_7)))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_14))) || (((/* implicit */_Bool) var_11)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 2]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [17] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [22LL])))) ? (((/* implicit */int) arr_5 [i_0 - 1])) : ((~(((/* implicit */int) (unsigned short)65535))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (_Bool)1))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3003062609908150429ULL)) ? (3003062609908150428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)8]))))) <= (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0])))));
        var_25 *= ((/* implicit */unsigned long long int) ((arr_7 [2ULL]) & (arr_7 [18ULL])));
        arr_12 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */signed char) arr_6 [i_3] [i_3]);
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-32476)) / (((/* implicit */int) (_Bool)1))))) / (((long long int) 3003062609908150443ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [(short)9] [i_3] [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [9LL])))))) || (((/* implicit */_Bool) arr_8 [i_3] [i_3] [15ULL] [15ULL])))))) : (((arr_6 [i_3] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))));
        var_27 = ((/* implicit */signed char) 15443681463801401173ULL);
    }
}
