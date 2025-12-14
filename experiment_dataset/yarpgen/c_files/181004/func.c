/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181004
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -4883092089137771683LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (4294967295U)));
        var_15 = (-(((/* implicit */int) var_6)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 4] [i_0 + 3])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 4]))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42223))))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 370560891360472238ULL)) ? (((((/* implicit */_Bool) -1873615791)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-43)))) : (((/* implicit */int) arr_2 [i_0 + 2]))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -863606630)) || (((/* implicit */_Bool) (unsigned short)16383))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_1] [(_Bool)1] [i_3] [i_4]))))))));
                            var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 3; i_5 < 19; i_5 += 4) 
        {
            var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)14]))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_5 - 1])));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_5 - 1] [i_0]);
            arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_5])) != (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0])))));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_6]))));
        arr_22 [i_6] [12ULL] = ((/* implicit */short) var_6);
    }
    var_21 = ((/* implicit */_Bool) ((15044935885772497457ULL) & (((/* implicit */unsigned long long int) 1U))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967295U), (var_7)))) ? (min((4294967295U), (((/* implicit */unsigned int) var_1)))) : (4294967295U)))) ? (2974407289614754261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5218544586145464113LL)) || (((/* implicit */_Bool) (unsigned short)785))))))));
}
