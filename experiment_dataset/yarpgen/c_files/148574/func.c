/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148574
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
    var_18 = var_13;
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) (+(var_10)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_8 [i_1] = (~(3892492527U));
            var_21 = ((/* implicit */long long int) 12761048561313806177ULL);
            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
            arr_9 [i_1 + 3] [i_2] = ((/* implicit */unsigned int) 4218810802913625949LL);
        }
        arr_10 [i_1] = ((/* implicit */unsigned short) 2302982807831905012LL);
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned int) (unsigned short)63);
                    arr_17 [i_1] [i_1] [i_3 + 1] [i_4] = ((/* implicit */_Bool) (+(var_2)));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_23 [(unsigned short)12] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4218810802913625949LL)) ? (((/* implicit */unsigned long long int) 2270329790U)) : (4699677334310259980ULL)));
                            arr_24 [i_6] [i_5] [i_4] [i_3] [i_1 + 3] = ((/* implicit */unsigned int) (signed char)57);
                        }
                        var_24 &= ((/* implicit */long long int) ((unsigned long long int) var_10));
                        arr_25 [i_1] [i_3 - 1] [(_Bool)1] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                        arr_26 [i_1 - 1] [i_3] [i_4] [i_4] [i_4] [i_1 - 1] = ((/* implicit */unsigned int) 1363303714891886427LL);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (4261674291U)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6991974089526272508LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35729))) : (4218810802913625953LL)));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4218810802913625942LL)) ? (4218810802913625949LL) : (4218810802913625949LL)));
                                arr_34 [i_1] [i_3] [i_8] = ((/* implicit */_Bool) (+((+(2616063891U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_1] = ((/* implicit */long long int) var_11);
    }
}
