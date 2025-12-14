/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167904
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
    var_15 = var_5;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((arr_0 [i_0]), (arr_0 [i_1])))));
            var_17 = min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((max((var_6), (((/* implicit */unsigned long long int) arr_4 [i_0])))) ^ (((/* implicit */unsigned long long int) (-(var_4))))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */long long int) arr_6 [i_0]);
            arr_10 [i_0] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(2679217095458373079LL))))));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_0])))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(-1))))))))))));
            var_20 = ((/* implicit */unsigned int) arr_5 [i_3]);
        }
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)5] [i_0])) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(-1)))));
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((137438953471ULL) << (((((/* implicit */int) (short)-13711)) + (13712)))))) ? (arr_15 [i_4]) : ((+(arr_15 [i_4])))));
        arr_18 [(short)2] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_4])))))));
        arr_19 [i_4] = ((/* implicit */unsigned int) arr_16 [i_4]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (short)32114);
                    arr_25 [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_13)))) ? (var_12) : ((~(((/* implicit */int) arr_20 [i_5] [i_5 + 1] [4LL]))))));
                }
            } 
        } 
        arr_26 [i_4] [(signed char)20] = ((/* implicit */short) ((int) arr_20 [i_4] [i_4] [i_4]));
    }
    var_23 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_13))), (((7997978274925697802ULL) << (((var_9) - (1078991876)))))))) ? (((/* implicit */unsigned int) (+(var_12)))) : (var_4));
    var_24 &= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_12)))))))));
}
