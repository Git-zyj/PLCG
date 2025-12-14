/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117932
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
    var_11 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_9)) | (min((((/* implicit */int) var_8)), (var_7))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = min((min((8386560U), (((unsigned int) arr_4 [i_2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) -486708887)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_3))));
                                var_12 = ((/* implicit */long long int) var_10);
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) - (2177499119U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 486708886)) ? (486708880) : (((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_0 - 2] [i_3 - 2] [i_4]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-3)) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)4085)) : (((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) : (((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10))))) >> (((((((/* implicit */int) var_4)) + (((/* implicit */int) var_3)))) - (3353)))))));
                }
            } 
        } 
    } 
}
