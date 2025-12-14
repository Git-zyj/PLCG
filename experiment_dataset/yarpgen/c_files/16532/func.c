/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16532
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
    var_11 = (-(var_7));
    var_12 = ((/* implicit */long long int) max((var_10), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_5);
        var_13 = ((/* implicit */unsigned long long int) min((var_10), (max((2147483647), (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) var_1);
                            var_15 = min(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (unsigned char)49)))))), (((((/* implicit */_Bool) 2147483647)) ? (arr_5 [i_0] [i_0] [(short)3]) : (((/* implicit */int) (unsigned char)0)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_16 = max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) max((2147483644), (((/* implicit */int) var_3))))) % (min((var_7), (((/* implicit */long long int) arr_15 [(signed char)3])))))));
                        arr_17 [i_0] [i_1] [i_0] [8ULL] = ((/* implicit */short) (signed char)-17);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 11; i_7 += 3) 
        {
            var_17 = ((/* implicit */_Bool) var_3);
            arr_20 [i_0] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7 - 2] [i_7 - 2]))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) -6783623785155981817LL)) : (13070383950810862001ULL)))));
        }
        for (long long int i_8 = 3; i_8 < 8; i_8 += 3) 
        {
            arr_24 [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-20801))))))), (max((((((/* implicit */_Bool) (short)-28892)) ? (arr_23 [i_8]) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (2185133493U))))))));
            var_18 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) (short)-28873)), (0ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28892)) ? (((/* implicit */int) (short)-28892)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6549721587629206168LL))))) : (((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8))))) | ((+(((/* implicit */int) var_6))))))));
            var_19 = ((/* implicit */_Bool) ((short) max((min((((/* implicit */long long int) var_10)), (var_7))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((1047233695) - (1047233694)))))))));
        }
    }
}
