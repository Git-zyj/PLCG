/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188764
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)23] [(unsigned char)23] [3U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_3)))))));
                            var_13 = ((/* implicit */signed char) 2602792985U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = max((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) var_0)) : (var_7))), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_11))), (((int) var_10))))));
    var_15 -= (!(((/* implicit */_Bool) var_5)));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) var_6);
                var_17 = max((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_5 + 1] [i_5 - 1]))), (((((/* implicit */_Bool) var_8)) ? (arr_13 [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) -1101977919)))));
                var_18 = ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_10)))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_5 + 1])) ? (var_0) : (((/* implicit */int) arr_11 [i_4])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_6 = 3; i_6 < 21; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_1 [i_9]);
                        arr_26 [i_9] [i_8] [i_7] [(unsigned char)13] = ((/* implicit */unsigned char) (-(arr_5 [i_6 - 3] [(unsigned short)5] [(signed char)10])));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) 6212879186643186699ULL);
                            var_21 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(var_8))))))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 22; i_11 += 4) 
                        {
                            arr_32 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_19 [i_7] [i_7] [i_11]);
                            var_22 = ((/* implicit */int) (signed char)100);
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_36 [(unsigned short)14] [i_12] [i_9] [i_8] [i_8] [i_7] [i_6 + 1] = (+(((((/* implicit */_Bool) 14105051943459605644ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-105)))));
                            var_23 = ((/* implicit */_Bool) (~(var_11)));
                        }
                        var_24 = ((/* implicit */short) (((+(arr_5 [i_6] [i_7] [(unsigned short)18]))) == (((/* implicit */long long int) (-(arr_14 [i_6 - 2] [i_6 + 1] [i_6 + 1]))))));
                        var_25 ^= ((/* implicit */unsigned char) (((~(var_1))) / (((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 3] [i_6 + 2] [i_6])) ? (arr_8 [i_6 - 2] [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : (((/* implicit */int) (signed char)-56))))));
                    }
                } 
            } 
        } 
        arr_37 [(unsigned short)22] = ((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6]);
    }
    for (unsigned int i_13 = 2; i_13 < 23; i_13 += 4) 
    {
        arr_40 [(unsigned char)0] [i_13] = (signed char)127;
        arr_41 [i_13 - 2] = (~(((/* implicit */int) (short)20450)));
    }
}
