/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177909
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((((min((var_3), (((/* implicit */unsigned long long int) var_2)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32750))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)32750)))) : (((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((~(var_0)))))))));
                    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112)))))) : (arr_6 [i_0] [i_1] [i_1])));
                    arr_7 [i_0] [i_0 - 3] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [19U] [i_1] [i_0 - 3])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), (var_1)))))) ? (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)112)) ? (arr_4 [17LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((unsigned int) var_7));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_2 [i_3] [i_4] [i_4]))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */int) min((((unsigned char) arr_6 [i_3] [i_3] [i_3])), (((/* implicit */unsigned char) arr_1 [i_3] [i_4]))))) : (((/* implicit */int) (((-(arr_3 [i_3] [i_4] [i_4]))) < (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3] [i_4])))))));
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-255))))));
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-117)) + (((/* implicit */int) (short)-261))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
}
