/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100929
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
    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21117)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44443)))))) ? (((/* implicit */int) (unsigned char)1)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)44419)) : (((/* implicit */int) (signed char)-47))))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21105)) ? (((var_3) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)21117)) : (((/* implicit */int) (unsigned short)14336))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39237)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)198))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((((((/* implicit */_Bool) 3953079416U)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1] [i_1 + 1]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21092)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((var_14) / (((/* implicit */int) arr_2 [(signed char)7])))) : (((/* implicit */int) ((unsigned char) 13875689703573072125ULL)))))));
                        var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)56447)))) + (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (-1306151894) : (arr_3 [i_1 + 1])))));
                    }
                } 
            } 
            var_21 = (signed char)-68;
        }
    }
}
