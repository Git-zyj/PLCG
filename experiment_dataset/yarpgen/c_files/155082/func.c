/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155082
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [1LL] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_2 - 1])))) >= (max((7470680437574495246LL), (((/* implicit */long long int) arr_2 [i_2 - 1]))))));
                        var_14 = ((/* implicit */unsigned long long int) (signed char)-92);
                        arr_12 [(unsigned char)5] [i_1] [i_3] [i_3] = ((/* implicit */int) 1099547444U);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_15 *= ((/* implicit */unsigned int) ((_Bool) ((long long int) ((((/* implicit */_Bool) arr_5 [i_4] [2U] [i_2 + 1])) ? (2165119577882343530ULL) : (((/* implicit */unsigned long long int) var_9))))));
                            arr_17 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(var_11)));
                            var_16 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_9) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)-92)) + (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_0])))))))), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5669323728746014784ULL)))));
                            var_17 = ((((/* implicit */int) max((arr_14 [(unsigned char)8] [i_2 - 1] [i_1 - 1]), (arr_8 [i_1] [i_1])))) << (((((unsigned int) (-(arr_16 [i_1] [i_1] [i_1] [i_4])))) - (2755865425U))));
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                        }
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_8))))))))));
                        arr_20 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_7)))) ? (((/* implicit */unsigned long long int) 4233058318U)) : (((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_2 - 1] [i_1] [i_1 + 1])) ? (2165119577882343530ULL) : (((/* implicit */unsigned long long int) arr_16 [i_5 + 1] [i_2 + 1] [i_2] [i_1 - 1]))))));
                    }
                    arr_21 [i_1] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) max((2165119577882343530ULL), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~((~(18446744073709551603ULL)))));
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
