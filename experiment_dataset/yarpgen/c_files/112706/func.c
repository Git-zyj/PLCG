/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112706
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */short) var_1)), (min((((/* implicit */short) (signed char)-112)), ((short)-17497))))));
    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((14961194781440150666ULL) - (14961194781440150660ULL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_15))) : (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (var_5) : (((/* implicit */long long int) ((unsigned int) var_9))))))));
    var_22 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_7))) != (var_10))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */long long int) (short)17471);
                    arr_11 [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (short)17497)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (+(-1)))))))));
                    var_23 &= (~(((/* implicit */int) ((signed char) min((arr_8 [i_0 + 1] [i_1]), (((/* implicit */unsigned int) var_12)))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_2 [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_4 [i_3] [(unsigned short)7] [i_3]))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3])), (var_5)))) || (((/* implicit */_Bool) arr_12 [i_3])))))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3]);
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) 517820330566698322ULL)) ? (((/* implicit */unsigned long long int) 1727252398)) : (8123208359944101938ULL))))));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_2 [i_3] [i_3])))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)3498)) : (((/* implicit */int) arr_0 [i_3]))))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))) : (var_10)));
    }
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */short) var_7);
        arr_22 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-63))));
        arr_23 [(_Bool)1] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)2] [i_4] [i_4])) ? (((/* implicit */int) var_18)) : (var_13)))) ? (var_9) : (((/* implicit */unsigned long long int) max((arr_7 [i_4] [i_4] [i_4] [(unsigned char)11]), (((/* implicit */unsigned int) (_Bool)1)))))))));
        var_25 += ((/* implicit */unsigned char) (+((-(arr_8 [i_4] [i_4])))));
        arr_24 [(unsigned short)10] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1969774808)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17508))) : (arr_8 [i_4] [i_4])))), (((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_26 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_11))))) & (((unsigned int) arr_1 [i_5]))))) ? (((/* implicit */unsigned long long int) arr_18 [i_5] [(_Bool)1])) : (((((/* implicit */_Bool) ((int) (signed char)81))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17520))) < (var_6))))) : (var_10)))));
        arr_28 [i_5] = ((/* implicit */signed char) (+(((511U) | (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-69)))))))));
    }
}
