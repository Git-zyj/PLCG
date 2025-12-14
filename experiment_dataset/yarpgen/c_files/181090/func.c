/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181090
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
    var_19 = ((/* implicit */long long int) 15442438948047002451ULL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (~(((((_Bool) 13141401616483939232ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_6))))) : (var_18)))));
                        var_21 = ((/* implicit */signed char) 5305342457225612383ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 13141401616483939232ULL)) && (arr_9 [i_2] [i_4] [i_1] [i_1]))), (((_Bool) max((arr_11 [i_0] [(signed char)6] [(signed char)6] [i_1] [(signed char)6] [i_2] [i_3]), ((short)25721)))))))));
                            arr_12 [i_0] [(signed char)4] [i_2] [(short)6] [4ULL] = ((/* implicit */_Bool) (~(15442438948047002451ULL)));
                        }
                        var_23 = ((/* implicit */signed char) arr_9 [i_3] [i_2] [i_1] [i_0]);
                    }
                } 
            } 
        } 
        arr_13 [5ULL] = ((/* implicit */_Bool) ((unsigned int) (~(arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_24 *= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
        var_25 -= ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_7))) & (((/* implicit */int) arr_14 [i_5 - 1] [6]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_5]), (arr_14 [i_5] [i_5 - 1]))))) : (min((((arr_15 [i_5]) ? (arr_16 [i_5 - 1]) : (arr_16 [i_5]))), (((/* implicit */long long int) ((arr_15 [i_5]) || (((/* implicit */_Bool) 18446744073709551609ULL)))))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) arr_15 [i_5])), (((arr_14 [i_5 - 1] [i_5 - 1]) ? (arr_16 [i_5]) : (arr_16 [i_5])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_23 [i_5] [i_6 + 1] [i_5] [i_5])), (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_15 [i_6]) ? (var_15) : (((/* implicit */int) var_5))))))) : ((+(((long long int) arr_20 [i_5]))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_30 [i_5] [i_8] [i_8] [i_7] [i_6] [(unsigned short)13] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_27 [i_9] [i_6 - 1] [i_8] [i_5] [i_7] [i_6 - 1] [i_5]), (arr_27 [i_5 - 1] [i_8] [i_5 - 1] [i_5] [i_5] [i_6] [i_8])))) ? (((/* implicit */unsigned long long int) ((arr_22 [i_5] [i_6 + 1] [i_7 - 1]) ? (((/* implicit */int) arr_22 [i_5] [i_6] [i_7 - 1])) : (((/* implicit */int) var_5))))) : (max((15442438948047002449ULL), (661106630060699723ULL)))));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((long long int) (short)25740)))) ? (((/* implicit */int) (!(arr_19 [i_5])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 13141401616483939232ULL)) ? (((/* implicit */unsigned long long int) -9100998592271738772LL)) : (5305342457225612384ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((15442438948047002427ULL) * (var_17)));
    }
}
