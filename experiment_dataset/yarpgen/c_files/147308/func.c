/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147308
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((var_5) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_3)))))))));
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) ((int) 18446744073709551615ULL));
                arr_6 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [3U]))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0 + 2]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? ((+(arr_13 [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 2]))))))))));
                    arr_15 [i_2 + 1] [i_2] = ((/* implicit */long long int) var_3);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_2] = ((/* implicit */long long int) (unsigned short)0);
                        arr_19 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((int) arr_1 [i_2 - 1]));
                        arr_20 [i_2] [i_2] [i_4] [i_2] [i_5] = ((/* implicit */unsigned short) ((int) (unsigned short)5));
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [i_2] = ((/* implicit */unsigned char) min((((short) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)-114))))), (((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_8 [i_2]))))))));
                        var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                    }
                }
            } 
        } 
    } 
}
