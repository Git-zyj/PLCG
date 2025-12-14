/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124225
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14))))) > ((+(var_10)))))), ((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
        var_19 = ((/* implicit */long long int) var_1);
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (-1609024592269490798LL)))) : (((((/* implicit */unsigned long long int) arr_4 [i_1])) / (arr_5 [i_1] [i_1]))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (+(-9223372036854775780LL))))) >> (((((/* implicit */int) arr_3 [i_1])) + (20082)))));
        var_21 = ((/* implicit */_Bool) ((unsigned char) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3517012728U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1609024592269490795LL) : (6944836396377010751LL)))) ? (((unsigned long long int) arr_3 [12U])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (7083829137749425808LL) : (-2894765725098427460LL))))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) & (((arr_10 [i_2] [i_2]) ? (9223372036854775795LL) : (arr_4 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_2] [i_2])))) : (777954568U))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) var_14);
    }
    var_23 = ((/* implicit */short) var_4);
}
