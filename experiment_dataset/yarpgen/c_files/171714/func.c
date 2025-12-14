/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171714
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
    var_17 *= ((/* implicit */unsigned char) ((var_15) == (((((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_7)))) / ((~(var_9)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 -= ((/* implicit */signed char) var_2);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_1)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [8ULL] [i_2])) ? (arr_7 [11ULL] [i_1 + 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))));
                    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned short)52801))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)52797)) : (((/* implicit */int) var_12))))) / ((-(var_3)))))) : ((-(((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_0))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] [i_4] = var_7;
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) arr_13 [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_5] [i_4]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (6157698301308622638ULL))))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_18 [i_3] [i_4] [i_5] [i_6]))));
                        var_22 -= (unsigned short)12735;
                        var_23 = ((/* implicit */signed char) (~(((long long int) arr_11 [i_3 - 1]))));
                        var_24 = ((/* implicit */unsigned short) (+((+(var_4)))));
                    }
                }
            } 
        } 
        arr_20 [(unsigned char)4] = ((long long int) (unsigned short)52811);
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [16ULL] [i_7] [i_3])))))))) ? (var_5) : (var_3)));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)52809)) ? (arr_11 [(unsigned short)13]) : (((/* implicit */unsigned long long int) var_1))));
            arr_23 [i_3] = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_7] [i_3]))) : (var_15))));
            var_27 -= ((/* implicit */signed char) arr_12 [i_3] [i_7] [i_7]);
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                arr_28 [i_8] [i_3 - 1] [i_7] [i_8] = ((/* implicit */signed char) arr_26 [i_3] [i_8]);
                var_28 -= ((/* implicit */unsigned short) (unsigned char)220);
            }
        }
    }
    var_29 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) 
    {
        var_30 = ((/* implicit */long long int) (-(var_6)));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_29 [i_9]))));
        var_32 = ((/* implicit */unsigned short) var_5);
    }
}
