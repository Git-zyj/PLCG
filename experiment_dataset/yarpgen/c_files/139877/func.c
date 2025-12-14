/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139877
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (unsigned short)65535))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-1), (arr_3 [i_0] [i_1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_6 [i_1 + 2]))))) ? (max((var_11), (((/* implicit */int) (short)28728)))) : (((/* implicit */int) (short)28735))))) : (min((((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28738))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28739)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (short)28735)))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_20 [i_5] [i_4] [i_3] [i_1 + 1] [i_1 + 2] [i_0] &= var_0;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1 - 1] [i_3] [i_4] [i_5] [i_4]);
                                arr_22 [i_0] [i_1 + 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1525503748)) ? (((/* implicit */int) (unsigned char)26)) : ((-2147483647 - 1))));
                                var_15 *= ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_5] [i_1] [i_3] [i_4] [i_1 + 1] [i_3]))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_4])))))));
                            }
                        } 
                    } 
                    arr_23 [i_1 + 1] [i_1 - 1] [i_1 - 1] = ((unsigned char) (short)-28728);
                    arr_24 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) ((arr_18 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)28728)) : (((((/* implicit */int) (short)28710)) & (((/* implicit */int) (_Bool)0))))));
                }
                for (unsigned char i_6 = 3; i_6 < 13; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_1 - 1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 3] [i_8])) ? (((/* implicit */int) arr_18 [i_8 - 2] [i_8 - 3] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 2] [i_8])) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-24))))));
                                arr_34 [i_0] [i_6] [i_6 - 2] [i_7] [i_0] = ((/* implicit */unsigned int) min((((unsigned char) var_8)), (arr_27 [i_8 + 2] [i_7 + 1] [i_6 - 2] [i_0])));
                                arr_35 [i_0] [i_6 - 3] [i_6] [i_6] [i_8 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 + 2])) : (((/* implicit */int) (short)-28735))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 2]))))) : (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1])))))));
                                arr_36 [i_6] [i_6] [i_8 + 1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)36623)) && (((/* implicit */_Bool) -1179480396)))));
                                arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(var_14)));
                            }
                        } 
                    } 
                    arr_38 [i_6] = ((/* implicit */unsigned char) min((min((min((7707057308133068833ULL), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_6])))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1 - 1] [i_0])))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_12)))) & (((((/* implicit */_Bool) 10739686765576482779ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))));
                    var_17 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 1179480379)) ? (((/* implicit */unsigned long long int) ((long long int) (short)0))) : (10739686765576482782ULL))));
                }
                arr_39 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (short)-28753)), (10739686765576482782ULL))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)16)), (arr_1 [i_1 + 2] [i_1 + 2]))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)28741)), (7707057308133068856ULL)))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_13))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((unsigned long long int) (short)28730)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))))));
    var_20 &= ((unsigned long long int) min((var_6), (((/* implicit */unsigned long long int) var_4))));
    var_21 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) (unsigned char)162))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)30387))) > (((/* implicit */int) var_12))))))));
    var_22 = ((/* implicit */unsigned int) var_9);
}
