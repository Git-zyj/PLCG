/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189267
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                    var_18 = min((((/* implicit */unsigned long long int) (signed char)104)), (16600613136944713553ULL));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned short)14835))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20791)) | (-889145653)))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)60)), ((short)6450)))) : (((/* implicit */int) (!(arr_1 [i_3 + 1] [i_3]))))))) : ((-(min((((/* implicit */unsigned int) (unsigned char)195)), (2970810964U)))))));
                var_20 = min(((-(((/* implicit */int) (unsigned short)62091)))), ((-(((/* implicit */int) var_15)))));
                arr_13 [i_3 - 2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)19923)), (-38933947)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((602707294U) << (((((/* implicit */int) arr_7 [i_4])) - (32005)))))));
                var_21 = ((/* implicit */short) ((((((/* implicit */int) (short)26878)) == (1029299496))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3444)) || (((/* implicit */_Bool) 889145652)))))) : (max((((/* implicit */unsigned int) (unsigned char)76)), (2334044122U)))));
            }
        } 
    } 
}
