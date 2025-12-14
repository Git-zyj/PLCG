/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125316
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
    var_12 = ((/* implicit */int) var_6);
    var_13 *= (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-1), (var_5))))) : ((+(2350706394U))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_1)) >= (arr_8 [(signed char)17])))), (((((((/* implicit */_Bool) var_0)) ? (arr_3 [i_2]) : (arr_5 [i_0]))) / (arr_6 [i_2] [i_0 - 1] [i_2] [i_1 + 3])))));
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [11] [11] [i_3 + 2] [i_3 + 2] [i_2])) ? (((/* implicit */int) var_10)) : (511)))) ? (((((/* implicit */_Bool) 628552460)) ? (((/* implicit */unsigned int) 1020959522)) : (16383U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (short)-30471)))))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0]))) : (var_3));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_16 = ((signed char) arr_2 [i_0 - 1] [i_0 - 1]);
                            var_17 = ((/* implicit */signed char) arr_3 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((((((/* implicit */int) arr_19 [i_0 - 2] [i_0] [i_0 - 2] [i_1 + 2] [i_7])) / (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)-14947)))) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) : (max((((/* implicit */int) arr_17 [i_0] [0] [i_7])), (537)))))));
                            var_19 *= ((/* implicit */short) arr_8 [i_1 + 1]);
                            var_20 = ((/* implicit */signed char) arr_10 [(unsigned char)23] [i_1] [13U] [i_7]);
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) max((arr_17 [i_6] [i_0] [i_6]), (arr_19 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1])))) : (((((/* implicit */int) (short)1306)) * (((/* implicit */int) arr_13 [i_1 + 3] [i_6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 3; i_8 < 11; i_8 += 2) 
    {
        for (short i_9 = 3; i_9 < 12; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) ((3421638497U) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) == (134217727)))) << (((2721377062U) - (2721377056U))))))));
                    arr_27 [i_8] [i_8] [i_8] = ((/* implicit */short) var_11);
                    arr_28 [i_8] = ((/* implicit */signed char) (-(min((arr_21 [i_8 - 3] [i_8 + 1]), (((/* implicit */int) (short)1))))));
                }
            } 
        } 
    } 
}
