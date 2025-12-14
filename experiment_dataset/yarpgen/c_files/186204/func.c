/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186204
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((var_15) + (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (1101594127U)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 1698488215))))) ? (((((/* implicit */_Bool) 1975063184)) ? (((/* implicit */unsigned int) 1073740800)) : (3398633694U))) : (3398633694U))) >> (((-1LL) + (11LL)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_20 = -1698488211;
                        var_21 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3413391583U)) ? (66060288) : (((/* implicit */int) (signed char)97))))), (((long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_2])) ? (((/* implicit */int) (signed char)-65)) : (-1698488192))))));
                        var_22 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) == (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-9355)) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)2047))))))));
                        arr_13 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */signed char) var_8);
                        arr_14 [i_0] [(unsigned short)13] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [10])))) < (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])), (var_11)))), (var_4)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))));
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_11 [i_0]))))), (var_4)));
    }
    var_24 = (~((+(max((1778514135), (((/* implicit */int) var_6)))))));
    var_25 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (314354740) : (-1842001465)))) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) var_12)))));
}
