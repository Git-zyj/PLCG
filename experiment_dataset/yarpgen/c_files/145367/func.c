/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145367
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
    var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_5)))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_4))) : (((/* implicit */unsigned long long int) var_8))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) min(((~(7656380796625328189ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7656380796625328187ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_2 - 4] [i_2 + 1])))))));
                        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2 - 2])), (var_1))))), (max((min((10790363277084223445ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)124)) ? (var_2) : (var_4))), ((~(min((var_5), (((/* implicit */unsigned long long int) var_11))))))));
                    }
                } 
            } 
        } 
        var_17 += ((/* implicit */short) min(((-(((/* implicit */int) (short)-1888)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_0 [i_0]))))));
        arr_8 [i_0] = min((18305217958323178514ULL), (10790363277084223427ULL));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)229)), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32739))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)1022)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (5647990465251577505ULL))))))))));
    }
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (max((var_5), (((/* implicit */unsigned long long int) min((-9219528087425746499LL), (((/* implicit */long long int) 1420243520U)))))))));
}
