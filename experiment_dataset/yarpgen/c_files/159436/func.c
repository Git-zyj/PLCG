/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159436
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)15358)) ? (8893466619614687119LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_12)))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) ((signed char) ((unsigned long long int) (+(var_6)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+((-(var_17))))))));
                        arr_10 [i_2] [i_2] [0] [i_2] [i_1] = (((!(((/* implicit */_Bool) 4294967295U)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) (-((-(var_4)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [i_1] [i_3] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_13))))));
                            var_23 = ((/* implicit */_Bool) ((long long int) var_6));
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned long long int) ((signed char) var_14));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) var_0)) : (var_10))))))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_25 |= ((unsigned long long int) (+((-(var_14)))));
            var_26 = ((/* implicit */unsigned char) (-((~((-(var_0)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_27 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_8))))));
        arr_25 [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) var_2));
    }
    var_28 = ((/* implicit */unsigned long long int) var_4);
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(0LL))))))))))));
}
