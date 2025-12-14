/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187539
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) var_10)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 2395807674U))))))) ? (((/* implicit */int) (unsigned char)65)) : (((int) var_5))));
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 0LL))));
        arr_4 [i_0] = ((/* implicit */long long int) min((min(((+(var_1))), (((/* implicit */unsigned int) ((var_2) / (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) arr_3 [i_0 - 2])))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45542))) <= (1899159621U)));
            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (67778290) : (((/* implicit */int) (unsigned char)107))))) - (max((-2783251453936208772LL), (((/* implicit */long long int) (short)3972))))))) ? ((-(((((/* implicit */_Bool) 2395807663U)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))) : (2395807679U)));
            arr_9 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_1]))) * ((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_0)))))));
        }
    }
    var_19 = ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) != (var_5)))), (var_4)))) ? (((/* implicit */int) ((short) (~(1899159621U))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))) == (((/* implicit */int) ((_Bool) var_11)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (int i_3 = 4; i_3 < 19; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_2]))))), (((unsigned int) max((var_12), (((/* implicit */unsigned int) arr_14 [2]))))))))));
                    var_21 -= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned short)28737)))), (((/* implicit */int) arr_14 [2ULL]))));
                    var_22 = (~(((/* implicit */int) ((unsigned char) min((2783251453936208771LL), (((/* implicit */long long int) (unsigned short)7)))))));
                }
            } 
        } 
    } 
}
