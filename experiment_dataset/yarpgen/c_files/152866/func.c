/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152866
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_0 [i_1] [i_0])) % (((/* implicit */int) arr_0 [i_1] [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 136885986U)) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34694))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2]))) : (min((((/* implicit */long long int) arr_3 [i_1])), (arr_9 [i_3] [i_1])))))));
                            arr_12 [i_1] [i_1] = ((/* implicit */short) var_12);
                            var_19 = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_22 [(_Bool)0] [i_1] [i_4] [i_5] [i_6 - 1] [(_Bool)0] [i_6 + 1] |= ((/* implicit */unsigned long long int) (signed char)3);
                                var_20 = arr_16 [i_0];
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) 4294967289U))));
                var_22 *= ((/* implicit */unsigned char) ((8879613973235869939ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 456678502915861702LL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))));
}
