/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150477
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
    var_18 = ((/* implicit */unsigned int) (short)16816);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_0] [(_Bool)1] [i_0 - 1] [i_1] [i_2 + 2])) && (((/* implicit */_Bool) 1908237605U))));
                            var_19 = ((/* implicit */unsigned int) var_15);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_22 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((unsigned int) var_8))));
                        var_20 = ((/* implicit */short) ((long long int) ((int) (_Bool)1)));
                        arr_23 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)133)) ? (10500287652367198635ULL) : (7684914375741296069ULL));
                        arr_24 [i_0] = ((/* implicit */long long int) (_Bool)1);
                        var_21 = ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
        }
        var_22 *= ((/* implicit */short) var_17);
        var_23 = ((/* implicit */short) min((var_23), ((short)-10570)));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_29 [i_7] = arr_10 [i_7] [i_7] [i_7];
        var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((10500287652367198653ULL), (((/* implicit */unsigned long long int) (short)-25236))))) || (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)242)), ((short)10596)))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_19 [i_7] [(short)8] [12LL] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [(_Bool)1] [(_Bool)1] [i_7]))) : ((+(-3157166689040155296LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_5), (((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))))));
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 568849928096047132LL)) ? (((/* implicit */int) (short)4671)) : (((/* implicit */int) (unsigned char)251))))) & (((unsigned int) ((((/* implicit */_Bool) -8813078014667992530LL)) ? (1417869921605605805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        arr_34 [(unsigned short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((min((arr_32 [i_8]), (9635743633527522439ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_0))))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_9)))))));
        var_25 = ((_Bool) ((short) min((arr_31 [(_Bool)1] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))));
    }
    var_26 = ((/* implicit */unsigned char) var_9);
    var_27 = ((/* implicit */long long int) (short)-1101);
}
