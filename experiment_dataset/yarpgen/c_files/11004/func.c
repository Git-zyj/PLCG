/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11004
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
    var_11 = ((/* implicit */short) (((+(((/* implicit */int) var_3)))) - (((/* implicit */int) var_6))));
    var_12 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((16932141053383684853ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */unsigned long long int) var_9)) / (var_4)))))) ? (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)7891)) ? (((/* implicit */int) (short)-5164)) : (((/* implicit */int) (short)8587)))))) : (var_9)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            arr_9 [14ULL] [i_2] &= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_5))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1608275094U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) var_3)), (var_4)))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((+(((/* implicit */int) var_1))))));
                            arr_26 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2396)) ? (734258548U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)127))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_2)) > (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            arr_30 [i_7] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(min((((/* implicit */unsigned long long int) var_1)), (var_10)))))));
                        }
                        arr_31 [i_1] = ((/* implicit */unsigned int) var_5);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_7))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_35 [i_1] [i_1] = ((/* implicit */signed char) var_1);
            arr_36 [i_1] = ((/* implicit */unsigned long long int) var_1);
        }
        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (short)2692)) ? (((/* implicit */int) (short)-7893)) : (2147483625)))))) ? (((((/* implicit */_Bool) var_0)) ? (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10)))))));
                        arr_45 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (var_9)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_19 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        arr_46 [i_1] [i_9 - 1] [i_1] [i_11] [i_9] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_0)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13850589969470195067ULL)) ? (((/* implicit */int) (short)10995)) : (((/* implicit */int) (short)-24099))))));
                    }
                } 
            } 
            arr_47 [i_1] [i_1] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
            arr_48 [i_1] [10ULL] [i_9] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_9))) : (((((/* implicit */_Bool) var_3)) ? (((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_7))))));
        }
        for (int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_52 [i_1] [i_12] = ((/* implicit */unsigned int) var_4);
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))) ? ((-(var_10))) : (((((((/* implicit */_Bool) var_6)) ? (var_10) : (var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            arr_53 [i_12] [i_1] [i_1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_1))))));
            arr_54 [i_1] = ((((/* implicit */_Bool) var_4)) ? (var_10) : (((((/* implicit */_Bool) var_2)) ? (((2252349132804379591ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
            arr_55 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_9)))) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        }
    }
}
