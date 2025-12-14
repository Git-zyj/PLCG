/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167668
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
    var_13 |= ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */short) ((signed char) 643900624));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14031)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) | (((((/* implicit */_Bool) 643900606)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-9182371548283239214LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)46)), (1224886231)))) ? (((/* implicit */int) ((_Bool) 105256390))) : (1490470148)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = (!(((((/* implicit */_Bool) ((int) 1023U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned char)249))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (signed char)-4)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_17 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 340375171U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (short)26122)))))));
                                var_19 = ((/* implicit */short) min((var_19), ((short)-667)));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((max((((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_1] [i_1]), (var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [(signed char)2] [i_1] [i_1]))) + (arr_5 [i_0] [i_1] [i_0] [4ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9659)) << (((59259004795270111ULL) - (59259004795270098ULL))))))))));
                arr_14 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) min((min((8504724185600286351ULL), (((/* implicit */unsigned long long int) arr_12 [i_0])))), (((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_0] [(unsigned char)8] [i_0] [(unsigned short)9] [i_0]))) : (14861147959670995180ULL)))))) ? (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)29123))))) : (((long long int) ((signed char) arr_0 [i_0]))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned long long int) ((int) -8088053768749128817LL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_22 = ((unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_1] [6ULL])), (arr_7 [i_0]))) + (((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_0] [i_1] [i_5] [i_0])))));
                    var_23 = ((/* implicit */long long int) min((-1224886232), (134217728)));
                }
                /* vectorizable */
                for (short i_6 = 1; i_6 < 7; i_6 += 3) 
                {
                    arr_21 [i_0] [i_0] [(signed char)9] [i_0] = ((/* implicit */signed char) arr_19 [i_1] [i_0] [i_6 + 1] [i_6 + 1]);
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((2147483647) + (((/* implicit */int) (signed char)-123)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)178))));
                                arr_29 [i_0] [i_0] [i_0] [i_6 + 1] [i_7] [i_8] &= ((/* implicit */unsigned int) (-(((unsigned long long int) 1131516313U))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) 
            {
                {
                    arr_36 [i_9] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)9705)))) ? (min((9431285454042393863ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1829260757U)) ? (327444228U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9712)))))))) : (((/* implicit */unsigned long long int) ((((((min((((/* implicit */long long int) 1131516313U)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (219))))))));
                    var_25 = ((/* implicit */unsigned short) (((+(arr_35 [i_9] [i_10] [i_11 - 1]))) | (((/* implicit */unsigned long long int) (~(((long long int) (signed char)127)))))));
                }
            } 
        } 
    } 
}
