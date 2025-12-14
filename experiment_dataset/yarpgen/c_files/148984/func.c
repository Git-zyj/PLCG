/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148984
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 &= ((((((/* implicit */int) (short)3)) & (((/* implicit */int) (short)-22018)))) << (((4277161148U) - (4277161134U))));
                    var_20 = ((/* implicit */_Bool) (~((~(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-3))))))));
                    arr_8 [i_0] [i_1] [(unsigned char)1] = ((/* implicit */int) (-((-(((((/* implicit */unsigned long long int) var_8)) & (6737383447515089198ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */long long int) arr_3 [i_4] [i_2])) : (var_18)));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) (signed char)30)));
                                var_21 = ((int) arr_3 [(unsigned short)10] [i_1]);
                                var_22 = ((/* implicit */unsigned char) min((max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)78)))), (1033746304275290932ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 1680854097859692713ULL))))), (arr_10 [i_4] [i_3 - 1] [i_3] [i_2] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_13))));
}
