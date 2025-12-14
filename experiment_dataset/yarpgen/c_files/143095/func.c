/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143095
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (unsigned short)65527))))))) ? (max((0LL), (((/* implicit */long long int) (unsigned short)65535)))) : ((+((-(0LL))))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)15407)) : (((/* implicit */int) (short)4960))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)7901))))))) : (((/* implicit */int) ((signed char) max(((unsigned short)65535), ((unsigned short)65535)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))), (((/* implicit */unsigned long long int) (unsigned short)11965))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)61), ((unsigned char)239)))), (((((/* implicit */int) (unsigned char)138)) & (-2147483635)))))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : (((((/* implicit */_Bool) 6751814696744889936LL)) ? (((/* implicit */unsigned long long int) 3565325702U)) : (16707928207952745305ULL)))));
                }
            } 
        } 
    } 
}
