/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131650
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 *= ((/* implicit */short) (unsigned short)47704);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [6LL] [6LL] [(_Bool)1] = ((((/* implicit */_Bool) 14936828435956360202ULL)) ? (max((3509915637753191413ULL), (((/* implicit */unsigned long long int) 918243135)))) : (((/* implicit */unsigned long long int) var_15)));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((14936828435956360202ULL), (3509915637753191414ULL)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 871894267U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(short)5] [i_2]))) : (var_16))))) : (((((/* implicit */_Bool) 16553779869627254661ULL)) ? (arr_6 [i_2]) : (arr_6 [i_1])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) max((((/* implicit */int) max((arr_11 [i_3 + 1] [i_3 + 4] [i_3 - 1] [i_3 + 4] [i_3 + 4] [(short)18]), (((/* implicit */short) var_2))))), (((((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3] [i_3 + 3] [(_Bool)1] [5LL] [i_3 + 3])) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 + 2]))))));
                            var_21 = ((/* implicit */int) ((short) 14936828435956360214ULL));
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) var_0)), (var_16))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3 + 4] [i_0] [(signed char)6] [18] [9ULL])) ? (((((/* implicit */int) (unsigned char)175)) | (((/* implicit */int) (unsigned char)204)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            arr_21 [i_0] [i_0] [i_1] [12] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2]);
                        }
                        var_23 = arr_8 [i_0] [(unsigned char)5] [(signed char)17];
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) (short)3840);
                            arr_28 [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_6])) == (((/* implicit */int) (unsigned char)81))));
                        }
                        arr_29 [i_6 + 2] [i_1] [i_2] [i_1] [(signed char)11] = var_3;
                        arr_30 [8ULL] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((long long int) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_0] [i_1] [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((~(4503599358935040ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_8]))))))));
                        arr_35 [i_8] [(short)7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [(unsigned char)17] [i_1] [i_1] [3] [i_1] [i_1]), (((/* implicit */unsigned short) var_13)))))) : (((var_10) / (var_10)))))));
                    }
                }
            } 
        } 
    } 
}
