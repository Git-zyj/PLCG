/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13198
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    var_10 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)205)), ((short)31980))))));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((unsigned long long int) ((signed char) 7930548097506355125ULL))), (((/* implicit */unsigned long long int) (~(2147483647)))))))));
                    arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_2 - 1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                }
                for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)11688)), (var_2)))), (min((17845561607271610165ULL), (((/* implicit */unsigned long long int) var_7))))))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned short)12938))));
                                var_15 -= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)31994))))), (var_8))))));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (signed char)-15))))), ((+(4294967281U)))));
                                var_16 &= ((/* implicit */int) -7194124976559652327LL);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (signed char)-30)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)205))));
                        arr_28 [i_1] [i_7] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((signed char) (unsigned short)37818))) ? (((int) 4768443086129525790LL)) : (((/* implicit */int) ((unsigned char) var_4)))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_8 = 4; i_8 < 11; i_8 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) var_8);
                    var_20 = ((/* implicit */unsigned int) -9223372036854775780LL);
                }
                /* LoopNest 3 */
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    for (short i_10 = 3; i_10 < 10; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_39 [i_0] [i_1 - 2] [i_0 - 1] [i_0] [i_11] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((unsigned long long int) -1449873811))));
                                arr_40 [i_0 + 1] [i_1] [(signed char)10] [i_10] [(unsigned short)2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))))), (((unsigned int) (short)27061))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (-(2147483647)));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 15174650217043722206ULL))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31998)) ? (((/* implicit */unsigned long long int) -4768443086129525791LL)) : (9533213986467361364ULL)))) ? (1704899967U) : ((~(831838146U))))))))));
    var_24 = ((/* implicit */signed char) max((-8450432678309296571LL), (((/* implicit */long long int) min((min((5775425U), (((/* implicit */unsigned int) (short)32015)))), (((((/* implicit */_Bool) (unsigned short)50729)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3885850952U))))))));
}
