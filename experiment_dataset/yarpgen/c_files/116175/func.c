/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116175
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
    var_13 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32584)), ((unsigned short)12))))) & (min((((/* implicit */unsigned int) var_0)), (var_7))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_0 [i_0]))))) : (((-7005697693428409007LL) % (((/* implicit */long long int) -8388608)))))), (((/* implicit */long long int) -364888411))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_0 + 2])), (((364888396) / ((-(((/* implicit */int) arr_0 [i_0 - 2])))))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((arr_1 [i_0 - 1]) % (arr_1 [i_0 + 2]))) << (((((arr_2 [i_0 + 3] [i_0 - 1]) / (((/* implicit */long long int) arr_1 [i_0 + 3])))) - (1298942668LL))))))));
        arr_4 [i_0 + 3] = ((/* implicit */unsigned long long int) (unsigned short)3459);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)27))))))));
        arr_8 [i_1] &= ((/* implicit */signed char) ((short) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) <= (-8388606)))));
        var_17 -= max((((((-8388585) < (((/* implicit */int) (unsigned short)65529)))) ? (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (3976173871121725434LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)29116))))))), (((/* implicit */long long int) ((int) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) arr_7 [i_1] [i_1])))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-33))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((((/* implicit */_Bool) -364888417)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned short)36378)))))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_5])) ? (arr_2 [i_3] [i_4]) : (arr_2 [i_4] [i_2])))) ? (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5]))))) : (max((((/* implicit */unsigned long long int) (signed char)-90)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned char) arr_18 [i_2] [i_3] [i_4] [i_5]))))) : (arr_16 [i_4]))))));
                        arr_20 [i_5] [i_4] [i_5] [i_5] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)92)) << (((((/* implicit */int) (signed char)-89)) + (92))))), (((/* implicit */int) (signed char)-75))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_3 - 3] [i_4] [i_5])) : (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_5]))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15133))) : (arr_16 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2] [i_3 - 2] [i_4])) & (((/* implicit */int) arr_14 [i_3] [i_4] [i_5])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((signed char) min((arr_18 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 1]), (arr_18 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-54)) & (((/* implicit */int) (signed char)92))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8388612)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)-35))));
                            arr_24 [i_4] [i_3 - 1] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) arr_10 [i_2] [i_3 - 3])));
                        }
                    }
                } 
            } 
        } 
        var_22 |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_19 [i_2] [i_2] [i_2])), (var_5)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))) & (arr_21 [i_2] [(signed char)14]))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_15 [i_2] [i_2])), ((signed char)-117))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (short)339);
        var_24 += ((/* implicit */unsigned short) (+(((-8388626) % (((/* implicit */int) (signed char)-29))))));
    }
}
