/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109481
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
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28036))) + (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((int) arr_0 [i_0]))) : (var_14))) - (((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) / (arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_17 = ((/* implicit */long long int) max((var_17), (min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) + (arr_3 [(short)1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (arr_0 [i_0]) : (var_14)))))))))));
                arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((arr_0 [i_2]) != (arr_0 [i_0])))) : (((/* implicit */int) min((min(((short)-28043), ((short)-28034))), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
                var_18 = max(((+(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) -4509076204787313003LL)))))), ((+(((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28028))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_0 - 4]), (((/* implicit */short) (!(arr_5 [i_1] [i_1]))))))) ? (1186150932) : (((/* implicit */int) (!(((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
            }
            for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 2) 
            {
                var_20 -= ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                var_21 += ((/* implicit */_Bool) min((((/* implicit */int) (short)28020)), ((~((~(((/* implicit */int) arr_8 [i_3] [i_3] [0LL]))))))));
                arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 4])) && (((/* implicit */_Bool) arr_6 [i_0 + 3]))))), (((((/* implicit */int) arr_6 [i_0 + 2])) << (((var_4) + (2096799273)))))));
            }
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0 - 4] [i_4 + 1] [i_4 + 1]));
                var_22 = ((/* implicit */int) arr_0 [i_1]);
                arr_15 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
            }
            var_23 = ((((((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 2]))) + (9223372036854775807LL))) << ((((((-(1186150916))) + (1186150938))) - (22))));
            var_24 = ((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [8U] [i_5])) && (((/* implicit */_Bool) 1385715839U))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 4])) ? (arr_12 [i_0] [i_5]) : (arr_12 [i_0] [i_5])))));
            var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (arr_3 [6U])));
        }
        for (signed char i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_29 [i_0] [i_6] [i_6] [i_7] [4LL] [0ULL] [i_7] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_12 [(unsigned char)4] [i_7])) > (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))))))));
                            var_28 ^= ((/* implicit */unsigned char) ((arr_8 [i_6] [i_7] [i_6 - 1]) ? (((/* implicit */long long int) arr_13 [i_0] [8])) : (-1510353692175595616LL)));
                            var_29 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (+((~(arr_28 [(_Bool)1] [i_6] [i_7] [i_8] [i_8])))))), (((((/* implicit */_Bool) min((arr_17 [9] [9] [9]), (arr_3 [i_9])))) ? (1510353692175595613LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_7] [i_9]))))))));
                            arr_30 [i_9] [i_7] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_8] [5ULL] [5ULL] [i_8])) ? (var_2) : (var_4))))))), (((long long int) ((long long int) arr_9 [i_0 + 2] [7ULL] [i_7] [7ULL])))));
                            arr_31 [i_7] [i_7] [i_7] [1] [(_Bool)1] [i_7] = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_3 [i_0 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_6])) && (((/* implicit */_Bool) var_5))))))))));
        }
    }
}
