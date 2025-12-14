/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114779
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1 - 1]))))), (((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1])))))));
                                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (((~(576460752303423232ULL))) <= (min((((/* implicit */unsigned long long int) 1827703225U)), (4164160898178061838ULL))))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) ((arr_8 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3]) > (arr_8 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_4])))) ^ (((/* implicit */int) var_10))));
                                var_15 &= ((long long int) min((max((1540227073U), (((/* implicit */unsigned int) arr_0 [i_4] [(signed char)16])))), (((/* implicit */unsigned int) (signed char)12))));
                            }
                        } 
                    } 
                } 
                var_16 -= (-(min((((/* implicit */long long int) var_10)), (arr_2 [i_1]))));
                var_17 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_1 - 1])))) == (((/* implicit */int) arr_4 [i_1 - 1]))));
                var_18 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_10 [(_Bool)1] [i_1 - 1] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5])))) ? (arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [(unsigned short)16]), (arr_4 [i_5]))))))));
            var_20 = ((/* implicit */unsigned short) ((arr_15 [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6])) || ((_Bool)1)))))));
        }
        var_21 = ((/* implicit */signed char) 174449910U);
        var_22 = ((/* implicit */short) ((((long long int) (+(((/* implicit */int) (unsigned char)111))))) << (((174449921U) - (174449920U)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_3))) <= (((((/* implicit */int) (short)-26372)) + (((/* implicit */int) arr_0 [i_7] [i_7]))))))), ((unsigned short)51959)));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) (_Bool)1)))));
        var_25 = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_15 [i_7]))), (((unsigned int) var_6))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_7] [i_7])) - (((/* implicit */int) arr_0 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_9)))) : (0ULL)));
        var_27 = ((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) 2772216202813498954LL);
        var_29 = ((((/* implicit */_Bool) arr_9 [i_8 - 2] [i_8 + 1] [(unsigned char)4] [(unsigned char)4])) ? (arr_9 [i_8 + 3] [i_8 + 3] [i_8] [i_8]) : (arr_9 [i_8 + 3] [i_8 + 1] [i_8] [(unsigned char)10]));
    }
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        var_30 = ((/* implicit */_Bool) min((((long long int) arr_8 [(_Bool)1] [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_12 [i_9])) : (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9] [i_9])))))))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((0ULL) | (((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_10 [4LL] [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)49441)))))))))));
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((int) ((((var_11) ? (var_9) : (((/* implicit */long long int) var_7)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3584)))))))));
}
