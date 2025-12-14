/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172991
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
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    var_19 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) var_10)) == (var_5))))));
                    arr_6 [i_0] [i_1] [6] [i_2] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)247)))))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)70)) - (41)))))));
                    var_21 -= ((/* implicit */unsigned char) 14593230991156025559ULL);
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)0])), (arr_5 [i_0] [i_1] [4U] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4102904271U) : (((/* implicit */unsigned int) 1357811816))))) && (((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) var_12)) >> (((var_7) - (146463118U))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */int) (signed char)-108)) + (((/* implicit */int) (unsigned short)20))));
}
