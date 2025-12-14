/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170814
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) var_18)))) < (((/* implicit */int) ((short) ((unsigned char) var_5))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_1 - 1] [(unsigned short)16] [i_3] = ((/* implicit */long long int) 207112701U);
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_0 - 3]));
                            var_20 |= ((/* implicit */signed char) (_Bool)0);
                            arr_12 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */long long int) var_18);
    var_22 |= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (unsigned short i_4 = 4; i_4 < 8; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_20 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_14 [i_4] [i_4 - 2])));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_4])) <= (((/* implicit */int) arr_9 [(signed char)9])))) ? (arr_19 [i_4] [i_5] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))))) ? ((+((~(((/* implicit */int) (short)-470)))))) : (((/* implicit */int) arr_17 [i_4] [i_4] [9ULL] [i_6])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))));
                        arr_24 [i_4] [i_7] [i_6] [i_5] [i_4] |= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)9568)) * (((/* implicit */int) (_Bool)1))))))) : (var_14));
                    }
                    arr_25 [i_4] [(short)8] [i_6] = ((/* implicit */long long int) var_6);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned short) arr_0 [i_6]);
                                var_26 = ((/* implicit */unsigned char) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
