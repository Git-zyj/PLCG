/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104337
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_2 [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                var_17 += ((/* implicit */long long int) max((arr_1 [i_1]), (((/* implicit */unsigned int) min((max((var_15), (var_5))), ((-(var_2))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) == (var_5)))) >= (var_10)))) <= ((-(((((/* implicit */int) var_12)) % (((/* implicit */int) var_6))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)13046)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_22 [i_2] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                            arr_23 [i_2] [i_3] [i_7] [i_3] = (+(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_7])) ? (4294967295U) : (((((/* implicit */_Bool) var_15)) ? (1586802587U) : (4294967295U))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)46525)) / (-301952281))))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) >> (((arr_10 [i_3] [i_3]) - (2728450938U)))))) || (((/* implicit */_Bool) -693818924)))))));
                        }
                    } 
                } 
                arr_24 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)57859)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3097520760U))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                var_22 -= ((/* implicit */unsigned short) (-(min((var_11), (((/* implicit */unsigned int) var_12))))));
            }
        } 
    } 
}
