/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103806
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) var_16)))))));
                var_21 = ((/* implicit */_Bool) var_4);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) <= (17319368717529508465ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : (var_13)))) || (((/* implicit */_Bool) 4979301095135995352ULL))))) : (min((780775825), (((/* implicit */int) (short)4095))))));
                    var_23 *= ((/* implicit */unsigned int) ((-780775826) >= (((-1771875537) + (((/* implicit */int) arr_0 [i_1 - 2]))))));
                }
                for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) var_4);
                    var_25 = ((/* implicit */int) var_3);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-780775826), (((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                }
                var_27 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)65528)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))));
            }
        } 
    } 
}
