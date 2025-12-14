/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130024
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!((!((!((_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_0] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) > ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)947)) > (((/* implicit */int) var_11))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */int) (~((~((~(12947113336270235601ULL)))))));
                                var_19 -= ((/* implicit */unsigned long long int) (-((((+(8645472939964871139LL))) / (((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) arr_0 [i_0])))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) > (arr_1 [i_1] [i_0])))))) > (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) > (((/* implicit */int) (!((_Bool)1))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_5))))))) > ((~((~(5499630737439316026ULL)))))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_2))))))) > (((/* implicit */int) (((-(var_16))) > (((/* implicit */unsigned int) ((/* implicit */int) ((4294967275U) > (var_13)))))))))))));
    var_23 = ((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (3972666421335413271ULL))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                arr_19 [i_5] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (((-(((/* implicit */int) var_9)))) > ((+(((/* implicit */int) arr_15 [i_5])))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~((+((+(((/* implicit */int) var_14)))))))))));
                arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)946)))) > (((/* implicit */int) (((-(((/* implicit */int) arr_12 [i_6])))) > ((-(((/* implicit */int) arr_2 [i_6] [i_5])))))))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (((+(arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]))) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) > (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) > (((/* implicit */int) (signed char)88))))))))));
            }
        } 
    } 
}
