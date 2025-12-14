/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176256
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_2 [i_1] [i_0])), ((~(((/* implicit */int) arr_2 [i_0 - 1] [i_1])))))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_11 = ((/* implicit */unsigned char) (unsigned short)3);
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((+(var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))))) == ((~((-(11627438559671250967ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)65463), (((/* implicit */unsigned short) arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1])))))));
                                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_4])), (arr_6 [i_4] [i_4])))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_2] [i_3] = ((/* implicit */short) (~(18184171323573902691ULL)));
            }
        } 
    } 
}
