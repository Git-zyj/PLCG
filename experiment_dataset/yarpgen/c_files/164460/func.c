/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164460
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1835508998561205386LL)) ? (((/* implicit */unsigned long long int) -1835508998561205378LL)) : (18446744073709551614ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((-1835508998561205388LL), (((/* implicit */long long int) 255))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), ((-((-(-8842244171378061526LL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(-1835508998561205386LL))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) (short)7919)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_17)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (80128647828634808ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((+(-264))), (((/* implicit */int) arr_11 [i_0 + 3] [i_3]))))), (18366615425880916783ULL)));
                                arr_19 [i_6] [i_0] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((0U), (2U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (max((255), (((((/* implicit */_Bool) 7640422611317537530LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
    }
}
