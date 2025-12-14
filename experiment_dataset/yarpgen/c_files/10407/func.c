/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10407
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) (unsigned char)232)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4032U)), (3740483070168852277ULL)))))), (((arr_10 [i_4] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((var_5) | (-108182117))))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_9))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)220)) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) >= (((/* implicit */int) (unsigned char)36)))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) >= (arr_13 [i_0] [4ULL] [i_0] [i_2] [i_1] [i_1] [i_1])))) << (((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [i_2])), (arr_7 [(_Bool)1])))))) == (((/* implicit */int) ((max((((/* implicit */unsigned int) var_14)), (arr_1 [i_0] [i_2]))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [7LL] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_9)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) var_3)))) - ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3740483070168852276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48)))))) ? (((min((32767U), (((/* implicit */unsigned int) var_18)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14727040615393318145ULL)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)63))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(-1614369517))))))));
    var_23 = var_18;
}
