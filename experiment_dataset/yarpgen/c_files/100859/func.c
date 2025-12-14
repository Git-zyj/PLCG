/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100859
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (unsigned char)234))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9214364837600034816ULL)) ? (((/* implicit */int) (short)-8004)) : (((/* implicit */int) var_9)))))))), ((unsigned char)19))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_15), (var_15))))))), (min((13352202856816573512ULL), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)253)))))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)70)))), (((((/* implicit */_Bool) arr_0 [5ULL])) ? (((/* implicit */int) arr_3 [i_1])) : (-1)))))) ? (min((((/* implicit */int) min((var_8), (var_11)))), (29941130))) : (min(((-(((/* implicit */int) arr_1 [i_0] [(short)12])))), (((/* implicit */int) (unsigned short)44670))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5094541216892978095ULL), (5094541216892978086ULL)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))) ? (((((((/* implicit */_Bool) 13352202856816573517ULL)) ? (5094541216892978081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) >> (((((/* implicit */int) (unsigned short)41696)) - (41645))))) : (((/* implicit */unsigned long long int) ((((unsigned int) var_2)) << (((/* implicit */int) min(((unsigned short)41697), (((/* implicit */unsigned short) (unsigned char)3))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] |= ((/* implicit */signed char) ((13352202856816573538ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 871280090U)) && (((/* implicit */_Bool) 3423687209U))))))));
                arr_13 [(unsigned short)12] [i_3] = ((/* implicit */unsigned short) var_14);
                arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) 3423687188U)) && (var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-8019), (arr_11 [i_3 - 2] [i_3] [i_3 - 3]))))) : (((((/* implicit */_Bool) max((5094541216892978102ULL), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_2]))))) ? (var_1) : ((-(var_1)))))));
            }
        } 
    } 
}
