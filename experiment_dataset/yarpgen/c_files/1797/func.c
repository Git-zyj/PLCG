/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1797
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (2282188046U)))) ? ((~(((var_3) / (((/* implicit */int) (short)-2354)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (max((var_3), (var_2)))))));
                var_19 &= ((/* implicit */short) -1970834993);
                arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ ((~(12ULL)))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */int) (short)12185)), (-2062160095))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-((+(1541694440)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : ((-(var_14))))))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(arr_0 [i_2 - 3] [i_2 - 2])))), (min((arr_2 [i_2]), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_2] [i_2])))))));
        var_24 = ((/* implicit */short) 1117592844789035771ULL);
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (-7788110633480705228LL)))) ? (-5705604719406493447LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned long long int) var_17))))) ? ((-(((/* implicit */int) (unsigned char)135)))) : (((int) var_3)))))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                for (long long int i_6 = 4; i_6 < 8; i_6 += 2) 
                {
                    {
                        arr_17 [i_3] [i_4] [i_5] [i_6 - 2] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (signed char)69)), (arr_12 [i_6 - 2])))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 + 1] [i_5 - 1] [i_6 - 1])) ? ((-(((/* implicit */int) arr_9 [i_5 - 1])))) : ((-(((/* implicit */int) (signed char)28))))));
                        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), ((-(3915914360U)))))) : (12111437877873090567ULL)));
                        var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((+(max((205860955), (var_3)))))));
                        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */short) (+(2131773677U)));
    }
}
