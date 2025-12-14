/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107313
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32767))) : (4823814966822772227LL))), (((/* implicit */long long int) (short)-18))));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(arr_7 [i_0] [i_1] [i_0 + 1])));
                    arr_12 [i_0] [i_1] = ((/* implicit */int) ((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) | (arr_9 [i_0] [i_0] [i_0 - 2] [i_0 - 2]))) & (((arr_9 [i_0] [i_0] [i_0 - 1] [(_Bool)0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_12 -= ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))));
                arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_10), (var_6)))) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) (short)32763))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(min((min((arr_15 [i_3] [i_4]), (((/* implicit */int) (_Bool)1)))), (arr_21 [i_5 - 1]))))))));
                            var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_9 [i_3 - 1] [i_5 + 1] [i_5] [i_3 - 1]) << (((((((/* implicit */_Bool) (short)32764)) ? (var_8) : (arr_1 [i_4] [12LL]))) + (3118925288793699917LL))))))));
                            var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_5 + 1])) ? (arr_2 [i_3 - 1] [i_6]) : (arr_2 [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_4]))) : (arr_18 [i_3] [(_Bool)1] [i_3]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -5775441438772199104LL)) ? (((((/* implicit */_Bool) 1695005923U)) ? (1517691872827822200ULL) : (2017612633061982208ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_0), ((short)-32758)))))))));
    var_17 = (-(((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (7980712165498317393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((long long int) 0ULL))))));
}
