/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175589
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(var_1))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((_Bool) var_4);
        var_19 &= ((/* implicit */int) var_7);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(8363111649789985465LL)))) || (((/* implicit */_Bool) ((int) arr_2 [i_1] [i_1])))))))));
        var_21 |= 4194304;
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((min((656571794U), (((/* implicit */unsigned int) arr_1 [i_1] [10ULL])))), (((/* implicit */unsigned int) ((_Bool) max((3883606083427597950LL), (9223372036854775807LL))))))))));
        arr_5 [(_Bool)0] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1])) << (((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (8363111649789985474LL))) - (205LL)))));
    }
    for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_4))));
        arr_8 [i_2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) -460852316)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 3638395504U)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) / (min((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned int) var_11)) : (var_16)))))));
        var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(4923184554538672410LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 311698480U))) : (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL] [i_2 - 1]))))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 656571789U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : ((-(var_13)))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)30921)) : (((/* implicit */int) (signed char)-115)))))))) : (((/* implicit */int) ((arr_0 [i_2 + 1] [i_2 + 1]) != (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((var_1) - (5980264237813507709ULL)))))))))));
        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) (signed char)126)), (arr_0 [i_2 + 2] [i_2 + 2])))));
    }
}
