/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162148
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
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */short) ((((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)11160)))))) == (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) 1300146706U);
                        arr_12 [i_0] [i_3] [i_2] [(unsigned short)17] [(unsigned short)17] [i_0] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                        var_19 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0] [i_1])))));
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [(short)4] [i_0 - 1]), (((/* implicit */unsigned short) var_8)))))) : (min((17087634286019206675ULL), (((/* implicit */unsigned long long int) 1260446580368046551LL)))))))));
        arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-125)) >= (((/* implicit */int) (_Bool)1))));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_21 &= ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (2147483647ULL) : (16809020431964767809ULL))) >> (((min((((/* implicit */unsigned long long int) var_14)), (arr_10 [i_4] [i_4] [i_4] [(unsigned short)16] [i_4]))) - (52294ULL)))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((+(min((11387686290780423118ULL), (((/* implicit */unsigned long long int) var_15)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (arr_6 [i_4] [(short)19] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))))))));
        arr_17 [i_4] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */unsigned char) var_9)), (((unsigned char) 4202027626U))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) 28U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)129)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) ((short) var_12));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))));
        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5] [i_5])) - (((/* implicit */int) var_14))))) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : ((~(arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) arr_20 [i_6] [i_6]);
        var_28 -= ((/* implicit */unsigned char) ((short) max(((unsigned short)16869), (((/* implicit */unsigned short) (signed char)-122)))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (signed char)7))));
        var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_8 [i_6])), (((((/* implicit */_Bool) arr_1 [i_6])) ? (min((arr_3 [(unsigned char)17]), (((/* implicit */unsigned long long int) 3U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [i_6])))))));
    }
}
