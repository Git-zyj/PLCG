/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175205
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) 15095594285453991069ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (3351149788255560547ULL))) != (3351149788255560547ULL)));
                            var_18 = ((/* implicit */short) arr_0 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17749)) != (((/* implicit */int) (unsigned short)17749))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */int) ((7607273427450281824LL) >> (((((/* implicit */int) (unsigned short)38256)) - (38222)))));
                                var_21 = ((/* implicit */int) arr_10 [i_0] [(_Bool)1]);
                                var_22 = ((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1] [(unsigned short)12] [(short)12] [(short)12]);
                            }
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_5);
}
