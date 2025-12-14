/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112766
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)208)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (min((arr_2 [i_1]), (2443222415U)))))) ? (((((/* implicit */_Bool) arr_3 [7U] [7U] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 1]))) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                arr_6 [i_0] = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_9)) ? (1851744872U) : (477315171U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            {
                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */signed char) (+((~(arr_12 [i_2 - 1])))));
                arr_14 [i_2] = ((/* implicit */int) min((min((((/* implicit */unsigned int) arr_8 [i_2 + 2] [i_2 + 1])), (((1851744880U) << (((((/* implicit */int) arr_9 [i_2])) - (14811))))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (2443222415U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) (+((+(((/* implicit */int) (unsigned short)43061)))))));
                            arr_22 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_2]))));
                        }
                    } 
                } 
                arr_23 [i_2 + 2] [i_2 + 2] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (unsigned short)37271)) : (arr_10 [(unsigned short)9])))) ? (max((arr_7 [i_3] [i_3]), (((/* implicit */int) (unsigned short)43053)))) : (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (+(1851744881U)));
}
