/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109213
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
    var_12 -= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 1822475801))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_7 [i_0] [i_0]) < (arr_7 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)187)) ? (2167715738U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned int) ((((unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) <= (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), (max((var_6), (((/* implicit */long long int) -1984737430)))))));
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)25816))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (609421526)))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2077972335U)))))));
}
