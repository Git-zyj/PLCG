/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174709
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned long long int) ((signed char) ((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1470950212U)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-94)))))));
        arr_2 [23ULL] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)42))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) - (arr_1 [i_0 - 2] [i_1 + 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)95))))))), (((/* implicit */unsigned long long int) max(((signed char)119), ((signed char)-91))))));
                    var_16 += ((/* implicit */signed char) ((short) ((unsigned short) var_8)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_11 [i_0 + 1] [(unsigned short)6] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)94)) ^ (((/* implicit */int) (signed char)-76))))), ((-((+(var_11)))))));
            arr_12 [i_0 - 1] [i_0 + 1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-93))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)109)) << (((((/* implicit */int) (signed char)-90)) + (98)))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    {
                        arr_27 [i_4 + 2] [i_4] [i_5 - 1] [19ULL] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                        var_17 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_13) > (var_2))))));
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-94))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)22325)) / (((/* implicit */int) (unsigned char)97))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
    {
        for (unsigned int i_9 = 4; i_9 < 11; i_9 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (+((~(((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_9]))))))))));
                arr_33 [i_9 - 3] = ((/* implicit */short) (~(max((var_9), (((/* implicit */unsigned int) arr_17 [i_8 - 2]))))));
                arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)96))))) <= (((unsigned long long int) min((((/* implicit */long long int) arr_10 [i_9 - 3])), (arr_15 [i_8]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) << (((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_11))) + (1388040112718233614LL))))));
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            arr_46 [22ULL] [i_13] [i_13] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43210)))))));
                            var_22 ^= ((/* implicit */_Bool) ((unsigned int) min(((short)-13751), (var_6))));
                        }
                    } 
                } 
                arr_47 [i_10] [i_10] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)43210))));
            }
        } 
    } 
}
