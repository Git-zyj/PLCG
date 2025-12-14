/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120925
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
    var_16 = ((unsigned char) 1023LL);
    var_17 = ((/* implicit */unsigned short) 1023LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3]);
                        arr_15 [i_0 - 2] [i_1 + 1] [i_2] [i_2] = ((/* implicit */signed char) min((min((min((3852475570809350498LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */long long int) ((unsigned short) 1023LL)))));
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_1 + 2] [i_2 - 1]))))));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_19 [i_0 - 1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_4] [i_1 + 1]), (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (arr_6 [i_0 - 3] [i_1]) : (((/* implicit */int) arr_11 [i_1] [(short)4] [i_2 - 1])))), ((~(((/* implicit */int) (signed char)127)))))))));
                        var_18 = ((/* implicit */short) var_7);
                        arr_20 [i_2] [i_1 + 2] [i_2] [i_4] [i_2] [i_4] = (((~(((((/* implicit */int) var_3)) | (var_1))))) / (min(((((_Bool)0) ? (((/* implicit */int) (short)21808)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))))));
                        arr_21 [i_0] [i_0 - 3] [i_0] [i_2] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_9 [i_2] [i_1 + 3] [i_2 + 1] [i_4])))), (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2 + 1])) : (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-49)) : ((-2147483647 - 1))))))));
                    }
                    var_19 = ((/* implicit */int) max((var_19), (max((((/* implicit */int) arr_13 [i_1] [i_1 + 4] [i_1 + 3] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)16)), (var_12)))) ? (min((arr_17 [i_1]), (((/* implicit */int) var_13)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_7 [i_0]))))))))));
                    arr_22 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (+(var_14)));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */int) ((short) (+(((/* implicit */int) arr_10 [i_5] [i_1 + 3] [i_5] [i_1 + 3])))))) - (((/* implicit */int) var_11)));
                                var_21 = -1366686211;
                                arr_29 [i_0] [(_Bool)1] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1749150811) : (((/* implicit */int) (unsigned char)239))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */int) arr_10 [i_5] [i_1 - 2] [i_1 - 1] [i_1 - 2])) << (((((/* implicit */int) arr_10 [i_5] [i_1 - 2] [i_5] [i_1 - 2])) - (35866)))))));
                                arr_30 [(signed char)22] [i_1] [i_5] [i_5] [i_5] [(signed char)20] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((413519401) << (((((/* implicit */int) (short)511)) - (509))))))) ? (((/* implicit */int) arr_8 [(signed char)0] [i_5] [(signed char)0] [(unsigned short)15])) : ((-(((/* implicit */int) min((arr_8 [i_0] [i_5] [i_7] [(unsigned char)16]), (var_13))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
