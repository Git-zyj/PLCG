/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119
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
    var_17 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (8070450532247928832ULL) : (8070450532247928832ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_2]) || (((/* implicit */_Bool) 8070450532247928832ULL))))) ^ (((/* implicit */int) var_14))))) <= (max(((~(5722894408738434740ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1663637007206941103LL)) || (arr_2 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (min(((-(var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)103)), (var_14)))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (10376293541461622783ULL))), (((/* implicit */unsigned long long int) var_16)))))))));
                        var_19 = ((max((((/* implicit */unsigned long long int) var_4)), (var_13))) << (((max((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 10376293541461622799ULL))))))) - (1441560713U))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) 8070450532247928833ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31044))) : ((~(var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_21 = ((/* implicit */unsigned long long int) min(((~(max((((/* implicit */unsigned int) var_10)), (var_2))))), (((/* implicit */unsigned int) 10))));
}
