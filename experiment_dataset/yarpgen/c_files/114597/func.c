/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114597
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
    var_13 = ((/* implicit */_Bool) min((262144), (((/* implicit */int) max((min(((unsigned short)32810), (((/* implicit */unsigned short) (unsigned char)208)))), (((/* implicit */unsigned short) var_10)))))));
    var_14 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 10412962266078051360ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (var_8)));
                            arr_13 [i_0] [i_1] [(unsigned short)5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)11))))) <= (arr_2 [i_3] [i_1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (arr_10 [i_4 - 1]) : (arr_10 [i_5 - 1]))) : (((/* implicit */long long int) ((unsigned int) arr_10 [i_4 - 1])))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32706)) | (((/* implicit */int) (short)-23903))))) ? ((~(((/* implicit */int) (unsigned short)32812)))) : (((min((((/* implicit */int) arr_15 [i_1] [i_4])), (arr_17 [i_1] [i_4 - 1] [(unsigned char)8]))) % ((~(((/* implicit */int) (unsigned short)32812)))))))))));
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_4] [i_5]))))) ? ((-(((/* implicit */int) (unsigned short)10)))) : (((/* implicit */int) (unsigned short)32809)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5570)) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))) ? (max(((-(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)1492)) : (-2147483636))))) : ((-(((/* implicit */int) (short)-26693)))))))));
}
