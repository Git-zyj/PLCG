/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132789
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
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [2] = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1 - 1] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-((-(var_2))))) : ((+(((/* implicit */int) var_6))))));
                        arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? ((+((+(var_11))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_9))))))));
                    }
                    arr_17 [(short)10] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned char)248)) ? (-7738562473921011811LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))));
                }
            } 
        } 
        arr_18 [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */unsigned char) (~((+(var_10)))));
        arr_22 [i_4] [i_4] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)31511))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) (+(10851038842509447438ULL)));
        arr_26 [i_5] [i_5] = var_14;
    }
}
