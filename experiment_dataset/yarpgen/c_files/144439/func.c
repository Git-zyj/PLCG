/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144439
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (1387828409109174828LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) ((((/* implicit */int) (short)-29850)) >= (((/* implicit */int) (unsigned short)0))))))))) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
        var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) (~(18446744073709551615ULL)));
                        var_16 = ((/* implicit */short) (unsigned short)0);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 + 2]))))))))));
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)3228))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))) != (((/* implicit */int) ((unsigned char) arr_10 [i_1] [i_1] [i_1])))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3251))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [23LL])) : (((/* implicit */int) (unsigned short)1536))))) ? (((((/* implicit */_Bool) (short)3228)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))) : (((/* implicit */unsigned int) arr_7 [i_5] [i_5]))));
    }
    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        var_23 = (signed char)-67;
        var_24 = ((/* implicit */unsigned int) max(((unsigned short)2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)38))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_25 = arr_13 [i_7] [i_7];
        var_26 = ((/* implicit */_Bool) arr_19 [i_7]);
    }
}
