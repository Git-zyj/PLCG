/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111015
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_18);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((unsigned int) ((1926422449) >> (((((/* implicit */int) var_17)) - (146))))))));
                    arr_7 [(signed char)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2])))));
                    arr_8 [i_2] [2] [i_2] [i_2] |= ((/* implicit */int) 0ULL);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) min((0U), (((/* implicit */unsigned int) (signed char)-126))))))));
            arr_14 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 - 2] [4])), (3776539174U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)102)))))));
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_19 [(signed char)2] [i_0] = ((/* implicit */int) ((_Bool) (short)(-32767 - 1)));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((var_12) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_0 - 2] [i_6 + 1])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 1] [i_6 + 2]))))))))));
                        arr_24 [(unsigned short)0] [i_0] [i_5] [i_6] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 2] [i_6 + 1])) + (((/* implicit */int) (_Bool)1)))));
                        arr_25 [9U] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_23 [i_0] [i_4] [15U])))))))));
                        var_22 ^= ((/* implicit */_Bool) ((unsigned char) max((((int) (_Bool)1)), (max((var_15), (((/* implicit */int) (signed char)-126)))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_11 [i_4] [(signed char)16]))));
                    }
                } 
            } 
            arr_26 [8LL] [i_4] [i_4] |= ((/* implicit */short) 2929579905086166937LL);
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1131813044U)))));
                arr_31 [i_0 + 1] [i_0] [(short)16] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (15073394715937927458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 13; i_10 += 4) 
                    {
                        {
                            arr_37 [i_0] [10LL] [i_10] = ((/* implicit */int) var_12);
                            var_25 = ((/* implicit */unsigned long long int) ((17592186040320LL) & (0LL)));
                            arr_38 [i_0] [(_Bool)1] [(_Bool)0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((var_11) != (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_29 [12LL] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_0 + 2] [i_7])))))));
        }
        var_27 = ((/* implicit */unsigned long long int) 323971395);
    }
    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 3) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned char) var_16)))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) ^ (11LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 3]))))) : (((/* implicit */int) ((_Bool) 1039669855U))))))));
        var_30 -= ((/* implicit */unsigned short) arr_32 [2] [1LL] [i_11 - 1] [i_11] [i_11] [i_11]);
    }
    var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15025))))) ? (((((/* implicit */_Bool) -5247321082774596599LL)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-30070)) : (((/* implicit */int) (signed char)108))))))));
}
