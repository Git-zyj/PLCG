/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104225
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_2 - 3] [(unsigned char)14] [i_0] = ((/* implicit */signed char) (-(3940649673949184ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_11 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19844))));
                            var_12 += ((/* implicit */signed char) var_6);
                            arr_14 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_5))))));
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            var_15 &= ((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))))));
                            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)19848)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 854283017)) ? (-854283017) : (((/* implicit */int) (unsigned short)65535))))));
                            var_17 = ((/* implicit */long long int) var_1);
                        }
                        var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (16202104030801157188ULL)))) && (((/* implicit */_Bool) var_5)))))));
                    }
                } 
            } 
        } 
        var_19 *= ((/* implicit */unsigned long long int) var_3);
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 854283017)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 5573110590908801248ULL))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-19844)) : (var_3)))) ? (854283017) : (((/* implicit */int) (unsigned short)9968)));
    }
    var_23 = ((/* implicit */short) max(((-(((/* implicit */int) min((var_5), (var_7)))))), (max(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3)))))))));
}
