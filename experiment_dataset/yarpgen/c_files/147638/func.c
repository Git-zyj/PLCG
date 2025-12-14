/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147638
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 976939251)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 = var_14;
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2]))))) * (min((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (arr_3 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) max(((unsigned short)25159), (((/* implicit */unsigned short) (signed char)-71)))))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((long long int) arr_4 [i_0] [i_1] [i_1] [i_2]))))) == ((((!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1] [i_2])))) ? (14646415390967795384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)253)), ((unsigned short)31551))))))))))));
                    arr_7 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_2] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)50042), (((/* implicit */unsigned short) (signed char)-54))))) ? (((/* implicit */int) (short)-17375)) : ((-(((/* implicit */int) (unsigned short)20912))))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (min((max((7340032), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)1))))))))))));
}
