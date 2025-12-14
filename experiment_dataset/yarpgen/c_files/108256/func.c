/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108256
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
    var_14 = ((/* implicit */_Bool) (+((-(-1LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((arr_8 [i_1]) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0])) == (arr_0 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -775227186)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (-22LL)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (arr_2 [i_2])));
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) % ((~((-(4741321960441419139ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((-15LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))))))));
                                arr_14 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (~(((arr_5 [i_0] [i_1] [i_1]) & (arr_10 [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    var_18 = (-(((int) ((40LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))));
                }
            } 
        } 
    } 
}
