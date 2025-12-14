/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184326
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((unsigned short) (short)11255));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)12017))))));
            var_15 = ((/* implicit */_Bool) (short)-1);
            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (var_4)))));
            var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-4)) ? (-2026106948) : (((/* implicit */int) (unsigned short)25092)))) >= (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        var_18 *= ((/* implicit */unsigned char) (((-(2564199260354878274ULL))) << (((((/* implicit */int) var_11)) - (43)))));
        var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 8908027477972579373LL)) ? (-1940670927) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((((/* implicit */_Bool) 6231314235739366070LL)) ? (((/* implicit */int) (signed char)-14)) : (-1))) + (45))) - (29)))));
    }
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        arr_7 [i_2] [i_2] = min(((~(((/* implicit */int) (unsigned char)28)))), (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 - 2])))));
        var_20 = ((/* implicit */signed char) ((int) max((min((((/* implicit */long long int) arr_3 [i_2] [i_2])), (6893143429154693669LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (short)15703)) : (((/* implicit */int) arr_6 [i_2]))))))));
        arr_8 [i_2] = ((/* implicit */long long int) arr_2 [i_2]);
        arr_9 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((-2026106934), (((/* implicit */int) (signed char)127))))) >= (arr_5 [i_2] [i_2])))), (((((/* implicit */_Bool) ((long long int) arr_6 [i_2]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_2] [i_2 - 1])), (arr_1 [i_2])))) : (((unsigned long long int) (short)18425))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
    {
        var_21 ^= ((((((/* implicit */_Bool) arr_2 [i_3])) || (((/* implicit */_Bool) 6231314235739366070LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) : (320062248U));
        arr_12 [i_3] = ((/* implicit */unsigned char) (+(950388844)));
    }
    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned int) arr_2 [i_4]);
        arr_15 [i_4] &= ((/* implicit */int) arr_14 [i_4]);
    }
    var_23 = (!(((/* implicit */_Bool) -481388320130002043LL)));
}
