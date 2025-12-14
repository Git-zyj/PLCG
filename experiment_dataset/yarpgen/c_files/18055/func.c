/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18055
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
    var_20 = ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_3] [i_4 + 2])) && (((/* implicit */_Bool) -899868894)))))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_13 [i_4] [14LL] [i_3] [i_3 - 1] [i_4]))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [2U] [i_0] [(signed char)1] [i_0 + 1] [i_4 - 1])) ? (arr_9 [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) arr_3 [i_4 - 1]))))) ? (((-899868877) / (-899868877))) : (max((arr_3 [i_4 - 1]), (arr_3 [i_4 - 1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -899868916)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [8] [14] [(_Bool)1]))) : (arr_13 [i_0] [i_1] [(signed char)2] [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 899868897)))) : (arr_6 [i_0]))), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) -899868886)), (12288U))), (((unsigned int) 2821011357U)))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [4] [i_0 + 1] [4] [13U] [6])))))) == (arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [5])));
                    var_25 = min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 - 1] [i_2]))) < (arr_5 [i_0 + 1] [i_1] [8])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 24; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 24; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) -1749579393)))))))), (899868897)));
                                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 1473955939U))))))));
                                var_28 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */short) arr_16 [i_5]))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-55)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
}
