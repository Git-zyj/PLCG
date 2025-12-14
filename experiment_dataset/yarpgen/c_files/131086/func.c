/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131086
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max((var_14), (((/* implicit */short) var_7))))) : (((/* implicit */int) var_18))))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)55767)) < (((/* implicit */int) (unsigned char)157))))) : (((((/* implicit */int) var_9)) + (((/* implicit */int) var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) var_7))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) == (var_1))))) == (var_1)));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_17);
        var_23 = ((/* implicit */unsigned char) ((var_17) / (((/* implicit */long long int) var_6))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_24 = ((/* implicit */short) max((min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (var_4))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((var_8) == (var_8))))))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) > (((/* implicit */int) max((var_12), (((/* implicit */short) var_7)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11)))) : (min((((/* implicit */long long int) var_14)), (var_17)))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_19)))))))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_15))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_17))));
                        arr_20 [7U] [(unsigned char)7] [i_1] [i_1] [(short)10] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_19)))) : (min((((/* implicit */long long int) var_5)), (var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (min((var_2), (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (var_4)))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_6)) : (var_19)))) < (min((var_8), (((/* implicit */long long int) var_9)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((var_3), (((/* implicit */long long int) var_7)))))))))));
                    }
                } 
            } 
        }
        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15)))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_4)))) : (min((((((/* implicit */_Bool) var_15)) ? (var_13) : (var_19))), (((/* implicit */unsigned int) min((var_9), (((/* implicit */short) var_7)))))))));
    }
}
