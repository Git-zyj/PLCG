/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149003
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) min((var_13), ((+(((((/* implicit */_Bool) (((_Bool)1) ? (2017612633061982208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) -693481415)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) : (2935888714U))))), (3874726666U)));
            var_15 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [16] [i_1])) ? (8388096) : (((/* implicit */int) var_4))))) ? (arr_2 [i_1] [i_0] [i_0]) : (8ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)17760)))))))));
        }
    }
    for (unsigned char i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_12 [i_4] [8] &= var_6;
                    arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (arr_1 [i_3] [i_3])))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (signed char)42))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_5))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) (unsigned short)16256);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 8; i_6 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), (((4203290082U) << (((((/* implicit */int) (short)-17743)) + (17756))))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_9 [(_Bool)1])))))))));
                    arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_2 + 3] [3ULL])) <= (((/* implicit */int) (!(((/* implicit */_Bool) -12))))))) ? (((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    }
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17743)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (881697975U)));
}
