/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185621
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(unsigned short)10] [(unsigned char)4] = (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8158657035409188515ULL)) || ((_Bool)1)))), (((arr_6 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3853436496U)) ? (8158657035409188512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((max((((unsigned long long int) 0LL)), (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) 3814428959U))))))) / (((/* implicit */unsigned long long int) arr_13 [i_0])));
                            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((arr_6 [i_3 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61791))))) && (((/* implicit */_Bool) min((var_1), (var_3)))))))));
                            arr_16 [i_2] [i_1] [i_2] [i_3] |= ((/* implicit */long long int) arr_13 [i_2]);
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [2ULL] [i_1] [i_1]);
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_26 [(short)8] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17455760173645492650ULL)) ? (((/* implicit */int) (unsigned short)3744)) : (((/* implicit */int) arr_22 [i_5] [i_5] [i_4]))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_4)))))));
                    arr_27 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */signed char) max(((+(((/* implicit */int) ((short) arr_19 [i_4] [i_5]))))), (((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) arr_4 [i_4])), (var_4)))))));
                }
            } 
        } 
    } 
}
