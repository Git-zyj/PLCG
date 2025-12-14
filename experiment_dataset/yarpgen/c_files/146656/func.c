/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146656
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_13)), (((unsigned short) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)157))))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)201))))) ? (((/* implicit */int) ((var_1) >= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((short) max((((/* implicit */int) var_13)), (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (short)32763)) * (((/* implicit */int) (_Bool)1)))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110)))));
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (max((((/* implicit */int) ((_Bool) (short)-32765))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-89)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41188))));
                var_20 = ((/* implicit */unsigned char) (unsigned short)2048);
            }
        } 
    } 
}
