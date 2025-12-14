/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161298
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)46444))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) var_14);
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (unsigned short)22476)), (14178317942862297519ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_5 [(unsigned char)16] [i_2] [i_2] [i_2 + 1])), (arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                            arr_13 [(unsigned short)12] [i_1] [i_2] [i_3] [i_0] = min((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_2] [i_2 - 2] [i_2] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46444)) || (((/* implicit */_Bool) (unsigned short)19092))))));
                            var_17 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) (short)-15428)) ? (((/* implicit */int) (unsigned short)15441)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min(((unsigned short)15872), ((unsigned short)19092)));
                var_19 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2763615897844517671ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1522491171U))))), (min((((/* implicit */int) (unsigned short)46436)), (((((/* implicit */int) (unsigned short)46435)) + (((/* implicit */int) (unsigned short)49663))))))));
}
