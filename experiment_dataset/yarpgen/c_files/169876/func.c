/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169876
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
    var_14 = ((/* implicit */unsigned char) (~((~(max((var_8), (var_7)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5821369903972397393LL)) ? (arr_1 [i_0]) : (arr_1 [i_2])))) ? (((arr_3 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 3]))))) : ((+(arr_0 [i_0])))))) ? (((unsigned long long int) 6153942778503855596LL)) : (((/* implicit */unsigned long long int) ((4232386535U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))))));
                    arr_10 [17LL] [i_2] [19ULL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 4232386510U)) : (14266720986905397773ULL)))) && ((!(((/* implicit */_Bool) arr_8 [i_2 + 2] [0LL] [i_0] [i_0])))))) ? (((((((/* implicit */_Bool) 16552782713125591642ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (1341178379974786847ULL))) << (((var_11) - (8868826866381652726LL))))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                }
            } 
        } 
        arr_11 [5] [5] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_12 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
}
