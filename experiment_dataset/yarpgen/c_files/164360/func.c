/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164360
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53182))));
            var_15 = ((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_1]);
            var_16 &= ((((/* implicit */unsigned long long int) (~(-6256307211906198142LL)))) | (max((arr_3 [i_0 - 1] [i_0 - 3] [i_1 + 4]), (arr_3 [i_0] [i_0 + 1] [i_1 - 1]))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) || (arr_0 [i_0 - 2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)15360)) || (((/* implicit */_Bool) (signed char)12))))) : (((/* implicit */int) max(((unsigned short)53175), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)53185)))))));
        }
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) arr_0 [i_5]);
                            var_19 -= ((/* implicit */unsigned short) var_7);
                            var_20 = ((/* implicit */long long int) var_14);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (~(max((3918388125U), (((/* implicit */unsigned int) arr_8 [i_0 - 4] [i_7]))))));
                        var_22 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12331))) >= (2494640876U))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 4] [i_0 - 1] [i_0])) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_2 + 2]) : (arr_12 [i_0 - 3] [i_7] [i_7]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 - 3])))))));
                        arr_23 [i_0 + 1] [i_2] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12343)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)45544))))), (min((((/* implicit */unsigned int) max(((unsigned char)204), (((/* implicit */unsigned char) (_Bool)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2096))) * (4294967295U))))));
                    }
                } 
            } 
            var_23 ^= ((/* implicit */signed char) min(((short)29369), (((/* implicit */short) (_Bool)1))));
        }
        var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (min((((((/* implicit */long long int) 2530613569U)) / (9223372036854775807LL))), (((/* implicit */long long int) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    }
    for (unsigned int i_8 = 4; i_8 < 22; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_12 [i_8 - 1] [i_8] [i_8])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_6 [i_8] [(unsigned char)8])))));
        var_25 *= ((/* implicit */unsigned char) 1446480838711055916ULL);
        arr_29 [i_8] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_9)) >> ((((((_Bool)1) ? (((/* implicit */long long int) arr_15 [i_8] [i_8])) : (arr_12 [i_8] [i_8] [i_8]))) - (1891041253LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_8])) && (((/* implicit */_Bool) var_11))))));
        arr_30 [i_8] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [(_Bool)0])) ? (((((/* implicit */_Bool) 8769690735330184209ULL)) ? (((/* implicit */int) var_13)) : (arr_10 [(signed char)15] [i_8 - 4] [i_8 - 4]))) : ((~(arr_10 [i_8] [i_8 + 1] [i_8 - 4])))));
        var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8] [15])) ? (arr_12 [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8] [i_8])))))) ? (((((((/* implicit */int) arr_22 [i_8 - 3] [i_8] [i_8 - 3] [i_8])) + (2147483647))) << (((arr_17 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8 - 3] [i_8 - 4]) - (1552220117U))))) : (((/* implicit */int) (signed char)126)))), (((/* implicit */int) arr_26 [i_8]))));
    }
    var_27 = ((/* implicit */int) min(((+(2146959360ULL))), (((/* implicit */unsigned long long int) var_14))));
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((944386865U), (((/* implicit */unsigned int) (signed char)99)))))));
}
