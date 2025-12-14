/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159990
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (short)-27424))));
                var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) (short)15492)), ((unsigned short)43888))), (((/* implicit */unsigned short) var_3))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_11 [i_2] = ((min((max((748750993592635512LL), (((/* implicit */long long int) (short)-16851)))), (((/* implicit */long long int) (short)-15492)))) ^ (((/* implicit */long long int) (+((+(((/* implicit */int) arr_2 [i_2] [i_2]))))))));
            arr_12 [i_2] = (((~(748750993592635491LL))) <= (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 31744LL)) < (arr_0 [i_3])))) | (((/* implicit */int) ((arr_2 [i_2] [i_2]) && ((_Bool)1))))))));
        }
        var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [1LL] [i_2 + 1] [i_2 + 3]), (arr_10 [i_2] [i_2 + 1] [i_2 + 2])))) ? ((-(-960758926457470866LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) * (min((((/* implicit */long long int) 1653220911)), (-748750993592635512LL)))))) < (max((4700502219058750067ULL), (((/* implicit */unsigned long long int) -748750993592635512LL))))));
        var_16 |= ((/* implicit */unsigned char) (~((~(1238479464U)))));
        arr_13 [i_2] = ((/* implicit */short) (((~(5076156522591940665ULL))) << (((/* implicit */int) min((var_9), (((/* implicit */short) var_1)))))));
    }
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (12023458026266240530ULL)));
    var_18 = ((/* implicit */long long int) var_9);
}
