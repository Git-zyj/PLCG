/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14408
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) var_14);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_4 + 1]))) < (arr_9 [i_0])))), ((-(var_5))))) & (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_13 [i_4] [i_2] [i_4 - 1])), (arr_7 [i_2] [i_3] [i_4]))))))));
                                var_17 = ((/* implicit */unsigned short) arr_2 [i_0] [(short)9] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 3) 
            {
                {
                    var_18 &= ((/* implicit */short) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) != (((arr_15 [i_6] [15LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_6]))) : (arr_2 [i_5] [(_Bool)1] [i_7])))))));
                    var_19 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                    var_20 = max((arr_13 [i_6] [(unsigned short)12] [i_6]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))));
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                    var_22 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
}
