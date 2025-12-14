/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171313
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
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))) ? (((var_2) ^ (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)199)))) & ((+(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)33962))));
                                var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10250)))))))) ? (((/* implicit */int) arr_12 [i_0])) : (((((/* implicit */int) (unsigned char)57)) | ((~(((/* implicit */int) var_7)))))));
                                var_14 = ((/* implicit */short) (-(((unsigned long long int) (unsigned short)2))));
                                arr_17 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_5))));
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_10);
                    var_16 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_2);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)49)))))));
}
