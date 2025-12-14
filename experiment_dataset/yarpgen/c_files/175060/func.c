/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175060
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [17ULL] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(14822231245017412562ULL))))));
                            var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_2])), (((unsigned short) arr_2 [i_1]))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) var_12))))) > (((((/* implicit */_Bool) min((var_10), (var_3)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [18LL])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) (signed char)44))))) : (min((var_4), (12094701553198541488ULL))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (unsigned char)52))))) : (((arr_12 [i_4 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22936)))))))));
                    arr_21 [i_4] [4ULL] [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) min((((signed char) var_5)), (((/* implicit */signed char) arr_20 [(unsigned short)23] [i_5] [(unsigned short)6] [(unsigned short)6]))))), ((unsigned char)0)));
                    var_15 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (5309183774643559202ULL))))), (min((arr_17 [i_6] [i_6] [i_4 + 3]), (arr_15 [i_4 - 1] [i_5] [i_6])))));
                }
            } 
        } 
    } 
}
