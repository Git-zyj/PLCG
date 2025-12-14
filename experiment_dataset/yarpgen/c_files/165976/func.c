/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165976
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
    var_17 = ((unsigned char) -2039288927);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_2 + 2] [i_2 - 2])) ? (arr_3 [14U] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22)))));
                        var_19 = ((/* implicit */signed char) max((var_19), ((signed char)-16)));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)117))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)-16))))) ? (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) arr_0 [i_0] [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) (signed char)-22)))))) ? (((((/* implicit */_Bool) 5932987345028014861ULL)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-91)))))) : (((((/* implicit */_Bool) ((signed char) 925259886))) ? (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-51)))) : (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-18))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 7; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_19 [i_4] [i_4] [0] [i_4] [(signed char)8] [i_4] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)0));
                        var_22 = ((/* implicit */int) (signed char)(-127 - 1));
                    }
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_8] [(short)10] &= ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        var_23 = ((/* implicit */unsigned char) ((_Bool) 12756253442735500229ULL));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 0U))) ? (((/* implicit */int) ((_Bool) (unsigned char)164))) : (((/* implicit */int) arr_13 [i_5 - 1] [i_9]))));
                        var_25 = ((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_6] [i_6]);
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_11 [i_9] [i_6] [i_5])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)3349)))) : (((int) arr_14 [i_4] [i_4] [i_4])))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_27 &= ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 1] [i_5])))));
                        var_28 |= ((/* implicit */signed char) ((((((/* implicit */int) (short)20)) != (((/* implicit */int) (signed char)3)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_4] [i_5] [i_6] [i_10])) ? (((/* implicit */int) arr_12 [2ULL])) : (((/* implicit */int) arr_9 [i_6 + 1])))))) : (((((/* implicit */_Bool) (short)40)) ? ((((_Bool)1) ? (-1124914762) : (((/* implicit */int) (short)2705)))) : (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6 + 2]))))));
                    }
                }
            } 
        } 
    } 
}
