/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1364
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
    var_15 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_0)))) : (((/* implicit */int) min((var_3), (var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_17 = max((arr_2 [(unsigned short)9]), (min((arr_3 [i_1] [i_1 - 1]), (((/* implicit */long long int) (short)-17516)))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_1 - 1]), (arr_1 [i_0] [i_1 + 1])))) : (min((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)124))));
            var_20 = ((/* implicit */unsigned char) (short)17517);
            arr_7 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (+(arr_3 [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_21 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) min(((signed char)0), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned int) (unsigned short)58230)), (arr_4 [i_0])))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                for (int i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((((arr_3 [i_0] [i_3]) | (((/* implicit */long long int) arr_1 [i_0] [i_5])))) & (((/* implicit */long long int) min((3194186161U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0]))))))) | (arr_3 [i_0] [i_4])));
                        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) arr_8 [i_0]))))))) ? (min(((+(arr_0 [i_0]))), (10819782967483443847ULL))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_3] [(unsigned short)11] [i_5] [i_5]))))), ((+(arr_0 [i_3])))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) arr_12 [8ULL] [8ULL] [(_Bool)1]);
        }
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_2 [i_0]))));
    }
    var_26 = ((unsigned int) 2771334431U);
}
