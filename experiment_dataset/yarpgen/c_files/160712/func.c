/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160712
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [12ULL] [i_0] = ((((627828959519469867ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 627828959519469867ULL)) ? (((/* implicit */int) (unsigned short)28251)) : (((/* implicit */int) max(((short)9288), (((/* implicit */short) (_Bool)0)))))))));
                    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)4057)) - (((/* implicit */int) (_Bool)0))))) ? (arr_2 [i_0] [(signed char)7] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */int) (unsigned char)190)) + (var_10))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
    var_19 &= ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        var_20 = (-(((/* implicit */int) (signed char)-5)));
        var_21 = ((/* implicit */unsigned short) ((((min((6977219968595010877ULL), (((/* implicit */unsigned long long int) 1654010589)))) + (7360193404467632766ULL))) - (((/* implicit */unsigned long long int) (~(466542372))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_17 [i_3 - 2] [i_3 - 1] [i_3] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned short)19614)) ? (((/* implicit */int) arr_16 [i_3 - 1])) : (((/* implicit */int) (short)9491)))) : (arr_14 [i_4]));
            arr_18 [i_3] [i_3] = (+(((/* implicit */int) arr_16 [i_3])));
            arr_19 [i_3] [i_3] = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_3]))))) && ((!(((/* implicit */_Bool) -1654010589)))))));
        }
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-46)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 2] [i_3]))) & (((var_6) + (var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [(_Bool)1])), (515927887U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 13260025257321798484ULL))))) : (((/* implicit */int) (_Bool)0)))))));
    }
}
