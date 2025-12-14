/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184623
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
    for (int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */signed char) var_7);
                        arr_13 [i_3] [i_2] [i_1] [(signed char)9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)63))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)255)))));
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)144)) ? (var_11) : (((/* implicit */int) var_19))))) & (((unsigned int) -3279281228058805797LL))));
    }
    for (int i_4 = 4; i_4 < 15; i_4 += 1) 
    {
        var_23 = max((1682872966820812633ULL), (((/* implicit */unsigned long long int) (signed char)-48)));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            var_24 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-1)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_12))))), (max((1682872966820812643ULL), (var_7)))))));
            arr_18 [i_4] [i_4] = ((/* implicit */_Bool) max((((long long int) 7812717116075741915LL)), (max((9223372036854775807LL), (((/* implicit */long long int) 4294967295U))))));
            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)));
        }
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3178713383U), (((/* implicit */unsigned int) (signed char)-49))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 698544261U)), ((~(8142318032418052278ULL))))))));
    }
    var_27 = ((/* implicit */signed char) var_10);
}
