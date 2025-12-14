/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118163
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
    var_18 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1054))) : (var_1))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1054)) * (((/* implicit */int) (short)1054))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), ((unsigned short)65520)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1054)) / (((/* implicit */int) (unsigned short)65535))))) : (((var_8) / (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [7U] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_17), (((/* implicit */unsigned long long int) (signed char)122)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (short)17757)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */long long int) max((((/* implicit */int) (signed char)-112)), (arr_3 [i_1])))))))) : (15LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 ^= max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-115))))), ((~(arr_4 [i_4] [i_1] [i_4]))));
                                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) * (((unsigned int) arr_5 [i_1] [(unsigned char)12] [i_3]))))) || (((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) ((-7009616761331772207LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53792)))))))))));
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_1] |= ((/* implicit */unsigned char) (~((~((~(var_3)))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned char) (~(arr_10 [8U] [(unsigned short)8] [8U] [i_1] [(unsigned char)8] [(unsigned short)8])));
                }
            } 
        } 
    } 
}
