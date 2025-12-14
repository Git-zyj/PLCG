/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135424
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
    var_19 = ((/* implicit */short) (((_Bool)1) ? (((var_17) ^ (((long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned int) ((unsigned char) min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 1295279237421757434ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3] [i_1 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) (-(((int) (_Bool)1)))))));
                        var_22 -= ((/* implicit */int) ((short) (~(arr_7 [i_0 + 2] [i_0 + 2] [i_2]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 1] [i_1 - 1])))));
        }
        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
        {
            var_24 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))) % ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1244613138)))));
            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1])))) : ((-(((/* implicit */int) (_Bool)1))))));
        }
    }
    var_26 += ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 4949350457981077303LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4949350457981077303LL))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17249)))));
}
