/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129850
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 3112673288U)) ? (((((/* implicit */_Bool) var_7)) ? (1182294029U) : (((/* implicit */unsigned int) var_12)))) : (((unsigned int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((1152921504606781440ULL), (((/* implicit */unsigned long long int) (signed char)64)))))));
                            arr_11 [3] [i_0] [4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2])))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_12)) : (1182294009U)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned short)0)))))) : (min((arr_0 [i_0 - 1] [i_1 + 3]), (arr_0 [i_0 - 2] [i_1 + 1]))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                arr_14 [4] = max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (2842156503U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))));
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), ((unsigned char)182))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17853))) | (2836354386916263078ULL))))))));
                            }
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) ^ (((/* implicit */int) (unsigned char)15))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_10);
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) ((int) ((((var_12) >> (((/* implicit */int) (unsigned short)0)))) <= (((/* implicit */int) var_1)))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) & (arr_17 [(unsigned short)7])))) ? (max((1152921504606781455ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((_Bool) 268435448)))));
        var_22 = ((/* implicit */unsigned long long int) ((int) arr_15 [i_6]));
        var_23 = ((/* implicit */int) var_9);
        arr_22 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) * (arr_17 [i_6])));
    }
}
