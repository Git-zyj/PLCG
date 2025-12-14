/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178601
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-12104)), (var_6))))))) & (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-26695))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_14 = var_5;
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26695)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26694))) : (1531447545U)))) : (((67108863ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_15 = ((/* implicit */unsigned long long int) 1531447531U);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26700)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-17871)))))))));
                    var_17 &= ((/* implicit */short) var_2);
                }
                arr_8 [i_0] = ((/* implicit */short) ((unsigned short) ((signed char) max((((/* implicit */unsigned char) var_8)), (var_12)))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_12)))) - ((~(455037072)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)22736)) ? (((/* implicit */unsigned int) var_5)) : (var_7))) + (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) var_0)))))))) : (1272438016055476438ULL)));
            }
        } 
    } 
    var_19 = (_Bool)1;
}
