/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134226
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
    var_16 = ((/* implicit */_Bool) (unsigned char)190);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) ((_Bool) arr_5 [i_0]))))) ^ (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (6328872877817461735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) (unsigned char)82))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (((+((~(((/* implicit */int) (unsigned char)190)))))) < (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            {
                arr_14 [i_3] [i_3 + 1] = ((/* implicit */signed char) var_15);
                arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (var_6) : (((/* implicit */int) (unsigned char)91))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 2] [i_2 + 3]))) : (((var_11) & (var_15)))))));
            }
        } 
    } 
}
