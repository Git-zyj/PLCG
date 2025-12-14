/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124358
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(10109227236464616275ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) : (var_7)))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((-8975084548884899307LL), (((/* implicit */long long int) 2147483648U))))) || (((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) arr_5 [i_1 - 2]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) (((+(4177920LL))) >> (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6026581165647189930LL)))) ? ((~(arr_9 [i_0] [i_1 - 3] [i_3]))) : (((((((-6026581165647189946LL) + (9223372036854775807LL))) << (((((-4177912LL) + (4177975LL))) - (63LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
                            arr_18 [i_0] [i_1 + 3] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])), (arr_6 [i_4 - 1] [i_1]))))))) != (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6026581165647189931LL)))))) : (min((8975084548884899322LL), (((/* implicit */long long int) (short)-9182))))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_1 + 3] [i_2 + 2] [i_3] [i_5 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_3] [i_2 + 1] [i_1] [i_0])) ? (-8975084548884899315LL) : (arr_15 [i_5 - 1] [i_3] [i_2] [i_1 - 3] [i_0]))) != (((/* implicit */long long int) ((int) var_12)))));
                            arr_23 [i_0] [i_1 - 2] [i_2] [i_2 - 1] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (8975084548884899306LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-109)))))) ? (var_16) : (var_8)));
                        }
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0]);
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-25164)) & (((/* implicit */int) (unsigned char)48))));
                            arr_28 [i_0] = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [i_6])))))) + (((/* implicit */int) ((signed char) arr_20 [i_1 - 1] [i_2 + 1])))));
                            arr_29 [i_0] [i_2] [i_2] [i_2] [i_6] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_6]))));
                        }
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((9632346928973871571ULL) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))))))) != (((((/* implicit */_Bool) arr_17 [i_1 + 2] [i_1 - 3] [i_1 + 1] [i_2 + 2] [i_2])) ? (((((/* implicit */_Bool) (signed char)112)) ? (var_15) : (((/* implicit */long long int) arr_25 [i_0] [i_3])))) : (((/* implicit */long long int) ((arr_25 [i_2] [i_3]) << (((/* implicit */int) (unsigned char)27)))))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_21 [i_3] [i_3] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_1 + 3])))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_1 - 1] [i_1 - 2] [i_7]))) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_7] [i_1 + 2])) != (((/* implicit */int) (unsigned short)61446))))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_34 [i_7] [i_1] [i_2 + 1] [i_7] = (-(((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_1 + 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_16 [i_1] [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_1] [i_1 - 3] [i_1 - 3] [i_2 + 2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            {
                var_24 = ((/* implicit */_Bool) (short)-9176);
                var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)43)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9] [i_8]))) : (-6026581165647189931LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_24 [i_9])) / (((/* implicit */int) arr_2 [i_8] [i_9])))) == (((/* implicit */int) ((unsigned short) arr_2 [i_9] [i_8]))))))) : (((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [i_9 + 2])) ? (((((/* implicit */unsigned long long int) -6026581165647189930LL)) - (4978812318563917970ULL))) : (((/* implicit */unsigned long long int) ((arr_33 [i_8] [i_8] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                arr_39 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)80)), ((unsigned short)65523)));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_14);
}
