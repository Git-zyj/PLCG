/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160621
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)248)) > (((/* implicit */int) (unsigned short)39962))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (+(var_3))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)19855))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) (-(var_2)));
                            var_15 &= ((/* implicit */unsigned int) (-(arr_16 [i_0] [i_1] [i_5] [i_0])));
                            var_16 = ((/* implicit */short) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_6))))));
                            var_17 = ((/* implicit */unsigned short) min((arr_0 [i_0]), (var_2)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_0] [(unsigned short)3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((arr_4 [i_7]) << (((var_7) - (5832030523727484437LL))))))))));
                            var_20 &= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned short)39959)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (4193001245150718549ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2221436133167991677ULL) >> (((2221436133167991656ULL) - (2221436133167991626ULL))))))));
            }
        } 
    } 
}
