/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132464
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [1ULL] [i_3] [i_4] = ((/* implicit */int) (!(((-70724289) != (((/* implicit */int) (short)16159))))));
                                var_11 |= ((/* implicit */short) (~(((/* implicit */int) var_0))));
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_5))) ? (max((((/* implicit */unsigned long long int) (short)16159)), (arr_8 [i_3 + 2] [i_0 - 1] [i_3 + 2]))) : (arr_8 [i_3 + 1] [i_0 + 1] [i_3 + 1])));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) arr_9 [(short)7] [i_0] [i_1] [i_1]);
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)1), (((/* implicit */short) (unsigned char)50))))) ? (-536870912) : (((/* implicit */int) ((min((arr_8 [i_2] [i_1] [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned short)6125)))) >= ((+(arr_8 [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10648245661641897701ULL))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_16 |= ((/* implicit */short) (+((+((+(((/* implicit */int) (_Bool)1))))))));
                var_17 = ((((/* implicit */_Bool) ((short) ((unsigned char) var_10)))) ? (var_9) : (((((/* implicit */_Bool) (short)22873)) ? ((-(((/* implicit */int) (unsigned char)205)))) : (var_2))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)205)))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8] [i_6] [i_5])) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((int) arr_10 [i_5] [i_5]))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                        var_21 -= (unsigned char)205;
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_22 = (-(arr_11 [i_5] [i_6] [i_7] [i_9] [i_5]));
                        var_23 = ((/* implicit */short) (~((-(arr_0 [i_7])))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [(unsigned char)10]))))) < ((+(12ULL)))));
                }
            }
        } 
    } 
}
