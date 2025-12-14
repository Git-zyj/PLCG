/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104955
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
    var_13 -= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [7ULL] [i_2] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) : (arr_3 [(unsigned char)3])));
                                var_15 &= ((/* implicit */unsigned char) arr_6 [i_0 - 4] [i_1] [i_1]);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)29)))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (arr_0 [i_0])));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (4908741591569551325LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))))) % (arr_1 [i_0 - 3] [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-24)))))));
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    arr_23 [i_7] [i_7] [i_6] [i_5 - 3] = (+(arr_22 [i_6] [i_6]));
                    var_20 += ((/* implicit */long long int) arr_16 [i_5] [i_7]);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_21 [i_5 + 1]))));
                    arr_24 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)75)) + (((/* implicit */int) (unsigned short)34729))));
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                {
                    var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)39072)) >= (((/* implicit */int) arr_15 [i_5 - 2]))))) : (((/* implicit */int) (signed char)33))));
                    var_23 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_21 [i_5 - 1])) > (((/* implicit */int) arr_21 [i_5 + 1])))))));
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4908741591569551325LL))));
                    arr_31 [i_9] [(signed char)0] [i_5] = ((/* implicit */unsigned char) arr_18 [(short)9] [i_5 - 3]);
                    var_25 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_26 [i_5 + 1] [i_5 + 1])))) * (((/* implicit */int) arr_28 [i_5 - 3] [i_9]))));
                }
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((-1574996981654512607LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_5 - 1])))))));
                }
                arr_36 [i_6] = ((/* implicit */long long int) (short)25771);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((long long int) (unsigned char)112))))));
}
