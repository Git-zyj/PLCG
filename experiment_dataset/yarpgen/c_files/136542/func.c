/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136542
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
    var_14 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) var_3);
                        var_16 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_4 [(signed char)6] [i_2] [i_3])), (12448991169528063936ULL))))) >> ((((~(((/* implicit */int) arr_3 [i_0])))) - (27)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_14 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */signed char) ((min((arr_2 [i_0 + 2] [i_1 + 1]), (arr_2 [i_0 + 1] [i_1 + 1]))) / (((arr_2 [i_0 - 2] [i_1 - 2]) * (((/* implicit */unsigned int) 1049030846))))));
                        arr_15 [(signed char)15] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4]))))), (((max((var_4), (arr_2 [i_0] [i_1]))) ^ (((/* implicit */unsigned int) min((1049030846), (((/* implicit */int) arr_3 [i_0])))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_10))))) ? (arr_5 [i_1] [i_1] [i_1 + 1]) : (((/* implicit */int) arr_12 [i_0] [(short)12])))))));
                        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) & (var_3)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_19 *= ((/* implicit */unsigned char) (((-(arr_18 [i_5] [i_1] [i_0] [i_0] [i_0 - 1]))) != (((((/* implicit */_Bool) 774443179)) ? (((/* implicit */int) (_Bool)1)) : (-1049030847)))));
                            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (2343495566U) : (((/* implicit */unsigned int) arr_5 [i_6] [i_1 - 1] [i_0])))) * (arr_2 [i_1 + 1] [i_6])));
                            var_21 ^= ((/* implicit */unsigned int) ((max((arr_11 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_5]), (arr_11 [i_1 - 1] [(_Bool)0] [i_0 - 1] [(_Bool)0]))) / (((((/* implicit */_Bool) 2716049888U)) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) 1586018868U)) : (-8715475898805671544LL))) : (((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (var_7))))))));
                            var_22 = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_6]);
                            arr_21 [i_6] = ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_9 [i_6])) : (arr_6 [i_0] [i_2] [i_0]))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-2324), (((/* implicit */short) (signed char)127))))) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_0] [i_0 + 2] [i_2] [i_5])))));
                        }
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) -1049030847))));
                    }
                    arr_22 [i_2] [i_2] [i_2] [(unsigned char)10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_1]))));
                    var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(4281414653047970307LL)))), (max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_16 [11U] [i_1] [i_2] [i_2] [i_1] [11U])))), (((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]))))) : (((unsigned long long int) 8ULL)));
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) 774443198)) & (min((var_11), (((/* implicit */unsigned long long int) 943616934U))))))));
    var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3495147978U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3669))) : (-7965632001888339868LL)))));
}
