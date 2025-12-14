/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103691
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
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-2)) ? (2071622410306477574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3826)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))));
        var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 + 1]))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_11))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1 + 1]);
    }
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        arr_10 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) min((((var_15) - (arr_8 [i_2 - 1] [i_2]))), (((/* implicit */long long int) (short)26838))))) : (((/* implicit */unsigned long long int) min((((var_15) + (arr_8 [i_2 - 1] [i_2]))), (((/* implicit */long long int) (short)26838)))));
        arr_11 [i_2] = arr_0 [6U] [6U];
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) (+(-1643278965)));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (signed char i_5 = 4; i_5 < 22; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4 - 1] [i_3])) & (((/* implicit */int) arr_14 [i_4 + 1] [i_3]))));
                            arr_28 [i_7] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_4 - 1] [11LL] [i_4 + 1]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_31 [i_3] [i_4] [(short)22] [i_6] [i_8] = ((/* implicit */unsigned char) 2055357204);
                            var_24 = ((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) arr_26 [i_3] [i_5] [i_3]))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_5] [i_4] [i_5 - 4])))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [3ULL] [i_5]) || (((/* implicit */_Bool) var_17)))))) * (((((/* implicit */_Bool) arr_27 [i_3] [i_4] [(_Bool)1] [i_6] [i_8])) ? (((/* implicit */unsigned long long int) arr_15 [i_5])) : (16375121663403074041ULL))))))));
                        }
                        arr_32 [i_5] [(unsigned char)6] &= ((/* implicit */unsigned char) ((arr_29 [i_5 - 3] [i_5 - 1] [6LL] [i_5 + 1]) << (((arr_20 [i_5 - 3] [i_5] [(_Bool)1]) - (7282677719563379033LL)))));
                    }
                    for (signed char i_9 = 4; i_9 < 20; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [(signed char)12] [i_5])))))));
                        arr_35 [i_3] [i_3] [i_3] [i_9] [i_9] [i_9] = arr_18 [i_9] [i_3] [i_3];
                        var_28 = ((/* implicit */_Bool) max((var_28), (arr_33 [i_3] [i_9 - 2] [i_5])));
                    }
                    var_29 = ((/* implicit */signed char) (~(arr_34 [i_5] [i_4 - 1] [i_4] [i_3])));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_10 = 2; i_10 < 14; i_10 += 1) 
    {
        for (long long int i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            for (unsigned short i_12 = 2; i_12 < 15; i_12 += 2) 
            {
                {
                    var_30 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_25 [i_11 - 1] [i_11 - 2] [i_11 - 2]))))))), (min((((/* implicit */unsigned long long int) arr_1 [i_12 - 2])), (1152921487426977792ULL)))));
                    var_31 = ((/* implicit */short) ((((/* implicit */int) max((arr_41 [i_10 + 1] [i_11 + 2]), (arr_41 [i_10 + 1] [i_11 + 1])))) <= (((/* implicit */int) min((arr_41 [i_10 - 1] [i_11 + 2]), (arr_41 [i_10 - 1] [i_11 + 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        arr_45 [i_13] [(_Bool)1] [i_10 + 2] [i_10 + 2] = ((/* implicit */long long int) (_Bool)1);
                        arr_46 [i_10 + 1] [i_11] [i_12 + 1] [(unsigned short)4] = ((/* implicit */long long int) arr_30 [i_10 - 1] [i_11 + 1]);
                    }
                }
            } 
        } 
    } 
}
