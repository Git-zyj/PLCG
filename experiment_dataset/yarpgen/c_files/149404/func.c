/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149404
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 4) 
                {
                    {
                        var_12 &= ((/* implicit */unsigned short) (((-(arr_6 [i_3]))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))));
                        var_13 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 2]);
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((958605296) == (((arr_5 [i_0] [i_1] [i_0] [i_3]) % (((/* implicit */int) (unsigned char)155)))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))));
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [4] [i_0] [i_0] [4])) : (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) | (-1052331472)))) : (arr_6 [(signed char)8])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) arr_9 [i_0] [i_4] [i_4] [i_6]);
                                var_19 = ((/* implicit */_Bool) 5007271632209307816LL);
                                var_20 &= ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)155)))) & (arr_5 [i_4] [i_4] [i_6] [i_7]));
                                var_21 = ((/* implicit */int) ((unsigned char) (unsigned char)154));
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (signed char)-127))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) 2109276468591942604LL);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 14999447726574735992ULL))));
                                var_25 &= ((/* implicit */unsigned short) ((-2109276468591942621LL) - (((/* implicit */long long int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_10 = 3; i_10 < 16; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_10 - 1])) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (((arr_30 [i_10]) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))) : (arr_30 [i_10]))) : (((((/* implicit */int) arr_29 [i_10 - 2])) - (((/* implicit */int) arr_29 [i_10 - 2]))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) -1409271800)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15665)) ? (461069340) : (((/* implicit */int) (unsigned char)254))))) : (((((/* implicit */_Bool) (+(arr_30 [i_10 - 1])))) ? (max((((/* implicit */long long int) var_3)), (-1900467753843869198LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10])))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((arr_31 [i_11] [i_11]) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7956))) : (arr_31 [i_11] [i_11]))))))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_31 [i_11] [i_11]))));
        var_30 += ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)36)))) / (((int) 3513601457621885087ULL))));
    }
    var_31 &= ((/* implicit */int) var_2);
}
