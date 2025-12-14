/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180901
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((-7302641147779348383LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1448564039)) && (((/* implicit */_Bool) (unsigned char)144))))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [(short)5] [3ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1448564052)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1098695865U))))) : (((/* implicit */int) (unsigned char)248))));
                var_18 = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 10; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3595788979964831390LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21566))));
                    arr_23 [i_6] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_12))))))) ? ((((+(((/* implicit */int) (unsigned char)255)))) >> (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_12))))))) : ((((+(((/* implicit */int) var_13)))) >> ((((-(var_4))) - (3453236251272724635ULL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_6);
}
