/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158959
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((137438953471LL) - (137438953453LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((arr_5 [i_3 - 3] [i_2 - 1] [i_2 + 1] [i_0 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1]))))));
                        arr_10 [i_0 - 2] [16U] [i_2 - 1] [i_1] |= ((/* implicit */short) (+((-(137438953471LL)))));
                    }
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (arr_9 [i_1] [i_1] [i_2] [(signed char)0])));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            arr_18 [i_0] [1LL] [i_2] [i_4] [i_5 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                            var_17 = ((/* implicit */unsigned long long int) 137438953471LL);
                        }
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_6] [i_2] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3873784474410653186LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (var_0) : (((/* implicit */int) arr_11 [i_2] [i_2 + 3]))))) : (((long long int) arr_9 [i_2] [i_2 + 1] [i_4 - 1] [i_6]))))) ? (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) 137438953471LL)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_13)))))))));
                            arr_22 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_4] [i_4 - 3] [i_4] = ((/* implicit */unsigned int) (short)-18773);
                            var_18 -= ((/* implicit */int) arr_6 [i_1]);
                            var_19 = ((/* implicit */_Bool) ((short) (short)18773));
                        }
                        for (long long int i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_20 = arr_4 [i_0 - 1] [i_2] [i_2] [i_7];
                            var_21 = ((/* implicit */_Bool) max((((long long int) (_Bool)0)), (((/* implicit */long long int) min((((/* implicit */int) min((arr_11 [i_2] [i_2]), (arr_9 [i_2] [i_2 + 1] [(signed char)9] [i_2])))), ((~(((/* implicit */int) (unsigned short)52624)))))))));
                            arr_25 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)12912);
                        }
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) -1583438190);
                    var_24 = ((/* implicit */unsigned int) arr_30 [i_9] [i_8]);
                    var_25 = ((/* implicit */_Bool) min((var_7), (((/* implicit */short) ((((unsigned int) var_9)) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))));
                    var_26 = ((/* implicit */_Bool) -441191729);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) var_0))))) | (((/* implicit */int) (short)7030)))))))));
}
