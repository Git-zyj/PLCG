/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1846
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-2147483647 - 1));
                    var_17 = ((/* implicit */unsigned short) ((7611373365404069496ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2ULL] [i_1])))));
                    var_18 = ((/* implicit */short) ((_Bool) 1064065784U));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-27133))))) : ((~(var_12))))) >= (min(((-(((/* implicit */int) (short)-32761)))), (((((/* implicit */int) (short)-24544)) + (-809084087)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((min((((/* implicit */int) (_Bool)1)), (-1))) < (((/* implicit */int) var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)-12267))))) << (((((((/* implicit */_Bool) (short)27105)) ? (((/* implicit */int) var_5)) : (var_16))) + (11332)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6002600157195471873ULL)) ? (((/* implicit */int) (unsigned short)29550)) : (((/* implicit */int) (short)-27133))))) + ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (15576937123370521837ULL))))))))));
}
