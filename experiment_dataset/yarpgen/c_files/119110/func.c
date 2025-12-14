/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119110
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min(((+(((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) var_3))))));
        var_17 = (+(((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_4 [i_1 + 1]);
                                var_19 = ((/* implicit */_Bool) (-((~((-(((/* implicit */int) var_8))))))));
                                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [(unsigned short)6] [i_3])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) var_12);
                    var_22 *= ((/* implicit */unsigned long long int) var_5);
                    arr_15 [i_1] [i_1] [(unsigned char)4] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_3])), (arr_4 [i_1])));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) (~(arr_14 [i_1] [i_1] [i_1] [i_1])));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) var_11))), ((((-(var_13))) / (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17380)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_1))));
        arr_17 [i_1] = ((/* implicit */short) var_0);
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            var_25 = ((/* implicit */long long int) (-(-222091523)));
            var_26 += ((unsigned int) arr_0 [i_7] [i_6]);
        }
        var_27 = arr_1 [i_6];
        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_6] [i_6])), (4061457710431616162LL))))));
        var_29 = ((/* implicit */unsigned short) (-(var_10)));
        var_30 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_0 [i_6] [i_6])) & ((-(((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [(unsigned short)12])))))));
    }
    var_31 = (~(var_6));
}
