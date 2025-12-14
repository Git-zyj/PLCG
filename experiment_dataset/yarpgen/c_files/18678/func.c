/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18678
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) 6335407900102959844LL)))) ? (6335407900102959847LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20045))))), (((/* implicit */long long int) ((arr_0 [i_1] [i_0]) / (arr_0 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_20 = ((/* implicit */int) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) 2808311851U);
                                var_22 = ((((/* implicit */_Bool) ((-6335407900102959844LL) / (-8020329441548803855LL)))) ? (((/* implicit */int) (short)-9309)) : (((/* implicit */int) arr_5 [i_2] [(_Bool)1])));
                                arr_12 [i_1] [i_2] [i_0] = ((_Bool) (short)9300);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_2))));
                    var_24 = ((/* implicit */unsigned short) var_14);
                }
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8808580683391570830LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10840))) : (6335407900102959825LL)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8128LL))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_4);
}
