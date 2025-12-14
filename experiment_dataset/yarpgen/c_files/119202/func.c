/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119202
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */long long int) 4294967279U);
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) 17U))));
                }
                var_12 = ((/* implicit */unsigned int) 1353279050);
                var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) (_Bool)0);
        var_14 *= (_Bool)1;
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) 288230376151711743LL);
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) -5399078193114218187LL);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 4294967279U))));
                            arr_25 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            } 
            arr_26 [i_4] [i_5] [(_Bool)1] = ((/* implicit */int) 4294967266U);
            arr_27 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (signed char)7);
            var_18 = ((/* implicit */unsigned long long int) -1353279050);
        }
        arr_28 [i_4] = -288230376151711774LL;
    }
}
