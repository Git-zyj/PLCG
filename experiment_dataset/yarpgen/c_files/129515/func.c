/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129515
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_6)) : (var_2))) / (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_9))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) (signed char)117)), (var_9))) : (((/* implicit */int) max(((unsigned short)34586), ((unsigned short)30947))))))));
    var_12 &= ((/* implicit */unsigned short) min((((max((3043617358U), (((/* implicit */unsigned int) (unsigned short)30947)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (var_9)))))), (((((/* implicit */_Bool) var_0)) ? ((~(3323045002U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 0U)) ? (-490313329) : (((/* implicit */int) (short)9906)))), (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) (signed char)52))));
        var_14 = ((/* implicit */short) (~(((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) (+(var_6)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 211507406U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8676)) ? (1959338540U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26110))))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9473)))))) * (((unsigned int) var_5)))), (((/* implicit */unsigned int) arr_3 [i_1]))))));
        arr_5 [i_1] = var_0;
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (var_9)));
        arr_8 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)19661)) ? (arr_7 [i_2]) : (((/* implicit */int) arr_0 [i_2] [i_2]))))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_6 [i_2] [i_2])))) : (((((/* implicit */int) var_5)) + (arr_7 [i_2])))));
    }
    var_18 *= ((/* implicit */unsigned char) var_7);
    var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8676)) ? (((/* implicit */int) (unsigned short)4095)) : (((((/* implicit */int) (unsigned short)7721)) + (((/* implicit */int) (signed char)49)))))))));
}
