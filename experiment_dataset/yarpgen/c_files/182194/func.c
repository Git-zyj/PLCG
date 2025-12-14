/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182194
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) + (var_7)))) ? (((((/* implicit */_Bool) (signed char)-122)) ? (1289492073U) : (1289492068U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)7] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5398))) : (arr_1 [i_0])))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_11))))))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        arr_3 [3U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) arr_0 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_2))))))))));
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
                            var_15 = ((/* implicit */short) ((signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (signed char)-123)) : ((~(((/* implicit */int) arr_10 [2U] [2U] [i_1])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_11 [7U] [(short)0] [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_5 [i_5] [i_7]))));
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) - (var_7)))) ? (((((/* implicit */_Bool) ((short) var_1))) ? (var_4) : (3005475227U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (arr_15 [i_2] [i_5] [(signed char)12] [(short)7])))) ? (((/* implicit */int) arr_12 [i_6] [i_5 - 1] [i_5] [i_5 + 2])) : (((((/* implicit */int) (signed char)-63)) & (((/* implicit */int) arr_8 [(signed char)12] [i_7])))))))));
                                var_18 = ((/* implicit */unsigned int) (unsigned short)15073);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) var_5);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(var_7)))))) : ((((+(var_8))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) var_7))))))))))));
                    var_21 = ((/* implicit */short) ((var_3) & (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [(signed char)0] [(signed char)0])) : (((/* implicit */int) var_0)))))))));
                    arr_23 [(signed char)11] [i_2] [i_1] [(signed char)11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((3005475227U) + (3005475228U)))))) >> (((((/* implicit */int) arr_10 [i_5] [11U] [(signed char)0])) + (10938)))));
                }
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))))) : (var_4));
}
