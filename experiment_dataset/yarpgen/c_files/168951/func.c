/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168951
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
    var_10 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (arr_5 [i_0 + 1] [i_0] [i_1])));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) - (max((((long long int) (unsigned short)65535)), (((/* implicit */long long int) arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)15))))));
                                var_13 -= ((unsigned char) ((((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_2] [i_3] [i_3 - 2] [i_4 + 1] [i_0 + 1])) | (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_2))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */int) (unsigned char)75)) << (((((/* implicit */int) (unsigned short)29548)) - (29536))))) : (((/* implicit */int) ((unsigned short) (unsigned char)219))))) : (((/* implicit */int) var_8))));
}
