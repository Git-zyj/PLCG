/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170728
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52))))))) / (((/* implicit */int) var_7))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) > (2372476534U)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5610861110206230603LL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (8964790068753212634ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) arr_1 [i_0] [8LL]))));
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            {
                arr_9 [8LL] [i_2] = ((/* implicit */_Bool) 8964790068753212618ULL);
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) 17253030706477064940ULL);
                            arr_14 [i_2] [i_1 - 3] [i_1 + 1] [(short)9] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_1 - 3] [10LL] [10LL] [i_1 - 3])))) : (((((15745493706134031713ULL) + (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_2])))) - (((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))) : (arr_6 [i_2] [i_2] [i_4 + 2])))))));
                            arr_15 [i_2] [i_2] [i_3] [(signed char)13] = ((/* implicit */signed char) 5610861110206230603LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_21 [i_2] [(unsigned char)8] [i_6 - 1] [i_2]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                            {
                                var_14 = ((/* implicit */long long int) (unsigned char)138);
                                arr_25 [i_1] [i_2] [i_5] [i_5] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 3] [i_6 - 1] [i_2]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                            {
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)128);
                                var_15 = ((/* implicit */unsigned char) var_8);
                            }
                            var_16 = ((/* implicit */unsigned long long int) arr_16 [1LL] [i_2] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
