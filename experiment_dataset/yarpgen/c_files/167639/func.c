/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167639
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)10)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) != (((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)103))))) >= (((((/* implicit */_Bool) (short)7680)) ? (1123173823U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5439))) : (18446744073709551615ULL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)227))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_5);
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(arr_5 [i_0] [i_0] [i_0]))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_18 [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967277U)) ? (arr_5 [i_5 - 3] [i_5 + 2] [i_5 + 1]) : (arr_5 [i_5 - 1] [i_5 + 2] [i_5 - 2]))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_5 + 2] [i_5 + 2]), (arr_10 [i_5 + 2] [i_5 + 2])))))));
                            var_19 = ((min((var_4), (((/* implicit */unsigned long long int) (unsigned char)215)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_0] [i_0] [19LL]), (min(((unsigned short)18571), (((/* implicit */unsigned short) (unsigned char)200)))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_2] [i_0] = ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((6487871834790306178LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_20 = ((/* implicit */int) arr_12 [19]);
        }
        arr_20 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28)))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (18446744073709551593ULL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned char)30)) / (((/* implicit */int) var_8))))))) > (3775989104U)));
}
