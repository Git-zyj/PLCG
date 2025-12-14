/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16209
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
    var_15 += var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min(((~(var_0))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59779)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_12))))));
                                var_19 += ((/* implicit */unsigned char) ((var_9) - ((~((+(281299449)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) var_12);
                                var_21 = ((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [2U])), (var_0)));
                                var_22 *= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_14)), (var_7))) ^ (((/* implicit */unsigned int) max((min((var_0), (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (var_0))))))));
                                var_23 += ((/* implicit */unsigned long long int) (~((~(-7106550112410399652LL)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((14377736012350673157ULL) >= (17ULL)))))), ((~(((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [11LL] [i_0] [i_0] [i_0]))))));
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
