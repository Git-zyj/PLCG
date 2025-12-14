/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136
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
    var_14 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) ^ (2503843610U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17126)))));
        arr_4 [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) / (min((((/* implicit */int) arr_1 [i_0 + 1] [i_0])), (((((/* implicit */int) (short)7897)) >> (((/* implicit */int) (unsigned char)12))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [7U])) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3324495984U)) ? (((/* implicit */int) (unsigned char)65)) : (arr_0 [i_1] [i_1])))) || (((var_0) == (((/* implicit */unsigned int) arr_0 [i_1] [i_1])))))))) / (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (456532106U)))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)7)))) : (((var_4) >> (((14969892019157739168ULL) - (14969892019157739161ULL))))))) + (((((unsigned int) arr_6 [i_1])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_17 = (!(((/* implicit */_Bool) arr_17 [i_3] [i_5 + 3] [i_5] [i_5 + 3])));
                        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 1515664039U)) : (8796093022207ULL)));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) : (3987558075U))))));
        arr_19 [i_2] [6U] = ((/* implicit */unsigned char) arr_12 [i_2] [i_2]);
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_22 [i_6] &= ((/* implicit */int) min((565675624U), (1889420550U)));
        /* LoopNest 3 */
        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        arr_29 [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned short) ((arr_27 [i_6]) >> (((((/* implicit */int) min(((unsigned char)220), ((unsigned char)90)))) - (53)))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) 3838435216U)), (((/* implicit */unsigned int) min((arr_26 [i_6] [i_7] [i_8]), (((/* implicit */int) var_11)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) ^ (456532109U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((456532088U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))))))))));
                    }
                } 
            } 
        } 
    }
}
