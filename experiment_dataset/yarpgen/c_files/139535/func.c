/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139535
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)8)), ((unsigned short)259)))), ((-(arr_4 [(unsigned short)3] [i_1] [i_1])))))), (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [(short)1])))))));
                var_12 = ((/* implicit */_Bool) (+((-(((/* implicit */int) max((arr_2 [i_1]), (arr_2 [3U]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_7 [i_3]))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_3] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_9 [(signed char)7] [i_3] [i_4 - 2]), (((/* implicit */long long int) arr_7 [i_2]))))) ? (max((arr_8 [i_3]), (((/* implicit */long long int) arr_13 [i_2] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3] [i_2])))))))), (arr_8 [i_3])));
                            var_14 = ((/* implicit */long long int) max((var_14), (min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)259)), (((((/* implicit */_Bool) (unsigned short)65409)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_13 [i_2] [6LL]))))))), (min((((/* implicit */long long int) arr_6 [i_4])), (arr_14 [i_2 + 4] [i_2 + 4] [i_5] [(_Bool)1])))))));
                            arr_16 [i_2 + 2] [i_3] [i_3] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_13 [3U] [3U]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [(signed char)11]))) : ((~(min((arr_9 [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_12 [i_3]))))))));
                        }
                    } 
                } 
                arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_12 [i_3])), (arr_9 [i_3] [i_3] [i_3])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_7 [7ULL])) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [10U]))))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_9 [(_Bool)1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [3LL]))))))) : ((+(max((arr_14 [i_3] [i_3] [i_3] [i_2]), (((/* implicit */long long int) arr_10 [i_2] [i_3] [(_Bool)1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2 - 3] [i_2 - 3] [0] [i_7 - 2])) ? ((-((+(((/* implicit */int) arr_20 [i_2] [i_3] [i_6] [(signed char)5])))))) : ((-(((/* implicit */int) (unsigned char)242))))));
                            arr_24 [i_2] [i_2 + 1] [i_3] [(signed char)10] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_2 - 2] [i_3] [i_6 + 1] [i_7 - 2]))))), (min((((/* implicit */unsigned long long int) max((arr_14 [i_3] [i_3] [i_3] [i_2]), (((/* implicit */long long int) arr_10 [i_2 + 4] [i_2 + 4] [i_6]))))), (min((((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [i_3] [i_3])), (arr_21 [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) (+((-(((/* implicit */int) min((arr_23 [16U] [10LL] [10LL] [i_9 - 1]), (((/* implicit */unsigned short) arr_26 [(unsigned char)21] [i_3] [(short)21])))))))));
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_23 [i_9 - 1] [(signed char)10] [(signed char)10] [(signed char)8])) ? (arr_7 [i_3]) : (((/* implicit */int) arr_25 [(unsigned short)4] [i_3] [10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 2] [i_8])))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [1ULL] [1ULL] [i_3] [i_3] [i_3]))))) : (min((-2575499111427308557LL), (((/* implicit */long long int) min((1220171556U), (((/* implicit */unsigned int) (unsigned short)65409)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
