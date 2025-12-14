/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180567
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_7)), (arr_3 [i_1]))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) max((max((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))), (max((var_1), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((int) var_6)))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_0 [i_3]) - (arr_0 [i_2])))) ? (arr_3 [i_1]) : (((unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0])))), (((unsigned long long int) arr_5 [i_3] [i_2]))));
                            arr_11 [i_3] [i_0] [i_0] [9] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_3)))), (arr_3 [i_3]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_1 [i_0])))) >> (((((((/* implicit */_Bool) var_1)) ? (var_6) : (arr_4 [i_1] [i_0] [i_3]))) - (3490415952641894919LL))))))));
                            arr_12 [i_1] [i_1] [i_2] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((var_1) * (max((((/* implicit */unsigned long long int) var_5)), (var_1))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_21 [i_4] [i_0] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_5 + 1] [i_4] [i_5 - 2] [i_6])) || (((/* implicit */_Bool) var_3))))), (var_7)))) >= (((/* implicit */int) max((arr_16 [i_0] [i_5 - 3] [i_6 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
                                var_12 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) var_2))) : (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_5])), (arr_19 [i_0] [i_0] [i_0] [i_4] [i_0] [i_5 - 2] [i_6 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) max((((unsigned short) arr_15 [i_0] [i_1] [i_1])), (((/* implicit */unsigned short) max((arr_15 [i_1] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */long long int) max((((((/* implicit */int) var_0)) & (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_2)))))))), (max((((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) var_9))))), (var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_15 -= ((/* implicit */short) var_0);
        var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_6)) ? (max((arr_24 [i_7]), (((/* implicit */int) var_7)))) : (max((var_5), (arr_24 [i_7]))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_27 [i_8] [i_8]))));
        arr_29 [i_8] = ((/* implicit */unsigned char) (+(var_1)));
        var_18 = ((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (arr_26 [i_8] [i_8]) : (arr_26 [i_8] [i_8]));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((signed char) arr_28 [i_8] [i_8]));
    }
}
