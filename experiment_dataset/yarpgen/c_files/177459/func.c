/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177459
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2139253879), (-2139253879)))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -2139253880)) ? (2139253865) : (((/* implicit */int) (unsigned short)16623)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3477)) > (((/* implicit */int) (signed char)-55))))), (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_2 [(unsigned char)11] [(unsigned char)11])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_10 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)73)) - (((/* implicit */int) (unsigned short)65535))));
                            arr_10 [i_3 + 2] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_3 - 1] [i_1 - 3] [i_0 + 2])))));
                        }
                    } 
                } 
                var_11 = max((max((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_7 [i_1 - 1] [i_0 + 1] [i_1 - 1]))), (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_7)))));
                arr_11 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)60)) != (arr_7 [i_1] [i_1] [i_0]))))))), (((((/* implicit */_Bool) ((3694565875U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) ? (((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1])) : (max((((/* implicit */unsigned int) 2139253878)), (4294967281U)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_0);
}
