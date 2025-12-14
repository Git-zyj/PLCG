/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15832
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 |= 7765359983429422377ULL;
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_19 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10681384090280129238ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_4]) || (((/* implicit */_Bool) var_3)))))) : ((+(12680607573126239925ULL)))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)1] [i_0] [i_0] [1ULL] [i_0] [i_0]))) : (var_11)))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_3]), (((/* implicit */short) (unsigned char)1))))) != (((/* implicit */int) ((_Bool) arr_10 [i_3] [i_3] [i_3] [i_3]))))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_21 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_2]))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) min((max((arr_10 [(signed char)12] [(signed char)12] [(_Bool)1] [(signed char)12]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0])))), (((/* implicit */unsigned long long int) min(((unsigned char)81), (arr_14 [i_0] [i_0] [i_2] [i_3] [i_2 - 2] [i_2] [i_2]))))));
                                var_22 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (max((var_7), (((/* implicit */unsigned long long int) (signed char)-26)))))) | (((((/* implicit */_Bool) 10643964551503227985ULL)) ? (268435455ULL) : (((/* implicit */unsigned long long int) 9223372036854775797LL))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 7802779522206323620ULL))));
                                var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3] [i_5]))))));
                            }
                            arr_19 [i_0] [(unsigned char)15] [i_0] = ((/* implicit */signed char) (+(((((arr_0 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_2 + 2]) : (((/* implicit */unsigned long long int) -9223372036854775798LL)))) + (((/* implicit */unsigned long long int) (+(arr_11 [i_3] [i_3] [i_0] [i_0] [0ULL]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min(((+(min((((/* implicit */long long int) (unsigned short)254)), (var_12))))), (((/* implicit */long long int) (unsigned short)28546))));
    var_26 = var_16;
}
