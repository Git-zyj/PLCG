/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113824
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
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
    var_13 = var_11;
    var_14 = ((/* implicit */long long int) ((min((2047ULL), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((long long int) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
                            var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0 + 3] [i_3])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 3])) : (((/* implicit */int) arr_4 [i_1 - 3] [i_0 + 1])))), (((/* implicit */int) min((arr_9 [i_0 + 3] [(unsigned char)0] [i_0 - 1] [i_3]), (((/* implicit */short) arr_4 [i_1 - 1] [i_0 + 2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned long long int) 17950256587189701320ULL)), (min((0ULL), (((/* implicit */unsigned long long int) var_1)))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_4 - 1])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1])))))) ? (((((/* implicit */_Bool) min(((unsigned char)245), (((/* implicit */unsigned char) arr_11 [i_5] [i_4 + 2] [i_1] [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_5])))) : ((+(arr_12 [i_0] [i_1 + 1] [i_4 + 1]))))) : (((unsigned int) arr_6 [i_0 + 1] [i_4 + 2]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_10 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) max((var_6), (var_7)))) == (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
}
