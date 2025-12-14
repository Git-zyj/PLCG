/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120333
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
    var_13 += ((/* implicit */long long int) (-(var_9)));
    var_14 = (!(((/* implicit */_Bool) var_6)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 1] [6ULL]))))) ? (min((min((((/* implicit */unsigned long long int) 1793069900U)), (arr_2 [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((arr_4 [i_0 - 1] [i_1] [i_0]) % (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))))));
            var_15 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))));
        }
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)11978)) : (((/* implicit */int) (unsigned short)59119))))))), (((arr_4 [i_2] [i_2 + 1] [i_0]) - (arr_4 [i_0] [i_2 + 1] [i_0])))));
            var_16 = arr_0 [i_2];
        }
        for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned int) min((arr_11 [i_0]), (((/* implicit */int) (unsigned short)59123))));
            var_17 = ((/* implicit */unsigned long long int) ((short) arr_2 [1ULL] [i_0] [i_3]));
            arr_15 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) (short)20632)) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33948)))));
        }
        arr_16 [i_0] [(unsigned char)6] &= ((((/* implicit */_Bool) ((unsigned char) arr_12 [2U]))) ? (((((/* implicit */_Bool) ((3948638247U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59119)))))) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1])) : (min((((/* implicit */int) (unsigned short)0)), (arr_11 [(unsigned short)0]))))) : (((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_13 [i_0] [10] [10])) ? (((/* implicit */int) (unsigned char)73)) : (arr_11 [0LL]))))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 4) 
    {
        var_18 -= ((((/* implicit */int) (unsigned short)31592)) - (((/* implicit */int) (unsigned short)33944)));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 6; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-23506)) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)33942)) == (((/* implicit */int) (signed char)20)))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (arr_0 [i_5])));
                }
            } 
        } 
    }
}
