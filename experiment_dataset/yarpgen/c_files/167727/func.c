/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167727
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = 3282906757U;
                arr_7 [i_1 - 1] [i_0] [i_0] = arr_2 [i_0] [i_1 - 1];
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) % (1012060547U)))))))) / (((long long int) 3282906757U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) min((arr_5 [i_3 + 1]), (3282906757U)))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) 3282906757U)) ? (3282906757U) : (1012060538U))) : (((480094002U) << (((18446744073709551615ULL) - (18446744073709551611ULL))))))) : (min((((/* implicit */unsigned int) ((3814873303U) != (arr_5 [i_3])))), (min((((/* implicit */unsigned int) arr_12 [i_3 + 1] [i_2])), (var_1))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_20 [i_2] [i_3 + 2] [i_4] [i_5] = ((/* implicit */unsigned char) 480093992U);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (arr_19 [i_5] [i_5 + 3] [i_5 - 1] [i_3 - 1]) : (arr_19 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_3 - 1]))), (min((4239979740U), (1012060538U))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) (-(((unsigned int) 1012060534U))))) ? (((/* implicit */unsigned int) (-(arr_12 [i_3 - 1] [i_3 + 2])))) : ((-(arr_16 [i_7] [i_6 - 1] [i_6] [i_6] [i_2]))));
                            arr_26 [i_7] [i_6] [i_3] [i_2] = ((long long int) 480093992U);
                            arr_27 [i_7] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_15 [i_2] [i_3 + 1] [i_7])))) ? (((/* implicit */unsigned long long int) (+((~(0U)))))) : (((unsigned long long int) ((long long int) arr_12 [i_2] [i_2])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    arr_31 [i_8 - 2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) 480093992U)));
                    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_2] [i_3]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_34 [i_2] [i_9] [i_3] [i_8] [i_9] [i_9] = (+(54987552U));
                        var_21 -= 480094003U;
                        arr_35 [i_9] [i_8] [i_3] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_32 [i_9] [i_9] [i_3] [i_9] [i_2]))) >= (((/* implicit */unsigned long long int) (-(1012060559U))))));
                        var_22 = ((/* implicit */unsigned int) (-(arr_32 [i_3] [i_9] [i_3] [i_3 + 2] [i_3])));
                    }
                }
                arr_36 [i_2] = 3282906751U;
            }
        } 
    } 
}
