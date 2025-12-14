/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130575
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
    var_19 = ((/* implicit */int) ((short) ((unsigned char) min((var_6), (((/* implicit */unsigned short) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((int) var_16))) == (((((/* implicit */_Bool) (short)13832)) ? (-7152539406905448566LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20602)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (short)-20602))) ? (((/* implicit */int) ((short) (short)-20602))) : (((/* implicit */int) (unsigned short)51110))));
                                var_21 = ((/* implicit */unsigned int) (short)13832);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) -2119209933)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)11551)) == (((/* implicit */int) (short)25778))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13813))) % (4294967295U)));
        arr_14 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (short)-11551)) ? (((/* implicit */int) (short)-22017)) : (((/* implicit */int) (short)30423)))));
        arr_15 [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
    }
    var_24 &= ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) var_16)) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), ((signed char)(-127 - 1)))))))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_25 -= (short)-24798;
                        arr_29 [i_6] = ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (-1414615056)));
                        var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)25778)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (short)-28949)))) + (2147483647))) << (((((((((/* implicit */_Bool) 4294965248U)) ? (((/* implicit */int) (short)-20602)) : (((/* implicit */int) (short)28965)))) + (20615))) - (13)))));
                        arr_30 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */long long int) ((0LL) == (((/* implicit */long long int) arr_23 [i_5] [i_5] [i_5]))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_15))));
                    }
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned int) arr_22 [i_7] [i_6] [i_6] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_17 [i_6 + 1] [i_6 + 2])))) : (((((/* implicit */_Bool) var_15)) ? (99257483U) : (var_12)))));
                    arr_31 [i_5] [i_5] [i_6] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
}
