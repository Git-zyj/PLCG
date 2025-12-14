/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16687
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (unsigned short)18241);
        var_14 += ((/* implicit */unsigned short) max((max((max((0LL), (((/* implicit */long long int) var_1)))), ((-(-9LL))))), (5LL)));
        var_15 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_5))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), ((signed char)-108)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_11 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((signed char)87), (((/* implicit */signed char) (_Bool)0)))))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                    var_18 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-106))));
        arr_13 [(signed char)12] = ((/* implicit */unsigned char) max((min((var_8), (3410577709880212629LL))), (((/* implicit */long long int) var_12))));
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_16 [i_4] = var_6;
        arr_17 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned char) -1316883980683134877LL);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned int) var_9);
                            arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] [(unsigned short)7] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((signed char)-1), (var_4)))), (min((((/* implicit */long long int) (unsigned short)27)), (3410577709880212629LL)))));
                            var_20 = ((/* implicit */long long int) (signed char)122);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_5] [i_4 + 1] [i_6] [(unsigned short)11] [i_9] [i_6] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= ((~(-3410577709880212634LL)))));
                            arr_31 [i_4] [i_5] [i_6] [i_9] [i_9] = ((((/* implicit */int) (unsigned char)160)) == (((/* implicit */int) var_10)));
                            arr_32 [i_4] [i_9] [i_4] [i_7 + 2] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-1LL), (6266750514959483320LL)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_22 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(3410577709880212639LL))))))));
        arr_36 [i_10] = ((/* implicit */unsigned short) max((max((-3410577709880212639LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)245)))))));
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(var_11))))));
    var_24 ^= ((/* implicit */signed char) (((-(var_0))) == (max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))))));
}
