/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134913
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -74499757)) > (2573336685U)));
                var_17 *= ((/* implicit */short) ((((((/* implicit */_Bool) -74499741)) ? (74499777) : (((/* implicit */int) (unsigned short)16984)))) ^ (((int) (-(((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_18 += ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) var_5);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_3] [i_5] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 74499756)), (min((min((((/* implicit */unsigned int) arr_1 [i_5])), (var_15))), (((/* implicit */unsigned int) var_2))))));
                                arr_18 [i_6] [i_2] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */short) min((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((((/* implicit */_Bool) arr_15 [i_6 - 1] [(short)1] [(short)1] [i_6] [i_6 + 1] [i_6] [i_6 + 1])) ? (arr_15 [i_6 - 1] [i_6] [i_6] [7] [i_6 + 1] [i_6] [i_6 + 1]) : (arr_13 [i_6] [i_6] [i_5] [i_6] [i_6 + 1])))));
                                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)34033))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_2] [(short)2] [i_3] [i_8] [(unsigned short)3] = (+(-74499757));
                            arr_25 [i_2] [i_2] [(signed char)8] [i_2] [i_2] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_11 [i_8] [i_7] [i_3] [(signed char)1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_20 [i_8]))))))) : (((/* implicit */int) arr_22 [i_2] [i_8] [i_7] [i_2] [i_3] [i_2]))));
                            var_21 = ((/* implicit */int) (((+(((((/* implicit */_Bool) 201055011)) ? (arr_4 [i_8] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (unsigned short)31497);
}
