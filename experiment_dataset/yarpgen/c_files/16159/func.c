/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16159
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_3] = arr_10 [i_2 - 1] [i_2 - 1] [(signed char)3] [(short)13];
                            var_16 = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((long long int) var_2)))), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((4294967284U), (((/* implicit */unsigned int) 955319395))));
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_5] [(short)1] [i_5] [i_6])) % (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3968))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_6)))))));
                                var_20 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_0]);
                                var_21 = ((/* implicit */unsigned char) arr_15 [i_0] [(unsigned short)7] [i_4] [(signed char)5]);
                                var_22 = ((/* implicit */long long int) arr_4 [i_4] [(short)3] [i_6]);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) max((((unsigned short) arr_12 [i_1])), (((/* implicit */unsigned short) arr_18 [i_0] [4U] [(signed char)2] [i_1] [i_4 - 3]))));
                    var_24 = ((/* implicit */signed char) ((unsigned short) min((arr_8 [i_4 - 3] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-76)), (1734387224)))))));
                    var_25 &= ((/* implicit */unsigned short) max((arr_6 [i_4 - 3] [i_0]), ((+(var_9)))));
                }
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_7] [i_7] = ((/* implicit */long long int) var_2);
                    var_26 = ((/* implicit */unsigned short) arr_24 [i_0] [i_7] [i_1] [i_1]);
                    var_27 = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) <= (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18801)) & (((/* implicit */int) (unsigned char)155)))))))));
                                arr_33 [i_0] [i_7] [i_7] [4U] [i_8] [i_8] [i_9] = ((((/* implicit */_Bool) ((int) (signed char)43))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)29)))) : (max((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (arr_8 [i_8 + 3] [i_8 + 1] [i_7 - 1]))));
                            }
                        } 
                    } 
                }
                var_29 = ((/* implicit */int) max((var_29), ((~(max((((((/* implicit */int) (signed char)-80)) / (((/* implicit */int) (signed char)68)))), (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (short)2016)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))))))));
    /* LoopNest 3 */
    for (short i_10 = 1; i_10 < 6; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned int i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (min((arr_6 [i_10 + 4] [i_10 + 4]), (((/* implicit */unsigned int) arr_25 [i_12] [i_11]))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65533))))) ? ((-(((/* implicit */int) (signed char)-99)))) : (arr_31 [4U] [i_12] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                }
            } 
        } 
    } 
}
