/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14337
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-1249)), (min((((/* implicit */unsigned long long int) (unsigned char)17)), (17342792405675709456ULL)))))) ? (((var_11) / (25716922U))) : (1841981587U))))));
    var_15 = ((/* implicit */unsigned char) 7602488880644242612ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_12);
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (1841981587U)))) ? (max((1805183783U), (((/* implicit */unsigned int) (unsigned short)60904)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_0)) >> (((((/* implicit */int) (signed char)-98)) + (128)))))));
            }
        } 
    } 
}
