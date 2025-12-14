/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127015
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1])) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_0 + 1] [i_1] [3ULL] [i_1] = ((/* implicit */int) arr_8 [(_Bool)1]);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_0]);
                    var_18 = (((+(min((((/* implicit */int) arr_7 [7LL] [i_0] [(unsigned char)6] [i_1])), (2147483647))))) + ((+(-319448483))));
                }
                for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
                {
                    arr_14 [i_0] [i_1] = arr_4 [i_0 + 1] [i_1 + 1];
                    arr_15 [i_0] [i_1] = ((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1 + 2]);
                }
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_19 [i_1] [i_1 + 2] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1925304817))))), (((((/* implicit */_Bool) ((6374333075466636387LL) ^ (((/* implicit */long long int) 319448482))))) ? ((~(-4611686018427387904LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)17950)))))))));
                    var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17950)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_12 [i_1] [i_1] [i_4]))))))));
                    arr_20 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_16 [i_0] [i_1] [i_1 - 1]), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 - 1])) ? (arr_12 [i_1] [(signed char)6] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_16 [(unsigned char)7] [i_1] [i_1 - 1])))) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_18 [i_5] [i_4] [(short)7])))) != (((((/* implicit */_Bool) 2116503981812385691ULL)) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) (signed char)34))))))), (min((16330240091897165924ULL), (((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0] [i_1])))))));
                                var_21 = ((/* implicit */short) min((((/* implicit */long long int) arr_7 [1] [(short)6] [i_5] [i_1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)5] [i_4] [(short)0]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_16 [i_0] [i_1] [i_1 + 3])))))));
                                arr_26 [i_1] = ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) var_6)), (var_11))));
                                arr_27 [i_0 + 1] [i_1 + 2] [3ULL] [i_1] [i_5] [i_6] = ((/* implicit */signed char) arr_13 [i_0] [(short)8] [i_4] [(signed char)7]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_31 [i_1] [11U] = ((/* implicit */unsigned int) arr_28 [i_0 + 1]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        arr_35 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 + 1] [i_1] [i_7])) ? (((/* implicit */int) arr_32 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) var_8)))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_0 + 1] [i_1] [i_7])))))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [8LL] [i_1]))))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) ((arr_28 [i_7]) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [(signed char)6] [i_1] [i_7] [i_8]))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (_Bool)0))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_37 [2LL] [i_1 - 1] [i_1 + 3] [i_8 - 1] [i_0 + 1])) << (((((/* implicit */int) var_12)) - (5245)))));
                        }
                    }
                    arr_39 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-923)))));
                }
                var_27 = ((/* implicit */short) (~(min((((/* implicit */int) (unsigned char)227)), (((-1755894639) + (((/* implicit */int) (unsigned char)177))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_1);
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_13), (var_9)))) : (((((((/* implicit */_Bool) (unsigned char)1)) ? (var_5) : (var_3))) % (((/* implicit */int) var_12))))));
}
