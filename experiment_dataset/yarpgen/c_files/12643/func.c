/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12643
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
    var_10 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0)))))) ? (min((((/* implicit */unsigned long long int) var_8)), (max((4671293510772359866ULL), (((/* implicit */unsigned long long int) -9133479116348296105LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [i_0])) % (arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_12 ^= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                        var_13 ^= ((/* implicit */int) ((short) arr_6 [i_0] [0LL] [i_3 + 1]));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_14 *= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_0]);
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_3 - 1] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) : (((unsigned long long int) 13775450562937191718ULL))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5])) ? (1613766332) : (((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] [i_5 - 2]))));
                            var_17 -= arr_3 [i_3] [i_1];
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_5] [i_1])))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned short)8] = ((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_2] [i_1 - 1]) | (arr_8 [i_0] [i_0] [i_2] [i_1 + 2])));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_2] [(unsigned char)2] [(unsigned short)11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((-(arr_3 [i_0] [(_Bool)1]))))))));
                            var_20 ^= ((unsigned long long int) (!(arr_15 [i_6] [i_6] [i_6 - 1] [i_6])));
                        }
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(min((((/* implicit */int) var_2)), (var_1)))))) < (((var_3) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_7))))))));
}
