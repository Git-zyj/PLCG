/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173719
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) < (((/* implicit */int) arr_3 [i_1]))))) <= (((/* implicit */int) (signed char)113))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_7))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_3] [(unsigned short)16] [(unsigned char)2] [(unsigned short)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [17ULL] [i_4]))) : (5085131089823092741ULL))))))))));
                                arr_14 [i_0] [16] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_9))), (((/* implicit */unsigned long long int) 7839295087806814696LL))))) || (((/* implicit */_Bool) arr_7 [(unsigned short)10] [(unsigned short)18] [(unsigned short)10] [17ULL]))));
                                var_13 = ((/* implicit */int) var_3);
                                arr_15 [(short)7] [(unsigned short)4] [(short)5] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) max(((unsigned short)43567), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-43)) < (((/* implicit */int) (signed char)124)))))));
                                arr_16 [16U] [16U] [11U] [4] [16U] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((arr_0 [(unsigned short)1] [0U]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)119)), (arr_8 [i_0])))))))), (var_0)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)6] [i_1]);
                        var_15 = ((/* implicit */unsigned short) arr_7 [i_0] [(_Bool)1] [i_2] [i_5]);
                        arr_19 [i_0] [i_0] [(_Bool)1] [i_1] |= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) * ((+(3447164900U))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [12U] [(signed char)0] [0] [i_6] [(unsigned char)16] [i_1] [i_1]))));
                        arr_23 [i_0] [i_1] [i_2] [9ULL] = ((/* implicit */long long int) (+(((/* implicit */int) ((var_8) <= (arr_1 [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_29 [i_0] = ((/* implicit */signed char) (unsigned short)21970);
                                var_17 ^= ((/* implicit */short) min((13547973473474508796ULL), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1])) : (min((9U), (((/* implicit */unsigned int) (short)-32759)))))))));
                                arr_30 [i_0] [(short)7] [(unsigned char)1] [(_Bool)1] [10ULL] [(short)15] = ((/* implicit */unsigned short) -9223372036854775798LL);
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) max((arr_17 [i_1] [(short)0] [i_2]), (arr_17 [i_1] [i_1] [i_1])))) : (((12345673049114843865ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
}
