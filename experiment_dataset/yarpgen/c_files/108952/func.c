/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108952
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) var_11);
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? ((~(((var_0) & (1887073568431496835LL))))) : ((~(1887073568431496835LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_12 [1U] = ((/* implicit */unsigned short) ((_Bool) var_15));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        {
                            arr_18 [i_3] [i_4] [i_3] [(signed char)1] |= ((/* implicit */long long int) ((((/* implicit */int) (short)-16747)) >= (((/* implicit */int) arr_1 [(unsigned short)14] [4LL]))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) (signed char)-81)) <= (((/* implicit */int) (unsigned short)52770))))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned int) var_12)), (((4194304U) & ((-(arr_3 [i_3] [i_5] [i_6 - 2]))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 786777021))));
                var_21 = ((/* implicit */signed char) ((1887073568431496839LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8553)))));
                var_22 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_5);
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+((-(((/* implicit */int) var_5))))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) * (max((-1887073568431496835LL), (((/* implicit */long long int) var_13))))))));
}
