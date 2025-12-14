/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134694
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
    var_20 = var_3;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)21015))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [(_Bool)1])) : (5140117789962150725LL))))) % (((/* implicit */long long int) var_18))));
        arr_2 [i_0] = ((/* implicit */unsigned short) -9223372036854775794LL);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (var_6)));
                            var_23 &= ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_0] [(unsigned short)13] = ((/* implicit */long long int) var_15);
            arr_16 [i_0] = ((/* implicit */unsigned long long int) 987077551);
        }
        for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_5 + 1]);
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_11))));
        }
        arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (11881936397200690474ULL)));
        var_26 = max((max((((/* implicit */int) var_0)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))))), (((/* implicit */int) (unsigned short)45711)));
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_8)))) ? (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))))) : (((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6] [i_6 - 1] [(signed char)10] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14)))))) ? (arr_1 [i_6]) : (((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_6])), (max((((((/* implicit */int) (unsigned short)654)) >> (((((/* implicit */int) var_9)) - (41350))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_6] [i_6])), (var_17))))))));
        arr_26 [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1])) ? (arr_14 [i_6] [i_6] [(unsigned short)1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))))) & (var_15)));
        var_27 = ((/* implicit */int) max((var_27), (var_1)));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_8), (var_17)))) & (((((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1] [i_6])) | (((/* implicit */int) min(((unsigned short)41428), (((/* implicit */unsigned short) (unsigned char)247))))))))))));
    }
    var_29 = var_14;
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)34543)) : (((/* implicit */int) var_3))));
    var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)43568)) : (var_1)));
}
