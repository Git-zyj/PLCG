/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129763
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
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned short) var_4)), (var_10)))))));
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) || (((/* implicit */_Bool) var_3)))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 - 3]))) / (max((arr_6 [i_0 - 2]), (3133975821925229194LL)))))));
                                var_15 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))) && (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 4] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_12 [i_0 - 3] [i_0 - 1] [i_0 - 4] [i_0]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */short) (!(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-13624))))) || (((/* implicit */_Bool) ((unsigned short) arr_3 [i_0 + 1] [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36679)) : (((/* implicit */int) (unsigned short)5))));
                        var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_15 [i_0] [i_1 - 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3620))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_17 &= ((/* implicit */unsigned long long int) (unsigned char)150);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65531)) * (((/* implicit */int) (unsigned char)214))))) + (((((/* implicit */unsigned long long int) var_11)) / (var_7))))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(var_7))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (var_8)));
}
