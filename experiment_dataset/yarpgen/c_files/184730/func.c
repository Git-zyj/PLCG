/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184730
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)109)), (var_1)))))) % ((+(((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_0] [i_0])) || ((_Bool)1)))))))));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] = (+(max((var_4), (3258852849402628751ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_25 [i_7] = ((/* implicit */signed char) var_0);
                                arr_26 [i_4] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_6] [i_7]))) + ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2147483648U)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] [i_6]);
                    var_15 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */int) var_12);
    var_17 += ((/* implicit */long long int) ((((max((3258852849402628751ULL), (((/* implicit */unsigned long long int) 924554898)))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42022))) / (var_12)))))) <= (var_8)));
}
