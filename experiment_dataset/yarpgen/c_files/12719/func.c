/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12719
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
    var_12 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) 1550809591U);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_1] [i_0] |= ((/* implicit */signed char) 7716407174911170261ULL);
                            arr_11 [i_2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)57689)))) ? (((/* implicit */unsigned long long int) min((arr_9 [i_0] [(unsigned char)3] [i_2 + 1] [i_2] [i_3]), (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384))) ^ (10730336898798381350ULL)))));
                            arr_12 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) arr_0 [i_1] [i_0]);
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((7182686606771703320ULL) > (((/* implicit */unsigned long long int) ((long long int) (unsigned char)218)))))) | (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) ((arr_1 [i_3] [i_0]) <= (((/* implicit */int) var_6))))) : (((/* implicit */int) ((((/* implicit */int) (short)-20160)) >= (((/* implicit */int) (unsigned char)232))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 19; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) (unsigned short)45107)) ? ((-((+(((/* implicit */int) arr_17 [i_0] [i_1] [12U] [12U])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [(unsigned short)14]))) > (max((((/* implicit */unsigned long long int) var_2)), (arr_2 [i_5])))))));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_4 - 3] [i_5] &= ((/* implicit */unsigned short) arr_7 [i_0] [i_4] [i_4]);
                            var_15 = ((/* implicit */signed char) (((+(((/* implicit */int) max((var_6), (var_5)))))) << (((arr_16 [i_5] [i_0]) + (4063486987167261206LL)))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = -520817173012803601LL;
            }
        } 
    } 
}
