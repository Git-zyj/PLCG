/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13492
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
    var_15 = ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) var_8)));
    var_16 = (~(max((((/* implicit */long long int) (signed char)3)), (var_0))));
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_1)) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)130)) : (var_13)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : ((~(var_2)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_18 -= ((unsigned int) max((arr_0 [i_0 - 2]), (((/* implicit */long long int) arr_2 [i_0 - 2]))));
        var_19 = ((/* implicit */long long int) var_5);
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_21 += ((/* implicit */signed char) (short)-19544);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)31)) ? (arr_4 [i_0 - 2] [i_1]) : (((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_1]))));
                            arr_13 [i_1] [i_3] [(unsigned char)8] [i_1] [(short)10] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (758544796U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))));
                        }
                        var_23 |= ((/* implicit */unsigned char) (-(5466070285553948105ULL)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) -8222549700267932903LL))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1625207965925809625ULL)))))))), (((unsigned int) ((3536422491U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
}
