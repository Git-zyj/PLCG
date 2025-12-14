/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135878
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_3)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (3304232411137094371ULL)))))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 15142511662572457240ULL)) ? (15142511662572457221ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) max(((signed char)-35), (var_4)))), (max((((/* implicit */unsigned char) var_4)), ((unsigned char)151))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) (signed char)-15);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_5)))) <= ((~(((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 15767388343404797081ULL)))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) + (arr_5 [i_2]))) : (((/* implicit */int) max(((signed char)37), (var_4))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) -2539900748623072166LL)))))));
                }
            } 
        } 
        var_19 += ((/* implicit */signed char) var_13);
    }
}
