/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131298
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_17)))) * (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) arr_1 [i_0])), (max(((unsigned short)41600), (((/* implicit */unsigned short) (signed char)-1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            var_21 = max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_4 [i_1 - 4] [i_1 - 2])) == (var_13)))));
            var_22 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */short) var_3)))))) : (var_7))) > (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) 1599640542)) ? (-2162101126800504884LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))), (((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_0] [i_0]))))))))));
                var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_3 [i_1 - 1] [i_1 + 4] [(_Bool)1]))) << (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_5 [i_0] [i_0] [i_2])))));
            }
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) arr_5 [(unsigned short)11] [i_1 + 4] [i_3]);
                arr_12 [i_3] [11U] [17LL] [0ULL] = ((/* implicit */unsigned char) arr_1 [(unsigned char)9]);
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) var_2);
                var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 3] [17LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_0] [i_1] [(unsigned char)19]))) & (((/* implicit */long long int) var_2))));
            }
            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
            {
                arr_18 [i_0] = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) max((min((arr_0 [i_0]), (((/* implicit */short) var_4)))), (((/* implicit */short) arr_15 [i_1 + 1])))))));
                arr_19 [i_0] [i_1 + 1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 - 3] [i_1 + 3] [i_1]))) <= (((long long int) arr_0 [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_20 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) var_10);
                arr_21 [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 2]))) / (((((/* implicit */_Bool) (signed char)-12)) ? (7202174530557200104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7026)))))));
                var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_0] [i_1] [i_5])) >= (((/* implicit */int) arr_17 [i_0] [i_1] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_9), (((/* implicit */long long int) var_6))))))) : (((unsigned long long int) arr_5 [i_1 - 4] [i_1 + 4] [i_1 - 4]))));
            }
            var_29 += ((/* implicit */unsigned char) ((arr_5 [i_1] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)12] [i_1 - 3] [(unsigned short)12])))));
        }
        var_30 = ((/* implicit */unsigned int) max((((var_6) ? (arr_9 [(short)20] [i_0]) : (arr_9 [i_0] [i_0]))), ((+(arr_9 [i_0] [i_0])))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), (arr_9 [i_0] [i_0]))))));
    }
    var_32 = var_12;
}
