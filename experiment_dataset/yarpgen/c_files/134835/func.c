/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134835
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) 5503928889652343844ULL)) ? (-1179623587) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) 15406112660163968091ULL))))))));
    var_15 = ((/* implicit */unsigned long long int) -1179623587);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (var_0) : (((/* implicit */int) ((short) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_2 [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) ((((5503928889652343844ULL) << (((arr_2 [i_0]) + (2064886386))))) != (((/* implicit */unsigned long long int) -1179623587))));
        var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1883458012U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (15406112660163968091ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (arr_7 [i_1]));
                        arr_14 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((int) arr_4 [i_1] [i_1]));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) ((5503928889652343862ULL) << (((/* implicit */int) (signed char)43))))) ? (((/* implicit */int) var_9)) : (var_0)))));
}
