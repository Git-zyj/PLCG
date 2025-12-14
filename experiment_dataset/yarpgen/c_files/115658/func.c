/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115658
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = var_0;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_7 [i_2] [i_1] [i_0] [i_0] = ((unsigned long long int) ((arr_2 [i_1 + 2]) & (((((/* implicit */int) (signed char)99)) & (((/* implicit */int) arr_3 [i_1 + 1] [i_0]))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((819165300U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38227))))))));
                arr_8 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2] [i_2]))))), (((long long int) (unsigned short)28674))))) : ((-(14748036152864501898ULL)))));
            }
            var_17 = ((/* implicit */unsigned short) var_3);
            arr_10 [i_1] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned short)65535)), ((-(((/* implicit */int) (short)6024)))))), (((/* implicit */int) (_Bool)1))));
        }
        var_18 = ((((/* implicit */int) var_0)) + (((/* implicit */int) ((signed char) (short)24868))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)38227)) : (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))), (max((((/* implicit */long long int) (_Bool)1)), (4952013785552767772LL)))));
    }
    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) max((arr_16 [i_4]), (arr_17 [i_4])))) % (((/* implicit */int) var_9))))));
        arr_19 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_16 [i_4])), (((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
        var_19 = ((/* implicit */unsigned short) min((7060009906442179807ULL), (((/* implicit */unsigned long long int) (signed char)18))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) var_8);
            var_21 = ((/* implicit */unsigned short) arr_22 [i_4] [i_4] [i_5]);
        }
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6] [i_6]);
        var_22 = ((/* implicit */short) var_9);
        arr_26 [i_6] = ((/* implicit */unsigned short) min((min((9223372036854775807LL), (((/* implicit */long long int) arr_17 [i_6])))), (((long long int) var_4))));
        var_23 = ((/* implicit */int) (-(((long long int) ((signed char) (unsigned short)19963)))));
    }
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10))))) == (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned short)12122)) : (((/* implicit */int) var_4)))))), (((1212751260662842015LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
    var_25 = ((/* implicit */long long int) var_1);
}
