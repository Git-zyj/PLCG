/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121958
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((short) (~((~(1736862664U))))));
                    arr_6 [1] [i_0] = ((/* implicit */long long int) arr_5 [(unsigned short)5] [i_1]);
                    var_13 = ((/* implicit */unsigned long long int) 1736862671U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 4; i_4 < 22; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                                var_15 -= ((/* implicit */_Bool) ((short) (_Bool)0));
                                arr_21 [i_7] = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_4))))))) ? ((+(((/* implicit */int) ((_Bool) -567448752))))) : ((-(2147483647))));
                                arr_22 [i_3] [i_4] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48504)) << (((((/* implicit */int) (signed char)-94)) + (105)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_18 [i_3] [i_8])) > (arr_27 [i_3] [i_4 - 2] [i_9]))));
                            var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [(unsigned char)0] [(short)18])) / ((+(((/* implicit */int) arr_20 [i_9 + 3] [i_9 - 2] [i_9] [i_9 - 3] [(signed char)0] [i_9]))))));
                            arr_30 [i_3] [3LL] [i_8] [1LL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_24 [i_3] [i_4 - 4] [i_4 - 4] [i_4 - 4]) ? (((/* implicit */int) (short)-2641)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_4] [i_8] [i_9 + 2]), (((/* implicit */unsigned long long int) (signed char)-32))))) ? (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_4]))) : (arr_14 [(_Bool)1] [3LL] [i_9]))) : (((/* implicit */unsigned long long int) arr_26 [i_9])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
