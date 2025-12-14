/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139229
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_11 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)101))))), (((unsigned int) ((1152921504606846975LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))))));
                            var_12 = ((/* implicit */unsigned char) var_2);
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_15 [(unsigned short)7] [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((22LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [12] [i_5] [10] [i_5] [i_5] [i_5] [i_5])))))));
                        }
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 11322078696413439890ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (3141997914823831142LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) : (min((arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]), (var_5))))) : (((/* implicit */unsigned long long int) (+(arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_1] [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_12 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0]) / (((/* implicit */int) (signed char)-16))));
                            var_15 = ((/* implicit */signed char) ((int) (_Bool)1));
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_21 [i_7] [(unsigned char)1] [i_7])))) ? (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_6] [i_1])) - (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6])))));
                        }
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_17 -= ((/* implicit */signed char) var_7);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 288230376151711743ULL)) ? (((/* implicit */int) (unsigned char)31)) : (-1612304143)))) | (arr_17 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0]))))));
                            var_19 = ((/* implicit */unsigned char) var_2);
                            var_20 = ((/* implicit */long long int) 4532925731986599521ULL);
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((var_5) > (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] [i_8]))));
                        }
                        var_21 = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)16483)) < (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_23 [i_0] [i_1] [i_0] [i_0]))))))) ^ ((+(((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2] [i_2] [i_2 + 2]))))));
                        var_22 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), ((_Bool)0))))) * (((((/* implicit */unsigned long long int) 1152921504606846975LL)) * (arr_4 [i_2 - 2]))))) > (((/* implicit */unsigned long long int) (~(arr_0 [i_0 + 1]))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), ((+(var_9)))));
                        arr_26 [i_6] [i_1] [i_0] = ((((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_3 [i_0])) : (((var_4) + (((/* implicit */int) var_2)))))) * (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [8])));
                    }
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        var_24 &= ((/* implicit */signed char) arr_24 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]);
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])) ? (((var_1) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (var_1) : (arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))))))))));
                        arr_31 [8U] [8U] [i_2] [i_2] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((min((867062359946334364LL), (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 2]))), (((min((var_1), (((/* implicit */long long int) (_Bool)1)))) & (-23LL))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_10 = 2; i_10 < 19; i_10 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1219)) != (((/* implicit */int) (signed char)-81)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_9))))) : (arr_33 [i_10] [i_10])))), (arr_34 [i_10]))))));
        /* LoopSeq 1 */
        for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
        {
            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_32 [i_10 - 1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10] [i_10] [i_11 + 1]))) : (var_1)))));
            var_28 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (var_8))) >> (((min((var_6), (((/* implicit */unsigned long long int) (short)-17193)))) - (5961078127771585217ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((arr_39 [i_10] [i_10] [i_11 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [i_10])))))))))));
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -4622657897466526535LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_37 [i_10]))))))), (((((/* implicit */_Bool) -621997897709293062LL)) ? (((/* implicit */unsigned long long int) 5012300215379381871LL)) : (arr_34 [i_10 - 2])))));
        }
    }
    for (signed char i_12 = 2; i_12 < 19; i_12 += 4) /* same iter space */
    {
        arr_42 [i_12 - 2] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_38 [i_12 + 2])) != (min((var_9), (((/* implicit */unsigned long long int) 22LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_6)))) ? (arr_34 [i_12 + 1]) : (min((15702670649310975109ULL), (((/* implicit */unsigned long long int) 1492235961U)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-79)), (arr_33 [i_12 - 1] [i_12 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            for (unsigned int i_14 = 3; i_14 < 20; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_47 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 2])) : (((((/* implicit */int) arr_48 [i_12] [i_13] [i_15] [i_14] [i_14 - 2] [i_14])) ^ (((/* implicit */int) var_7))))));
                        arr_50 [i_12 + 2] [i_12] [i_12 + 2] [i_12] [i_12] [i_12 + 2] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) % (5834462037854187809LL)));
                        var_31 = ((/* implicit */long long int) 1313472991);
                    }
                    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (3141997914823831150LL) : (((/* implicit */long long int) 327773484U)))), (((/* implicit */long long int) (_Bool)1))))) - (var_9)));
                }
            } 
        } 
    }
}
