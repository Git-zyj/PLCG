/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125175
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
    var_17 = ((/* implicit */long long int) var_16);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)50)))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (var_14)))) : (min((((/* implicit */long long int) arr_4 [i_0] [(unsigned char)0])), (min((var_8), (((/* implicit */long long int) var_7))))))));
                    var_19 = ((/* implicit */long long int) (_Bool)1);
                    var_20 = ((/* implicit */unsigned char) 2643039403U);
                    arr_11 [i_0] [19ULL] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_6 [i_0])))) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)112))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) 3221225472U);
        arr_14 [(signed char)24] |= ((/* implicit */int) ((((((/* implicit */int) var_16)) < (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)2)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 3848966768U)) || (((/* implicit */_Bool) (unsigned char)184)))))))) : (var_8)));
    }
    var_22 = ((/* implicit */short) (unsigned char)178);
}
