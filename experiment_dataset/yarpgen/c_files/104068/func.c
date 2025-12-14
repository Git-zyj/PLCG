/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104068
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [7ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((var_4) ? (var_10) : (((/* implicit */int) (_Bool)0)))) >> ((~(18446744073709551615ULL)))))), (((unsigned int) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_12 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (((((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)120)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_9)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) arr_8 [8] [i_1] [9ULL] [i_3] [i_1] [i_2]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 *= ((/* implicit */signed char) arr_5 [(_Bool)1] [i_3] [i_3]);
                            var_14 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max(((signed char)50), ((signed char)-96)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)223)) >= (((/* implicit */int) (unsigned char)19))))) : (max((((/* implicit */int) (short)-3420)), (var_11))))));
                        }
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_9 [i_0])))) ? (((((((/* implicit */_Bool) arr_5 [(short)8] [i_0] [(short)14])) ? (15560014860434249663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)5] [i_0] [i_0] [i_0]))))) >> ((((-(-4806400622311381156LL))) - (4806400622311381104LL))))) : (((/* implicit */unsigned long long int) -330612572752360566LL))));
        arr_12 [i_0] [4ULL] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) - (var_1)))) ? ((~(arr_14 [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)91))))))) ? ((+(arr_14 [i_5] [i_5]))) : (max((((var_4) ? (arr_14 [i_5] [i_5]) : (arr_14 [i_5] [i_5]))), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5))))));
        var_17 = (-((+(((/* implicit */int) (signed char)7)))));
    }
    var_18 = ((/* implicit */short) var_2);
}
