/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180974
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
    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) -168135583))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) -168135589)), (4294967272U)))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((var_15) ? (2352888428U) : (((/* implicit */unsigned int) 168135582))))))) & (((long long int) min((((/* implicit */long long int) 168135582)), (var_12))))));
    var_19 = ((/* implicit */short) (~(168135577)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 + 3] [i_0 + 2])))) : (((long long int) arr_6 [i_2 - 1] [i_2] [i_0 + 2] [i_0 - 1]))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(-4622205997256274549LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))) ? (var_11) : (0U)));
                        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-32375)), (min((((/* implicit */unsigned long long int) var_3)), (((18062310524226109540ULL) + (5044366625688941305ULL)))))));
                        var_22 = ((/* implicit */short) (unsigned short)90);
                    }
                }
            } 
        } 
    } 
}
