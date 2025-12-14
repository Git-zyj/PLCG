/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156242
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (~(arr_8 [i_4] [i_1])));
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4159747478U))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) arr_1 [i_2] [i_4])))) : (max((max((var_13), (((/* implicit */long long int) (short)2)))), (((/* implicit */long long int) arr_3 [i_4] [(unsigned char)6] [i_2]))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    } 
    var_16 ^= var_13;
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_4 [(signed char)16] [i_5] [i_5])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5])))))));
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_1 [i_5] [i_5]), ((signed char)4)))))) ? (((/* implicit */int) max((arr_1 [i_5] [i_5]), (var_7)))) : (max((((((/* implicit */int) (short)9)) << (((((((/* implicit */int) arr_15 [i_5])) + (31))) - (15))))), (((/* implicit */int) (short)20))))));
        arr_18 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)31)) ? (9168190653192004171LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (short)5420))))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned char) arr_7 [i_5] [i_5] [i_5] [22U] [i_5] [i_5]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11)) + (((/* implicit */int) (signed char)4))))))))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_7)))));
        var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (9007198986305536LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */long long int) arr_7 [i_6] [i_6] [8LL] [i_6] [i_6] [i_6])), (var_3))) : (((/* implicit */long long int) ((unsigned int) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_21 = ((/* implicit */short) arr_16 [i_6]);
            arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_6] [i_7] [i_7] [i_6] [i_6])) & ((~(((/* implicit */int) (short)2))))));
            arr_25 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) && (((/* implicit */_Bool) arr_5 [i_6] [i_6])))))) : (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_19 [i_6] [i_6]) : (var_6)))));
            var_22 = ((/* implicit */long long int) var_12);
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            arr_28 [i_6] [i_8] [i_6] = ((/* implicit */short) (signed char)-79);
            var_23 = ((/* implicit */signed char) arr_16 [i_6]);
            var_24 -= var_2;
        }
        for (unsigned char i_9 = 3; i_9 < 6; i_9 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((max((((long long int) arr_15 [i_6])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9] [5LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_8 [i_6] [i_6])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (arr_19 [i_9] [i_9])))) ? (arr_26 [i_9 - 3] [i_9 - 3]) : (max((arr_26 [i_9] [i_9]), (((/* implicit */unsigned int) (signed char)-46)))))))));
            arr_33 [i_6] = max((((long long int) arr_5 [i_6] [i_6])), (max((((/* implicit */long long int) var_9)), (-7166357631504914472LL))));
            var_26 = ((/* implicit */long long int) arr_20 [i_6] [i_9]);
            arr_34 [i_6] [i_6] [i_6] = ((/* implicit */signed char) var_6);
        }
    }
    var_27 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_3));
}
