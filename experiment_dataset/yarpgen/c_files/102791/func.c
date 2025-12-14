/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102791
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_6 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) max((arr_3 [(unsigned char)11] [4U]), (((/* implicit */unsigned long long int) ((long long int) -248000585)))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_1 [(unsigned char)11] [i_0]), (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (signed char)127)) : (var_6))) / (arr_1 [(_Bool)1] [i_0])));
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                }
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_13 = ((arr_1 [i_4] [i_5]) & (((/* implicit */int) arr_11 [i_0 + 2] [i_1 - 1] [i_5])));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) ? (arr_3 [i_3 - 1] [i_3 + 1]) : (arr_3 [i_4] [i_0 + 1]))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                arr_16 [i_4] [(short)0] [(unsigned short)8] [i_4] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-104)))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) << (((arr_4 [i_0 - 1] [(unsigned short)13] [13U] [i_0]) - (1320327552810090878LL))))))))) : ((+((+(((/* implicit */int) arr_5 [i_4])))))))))));
                                arr_17 [i_0] [14] [3U] [i_4] [i_4] [i_6] = var_8;
                                var_16 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)117)), (arr_15 [14])))) ? (((((/* implicit */int) (signed char)117)) % (var_6))) : (((/* implicit */int) (!(arr_11 [i_0] [(short)0] [i_3])))))), (((/* implicit */int) arr_8 [i_0]))));
                                arr_18 [i_4] [i_4] [i_3] [(unsigned short)12] [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [7LL] [i_1])))) ? (arr_4 [i_6] [i_4] [i_3] [(short)14]) : (((/* implicit */long long int) 1234784505))));
                            }
                            for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                            {
                                var_17 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_15 [(short)14])) ? (var_3) : (((((/* implicit */int) var_0)) * (var_4)))))));
                                var_18 += ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_7] [i_7] [i_7]))))) > (max((((/* implicit */long long int) (signed char)-118)), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [16LL]))) : (var_11))))));
                            }
                            arr_21 [i_4] [11U] [12] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4]))))) ? (((/* implicit */int) arr_15 [i_4])) : (((arr_9 [i_0 + 2]) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_9 [i_1 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((short) var_11));
}
