/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103271
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) (unsigned short)27945))))) > (min((1834832662), (((/* implicit */int) var_2))))))) | (min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)0)) : (-1516203608))), (((/* implicit */int) min((arr_2 [i_0]), ((unsigned short)27935))))))));
        var_13 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)0] [(unsigned char)0])) : (((/* implicit */int) var_7)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27963))) : (5842078057567615031ULL)))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) (unsigned short)3992))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) var_0))) && (arr_4 [i_1]))) || (((/* implicit */_Bool) (-(((var_4) + (((/* implicit */long long int) -1049878983))))))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_4 [i_1])))));
                    var_16 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2] [i_3])) | (((/* implicit */int) arr_9 [i_3] [(short)11] [i_2] [i_1]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))))) ? ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))));
                }
            } 
        } 
    }
    var_17 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 1147689896)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_5))))));
}
