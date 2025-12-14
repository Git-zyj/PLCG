/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122608
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
    var_14 = ((/* implicit */short) min((((/* implicit */int) (signed char)121)), (((((/* implicit */_Bool) min((2209935222U), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) max((var_11), (var_11))))))));
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (signed char)16);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -2950975118524712215LL)) ? (11393835726863864512ULL) : (((/* implicit */unsigned long long int) 2088960))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) var_9);
                            var_20 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]);
                            var_21 = ((/* implicit */long long int) var_11);
                        }
                    }
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_0 [i_0])));
                        var_23 ^= ((/* implicit */unsigned long long int) var_2);
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 9395994009451647551ULL))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (-16784450)))) : (min((((/* implicit */unsigned int) (signed char)-106)), (var_12)))));
                    var_25 = ((/* implicit */unsigned int) max((max((var_2), (((/* implicit */short) min((((/* implicit */unsigned char) var_6)), ((unsigned char)255)))))), (var_7)));
                }
                for (int i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    var_26 -= ((/* implicit */unsigned int) arr_16 [i_1] [i_1]);
                    arr_18 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned long long int) arr_13 [i_6 - 1] [8] [i_1 + 1] [i_0] [i_0])), (4084775249900410047ULL))) : (((/* implicit */unsigned long long int) 1289465052U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1 - 1])) != (((/* implicit */int) arr_9 [(_Bool)1] [i_1 + 1]))))))));
                }
                for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    var_27 |= ((/* implicit */short) arr_17 [i_0] [i_1]);
                    var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((var_6) ? (arr_4 [(short)6] [i_1] [i_0]) : (((/* implicit */long long int) arr_14 [i_7 - 1] [i_0] [i_1 - 1] [i_1] [i_0] [i_0])))), (((/* implicit */long long int) var_5))))), (var_0)));
                }
                var_29 = ((/* implicit */unsigned short) ((((long long int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1])) >> (((((/* implicit */int) min((arr_12 [i_0] [i_1 - 2] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_0])))) - (65)))));
                var_30 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1 - 1] [i_1 - 2] [i_1] [(unsigned short)3]);
                var_31 = ((/* implicit */signed char) -2088961);
            }
        } 
    } 
    var_32 |= ((/* implicit */short) min((((/* implicit */long long int) ((signed char) max((var_0), (((/* implicit */unsigned long long int) var_1)))))), (((long long int) 3621719598U))));
}
