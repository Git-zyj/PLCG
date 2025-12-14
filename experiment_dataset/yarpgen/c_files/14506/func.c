/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14506
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
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) var_13);
            arr_6 [(unsigned char)4] [7U] = ((/* implicit */short) arr_4 [i_0 + 1] [i_0 - 1] [i_1 + 1]);
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) min((min((arr_1 [i_0 - 2]), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1])))), ((-(arr_1 [i_0])))));
            var_17 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 3] [i_0 + 1]))))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (max((arr_0 [i_0 - 1]), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0])), (arr_0 [i_0])))) ? (arr_10 [i_3 - 2] [i_3 - 2] [i_3] [i_3]) : (min((arr_10 [i_2] [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) arr_11 [i_0] [i_2]))))))))));
                arr_12 [i_2] [i_2] [i_2] [(signed char)14] = ((/* implicit */int) min((arr_5 [i_3] [10]), (arr_5 [(unsigned char)10] [i_3])));
            }
            arr_13 [i_2] [i_2] [(signed char)14] = ((/* implicit */signed char) ((short) arr_1 [i_0 - 2]));
        }
        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            arr_16 [i_0] = ((/* implicit */_Bool) arr_1 [(signed char)8]);
            arr_17 [(signed char)14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_4 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)117))) ^ (-3984869261479857478LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0 - 1] [i_4 + 1]), (arr_8 [i_0 - 1] [i_4 + 1])))))));
            var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_7 [i_4 + 1] [i_0 - 3])) * (((/* implicit */int) arr_5 [i_4] [i_4 - 1]))))));
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [1] [i_0 + 1]))));
                var_21 = ((/* implicit */short) ((unsigned int) arr_18 [i_0 - 2] [i_0 + 1]));
                arr_22 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) (+(-3984869261479857478LL)));
                var_22 = ((/* implicit */int) ((unsigned char) max((arr_0 [i_5]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_5] [i_6 + 2])) < (-1555473122)))))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_0 - 3] [i_6 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 2609443303344951620LL)) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) arr_21 [i_0 - 1] [i_0] [i_6 - 1]))));
            }
            /* LoopSeq 3 */
            for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                var_24 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_20 [i_0]))))) || (((/* implicit */_Bool) arr_18 [i_5] [i_7]))))) != (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_7 + 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) ((13LL) >= (((/* implicit */long long int) arr_23 [i_0] [i_0])))))))));
                var_25 -= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [(short)5] [i_0 + 1]))))) ? (((/* implicit */int) arr_19 [(unsigned char)4])) : (((/* implicit */int) arr_21 [12] [i_0 + 1] [i_7 + 2]))))));
                var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_21 [(short)6] [i_5] [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)11] [i_0 - 3])))))));
            }
            for (signed char i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
            {
                arr_28 [i_0] [i_0] [(signed char)0] = ((/* implicit */int) arr_19 [i_8 - 1]);
                var_27 = ((/* implicit */unsigned int) 2147483647);
            }
            /* vectorizable */
            for (signed char i_9 = 2; i_9 < 15; i_9 += 4) /* same iter space */
            {
                arr_32 [i_9 + 1] [(signed char)2] [(signed char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)61))));
                var_28 = ((unsigned int) arr_11 [i_0 - 2] [i_0 - 3]);
                var_29 += ((/* implicit */unsigned int) arr_7 [i_9 + 1] [i_9 + 1]);
            }
        }
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 14; i_10 += 1) 
        {
            var_30 = (-2147483647 - 1);
            var_31 = ((/* implicit */_Bool) arr_18 [i_0 - 3] [i_0 + 1]);
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_10 + 1] [i_0 - 2] [11] [i_10]))));
        }
    }
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
}
