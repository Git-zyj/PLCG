/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156212
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_3)), (3370006872U)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)90)))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_0] [i_0]) < (var_6)))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1])))), (((((/* implicit */int) arr_3 [i_1 - 1])) + (((/* implicit */int) arr_3 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */short) (+(((max((((/* implicit */long long int) (short)10649)), (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)11168)))))));
                        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_5)) : (1005494968U))) : (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned char)21))) > (var_5)));
        var_17 *= ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((((unsigned int) 12234624892582515577ULL)) - (2592625508U)))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_18 = ((/* implicit */long long int) var_0);
        var_19 = ((/* implicit */unsigned char) min(((signed char)127), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24))))) && (((/* implicit */_Bool) var_6)))))));
        var_20 -= ((/* implicit */signed char) var_2);
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)17] [(unsigned char)2] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_6]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-11168)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)65514)) : (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) arr_16 [i_6] [(unsigned char)13])) : (var_7))))) : (((/* implicit */int) ((signed char) arr_4 [i_6] [i_6])))));
        var_22 = ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50891)) + (((/* implicit */int) (unsigned char)142))))) + (var_6))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_6])) ^ ((((~(((/* implicit */int) arr_14 [i_6])))) ^ (var_5))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * (min((((/* implicit */unsigned int) var_8)), (2060143619U))))))));
}
