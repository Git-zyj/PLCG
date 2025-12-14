/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154444
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) (unsigned char)250))), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) && (((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-105))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> (((((((/* implicit */_Bool) (signed char)-79)) ? ((~(((/* implicit */int) (unsigned char)20)))) : (((/* implicit */int) var_5)))) + (34)))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)58)) == (((/* implicit */int) (signed char)-58))))) | (((/* implicit */int) var_8))))) % (var_11)));
    var_21 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_13)), (4205824512U))), (((/* implicit */unsigned int) (unsigned char)112))));
    /* LoopNest 3 */
    for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) (+(max((arr_9 [i_1 - 1] [i_2 + 1] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_1 + 1] [10LL] [i_3]))))));
                    arr_13 [i_3] [13ULL] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) (signed char)-58)) ? (var_16) : (((/* implicit */int) var_6)))))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) && (((/* implicit */_Bool) 17874259932863144963ULL)))))));
                }
            } 
        } 
    } 
}
