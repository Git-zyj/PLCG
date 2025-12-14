/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189152
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] = ((((/* implicit */_Bool) min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1] [i_1 + 1])) ? (arr_5 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)28979)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_2])));
                    arr_9 [i_2] [4LL] [4LL] [4LL] = ((/* implicit */long long int) arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]);
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) min(((unsigned short)58179), ((unsigned short)65528)));
        arr_12 [i_3] = ((/* implicit */unsigned short) var_9);
    }
    for (unsigned short i_4 = 4; i_4 < 22; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) var_7);
        var_17 = (unsigned short)49435;
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_30 [i_9] [i_6] = ((/* implicit */signed char) min((((unsigned short) arr_14 [i_9])), (((/* implicit */unsigned short) arr_14 [i_9]))));
                            arr_31 [i_9] [i_9] [i_6] [i_7] [i_8] [i_9] = max(((unsigned short)21890), (((unsigned short) arr_14 [i_9])));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_2 [i_5] [i_6] [i_5])))))) ? (((((/* implicit */_Bool) var_4)) ? (min((-3060300932742144673LL), (((/* implicit */long long int) (unsigned short)10317)))) : (min((arr_28 [i_5] [i_6] [i_6] [(signed char)4] [(signed char)4] [i_5]), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_9] [i_5])))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_19 = var_3;
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) (~(arr_25 [i_5] [i_6] [i_7] [i_8] [i_10])))))));
                            arr_36 [(signed char)7] [(signed char)7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)7)) ? (0) : (((/* implicit */int) (signed char)28))))));
                            var_21 = ((/* implicit */int) min((var_21), ((+((+((+(((/* implicit */int) (signed char)117))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            var_22 = -4765053972794390029LL;
                            arr_39 [i_5] [i_6] [i_6] [i_6] [i_8] [i_11] [i_11] = ((/* implicit */long long int) arr_0 [i_5] [i_6]);
                            arr_40 [(signed char)7] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? ((~(((/* implicit */int) var_13)))) : (((arr_13 [i_5]) ^ (((/* implicit */int) var_6))))));
                            arr_41 [i_5] [5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_1)))));
                            var_23 *= ((/* implicit */signed char) (+(arr_27 [i_7] [i_8] [i_7] [i_6])));
                        }
                        arr_42 [i_7] = ((/* implicit */int) min((max((((/* implicit */long long int) arr_23 [i_6] [i_5] [i_5] [i_8])), (((((/* implicit */_Bool) 1566426415)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)115))) : (arr_17 [i_8]))))), (((/* implicit */long long int) (+((~(arr_32 [i_8] [i_8] [i_7] [i_5] [i_6] [i_5]))))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_6] [i_8])) ? (((/* implicit */int) arr_7 [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_14 [i_5])))), ((-(arr_5 [i_5])))))) ? (((/* implicit */long long int) ((var_3) / (((/* implicit */int) ((unsigned short) arr_1 [i_7] [i_8])))))) : (arr_18 [i_8]))))));
                        var_25 = arr_26 [i_5] [i_5] [i_7];
                        var_26 = min((arr_2 [i_5] [i_6] [i_7]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > ((~(arr_34 [i_5] [i_5] [i_5])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        arr_52 [4LL] [i_12] [i_13] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_19 [i_5])))) ? (arr_25 [i_5] [i_12] [i_13] [i_5] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)126)), (arr_26 [i_5] [i_5] [i_5]))))))))));
                        arr_53 [i_5] [i_12] [i_13] [i_14] = ((/* implicit */long long int) (+(max((arr_37 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_37 [i_13] [i_12] [i_13] [i_14] [i_5] [i_14] [i_12])))));
                        var_27 = ((/* implicit */int) (signed char)4);
                    }
                } 
            } 
        } 
        var_28 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (signed char)-30))))) ? (((/* implicit */int) min(((signed char)-49), ((signed char)29)))) : (((/* implicit */int) arr_46 [i_5] [i_5] [i_5]))))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 1; i_15 < 9; i_15 += 3) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
            var_30 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64622))))) ? (var_5) : (arr_18 [i_5]))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_16 = 2; i_16 < 10; i_16 += 1) 
    {
        for (signed char i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            {
                var_31 = ((/* implicit */long long int) max((var_31), (var_9)));
                arr_61 [i_16 - 2] [i_16] [i_17] = ((/* implicit */long long int) min(((unsigned short)25110), ((unsigned short)13633)));
                arr_62 [i_16 - 1] [i_17] [i_17] |= ((/* implicit */unsigned short) min((arr_6 [i_16] [i_17]), (arr_6 [i_16 - 1] [i_16 - 1])));
                var_32 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)49459))));
            }
        } 
    } 
}
