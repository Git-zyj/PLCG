/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174359
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
    var_13 = ((/* implicit */unsigned int) ((min((max((1693792336), (((/* implicit */int) (_Bool)0)))), (((66846720) % (((/* implicit */int) (signed char)-101)))))) >> (((((((/* implicit */int) ((unsigned short) 1125899906842112ULL))) - (var_9))) - (969888310)))));
    var_14 = ((/* implicit */int) (+(var_0)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] [i_0 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((int) (((((_Bool)0) ? (((/* implicit */int) var_3)) : (var_2))) ^ (((/* implicit */int) ((short) var_7))))));
                                arr_15 [i_4] [(signed char)10] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((653380950U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) (+((+(var_2)))))) : (min((1050321538U), (((/* implicit */unsigned int) arr_13 [i_0] [i_1 + 1] [i_0] [i_3]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */short) min((9007199254740988LL), (9223372036854775807LL)));
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (_Bool)1)), (3261996356U))))) ^ (((/* implicit */int) ((unsigned char) arr_8 [i_2] [(_Bool)1] [(signed char)9])))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [(_Bool)1] [0LL])) ? (((/* implicit */int) var_3)) : (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_2))))) : (max((((/* implicit */int) var_6)), ((-2147483647 - 1))))))), (max((((/* implicit */unsigned long long int) var_0)), (12880813971635180459ULL))))))));
                            arr_21 [i_2] [i_0] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((int) var_1));
                        }
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_1 - 1]))))), (-6054631214097062197LL))))));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1])))))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1])) < (((/* implicit */int) arr_9 [i_0 - 1])))))));
                        var_18 += ((/* implicit */_Bool) ((unsigned char) max((((((/* implicit */int) arr_1 [(unsigned char)6] [(unsigned char)6])) << (((((/* implicit */int) (signed char)98)) - (97))))), (((/* implicit */int) var_11)))));
                        var_19 = 1972211339U;
                    }
                    arr_26 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)13237)))) % (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_23 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_2 - 1]))))));
                    arr_27 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) min((((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_18 [i_0])))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775781LL))) + (41LL))))) : (((((/* implicit */int) var_7)) << (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((var_1) / (((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)57))))));
}
