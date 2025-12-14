/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169628
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
    var_15 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0 - 1]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)30))))));
                arr_4 [i_0] = (+(((((/* implicit */_Bool) 3430657620462154020LL)) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) (signed char)-42)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [i_3] [(signed char)0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 3430657620462154022LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (3430657620462154020LL))), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_4])))), (((/* implicit */int) max(((signed char)106), (var_6)))))))));
                    var_17 = (_Bool)1;
                    var_18 = ((/* implicit */unsigned char) arr_8 [i_2] [i_4] [i_4]);
                    arr_13 [4] [i_2] [i_4] [(short)6] = ((/* implicit */signed char) (-((+(((((/* implicit */int) (signed char)39)) * (((/* implicit */int) arr_1 [i_2]))))))));
                }
            } 
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)255)))) : (((/* implicit */int) (unsigned short)65535)))) >> (((-3430657620462154020LL) + (3430657620462154030LL))));
}
