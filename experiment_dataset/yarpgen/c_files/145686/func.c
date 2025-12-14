/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145686
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (+(min((((int) (unsigned short)65535)), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))), (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65535))))));
                                arr_12 [i_1] [i_1 - 2] [i_2] [(unsigned short)12] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned char) (signed char)-119)), (arr_5 [i_1 - 3]))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [11ULL] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)85)), (((((unsigned int) var_2)) - (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-109), ((signed char)-96)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((unsigned char) ((unsigned char) arr_5 [i_0 - 2])));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_7 [(unsigned char)6] [(unsigned char)6])))) % (((/* implicit */int) arr_3 [i_1 + 3] [i_1] [11ULL]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)4), ((unsigned short)65524)))) / (((/* implicit */int) (unsigned short)12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (((((/* implicit */_Bool) arr_11 [i_0] [(short)2] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [4U])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((unsigned short) ((var_8) == (var_8)))), (((/* implicit */unsigned short) var_11)))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)64239))));
}
