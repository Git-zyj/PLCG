/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130710
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) max((8179718620704691970ULL), (((/* implicit */unsigned long long int) var_5)))))), (arr_6 [i_2])));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((min((((/* implicit */int) arr_7 [i_2] [i_1 + 1] [i_0])), ((-(((/* implicit */int) arr_3 [i_0])))))) - ((-(((/* implicit */int) arr_3 [i_1 + 1])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (short)21081);
    /* LoopNest 2 */
    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            {
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11)))) : (max((arr_14 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_9)))))));
                var_22 &= (-(((((/* implicit */_Bool) min((arr_10 [i_3 - 2]), (((/* implicit */unsigned long long int) arr_14 [i_3] [(signed char)21] [(signed char)21]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1321553031)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) arr_13 [i_3] [5] [i_4]))))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_9 [1U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 - 2] [i_7 - 1])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-106)), (arr_13 [i_5] [i_6] [i_5])))))))) && (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_16 [i_8] [i_6]))))), (((short) arr_18 [(short)4] [i_6])))))));
                            var_24 = ((/* implicit */int) ((unsigned char) ((-2165538374686159341LL) | (((/* implicit */long long int) arr_22 [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_7 + 1])))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (min((2165538374686159332LL), (((/* implicit */long long int) arr_22 [i_8 + 2] [i_8 - 3] [i_8 + 2] [i_8 + 1])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)4805)), (arr_22 [i_8 - 2] [i_8 - 1] [i_8 + 2] [i_7 - 2]))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 376751284U))));
                            var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 + 2])), (var_17)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])), (arr_22 [i_8 + 1] [i_8 - 2] [i_8 - 3] [i_8 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (+(((int) arr_25 [i_5] [i_5] [(_Bool)1] [i_10 + 2]))));
                            arr_30 [i_5] [i_5] [(_Bool)0] [i_5] = ((/* implicit */_Bool) (+((+(var_4)))));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */signed char) max((((/* implicit */int) arr_17 [i_5])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))))));
            }
        } 
    } 
}
