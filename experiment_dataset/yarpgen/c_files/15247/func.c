/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15247
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
    var_10 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned long long int) 1140920032U)), (var_6)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3154047274U)))) ? (var_4) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) 1140920022U)), (9223372036854759424ULL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_1))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12197)) ? (-5691983780783656137LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11745))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_12 [i_2] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854759424ULL))));
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (short)32765))));
            var_13 = ((/* implicit */unsigned long long int) var_4);
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_1))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_3]))))) ? (arr_16 [i_1] [i_3] [i_4] [i_4 + 1]) : (arr_16 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 1])));
                var_16 = ((/* implicit */_Bool) max((var_16), (arr_17 [i_1] [i_1] [(_Bool)1] [i_1])));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) (~(var_3)));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) (short)32765)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_4] [i_3] [i_3] [i_3] [6LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_13 [i_4 - 3] [i_4 + 1])) : (((/* implicit */int) (short)-15519))));
                    var_19 = (-(3894288133U));
                }
            }
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) (!(((-367384013) < (((/* implicit */int) arr_25 [i_3] [i_7]))))));
                var_21 = (signed char)117;
                var_22 = ((/* implicit */int) (short)11758);
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_3] [i_1])) ? (400679163U) : (((unsigned int) (unsigned char)242)))))));
            }
            var_24 = ((/* implicit */long long int) var_9);
            var_25 = ((/* implicit */signed char) -2068449568);
        }
        arr_26 [i_1] = ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((max((106105009986526094ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5691983780783656160LL)) ? (((/* implicit */int) arr_25 [i_1] [i_1])) : (((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned long long int) ((9167464320939290034LL) ^ (((/* implicit */long long int) var_4))))));
    }
}
