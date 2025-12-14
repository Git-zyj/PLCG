/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172916
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 *= min((max((((/* implicit */unsigned int) (unsigned short)24762)), (1832608493U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40773))) * (2462358802U))));
                arr_5 [1LL] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) 3747420495U)) / (-1038147607818195339LL))))), (max((((/* implicit */long long int) min((((/* implicit */int) var_9)), (arr_2 [i_1])))), (arr_1 [i_0])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 415980806164864048LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24762))))))), (var_0)));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] [i_5] [i_4] = ((/* implicit */long long int) min((((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2 + 4]))))), (((((/* implicit */int) arr_7 [i_2 + 1])) > (((/* implicit */int) arr_13 [i_2] [i_2]))))));
                                var_20 = ((/* implicit */unsigned char) 1832608480U);
                                var_21 |= ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_3] [i_3] [i_3] [i_2 - 1]));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */int) max((arr_1 [i_2 - 1]), (((/* implicit */long long int) (!(((((/* implicit */int) (unsigned char)62)) != (((/* implicit */int) arr_13 [i_2] [i_2])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) || ((!(((/* implicit */_Bool) var_4))))));
    var_24 = ((/* implicit */signed char) var_14);
}
