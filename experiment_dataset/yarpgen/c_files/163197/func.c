/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163197
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
    var_16 *= ((/* implicit */signed char) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 += ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
        var_18 = (+(((/* implicit */int) (unsigned short)7332)));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (-((+(-5877118633839024553LL)))));
        arr_4 [i_1 + 3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((660451518U) >> (((((/* implicit */int) (unsigned short)25940)) - (25914)))))) ? ((-(((/* implicit */int) (unsigned char)15)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned short)64878))));
        var_20 = max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) var_2)))) != ((~(((/* implicit */int) (unsigned short)14500))))))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_7 [18LL] |= ((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) (unsigned short)58204))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) (short)-20728)) : ((-(((/* implicit */int) (short)20727))))))));
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)14)) ? (-5877118633839024553LL) : (((/* implicit */long long int) max((983040), (((/* implicit */int) (_Bool)1)))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-95)), (((((/* implicit */int) (signed char)-95)) | (((/* implicit */int) (signed char)14))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [12U] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (unsigned short)42602)))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            var_22 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((-257061172) + (((/* implicit */int) (unsigned short)11821))))), (min((var_12), (((/* implicit */long long int) (signed char)-54)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2274808682U))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-20747)), ((unsigned short)46584)))) > ((~(((/* implicit */int) (unsigned char)134))))));
            var_24 = ((/* implicit */_Bool) var_2);
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((long long int) (_Bool)1)))));
            var_26 = ((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)18952)) >> (((((/* implicit */int) var_2)) - (33146)))))) % ((-(var_8))))))));
        }
    }
}
