/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184208
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)28661))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned short) -3098743325317580401LL);
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 3098743325317580401LL))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_17 -= ((/* implicit */unsigned int) 3098743325317580395LL);
                                arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (_Bool)1))));
                                arr_16 [i_0] [i_3] [i_2] [i_1 + 1] [i_1] [i_0] = ((/* implicit */int) 15984155489163965547ULL);
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                            {
                                var_19 *= ((/* implicit */unsigned short) (_Bool)0);
                                arr_19 [i_0] [i_0] = (signed char)-80;
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) (_Bool)0);
                                arr_22 [i_0] [i_0] [i_3] = (unsigned char)251;
                                arr_23 [i_0] [i_1 - 1] [i_7 - 1] [i_3] [i_0 - 3] = ((/* implicit */int) (_Bool)0);
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                            {
                                arr_33 [i_10] [i_9] [i_8] [i_0] [i_1 + 1] [i_0] [i_0 + 1] = (_Bool)1;
                                arr_34 [i_0] [i_0] [i_1] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */long long int) (_Bool)0);
                                arr_35 [i_0] [i_8] [i_8] [i_9] [i_8] |= ((/* implicit */short) (_Bool)1);
                                arr_36 [i_0] [i_0] = (signed char)56;
                                arr_37 [i_0] [5LL] [i_0] = ((/* implicit */unsigned short) (unsigned char)52);
                            }
                            var_21 -= (unsigned short)45218;
                            var_22 -= ((/* implicit */long long int) (_Bool)0);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) -5113581996697031913LL);
                var_24 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_7))));
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (var_2)));
}
