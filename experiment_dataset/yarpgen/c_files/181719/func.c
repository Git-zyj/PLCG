/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181719
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
    var_14 = (+(((long long int) ((((/* implicit */_Bool) (short)31137)) ? (var_12) : (var_9)))));
    var_15 = max((max((((long long int) var_12)), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_7)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+(max((min((16137510328374259019ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-1)))))))));
        arr_4 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((+(72057456598974464ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((long long int) (short)26587)) : (((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))))))));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), ((~(11598666820368653424ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)2047)))))))) : (((max((16137510328374259019ULL), (((/* implicit */unsigned long long int) (short)32751)))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) min((((2309233745335292596ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))))), (((((((/* implicit */_Bool) -5869852768575168563LL)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) (+(arr_5 [i_1] [(short)22])))) : ((~(15230350928102360687ULL)))))));
        var_19 -= ((/* implicit */unsigned short) min((((long long int) var_6)), (((/* implicit */long long int) min(((unsigned short)8496), ((unsigned short)255))))));
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned short)6421))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((signed char) var_6)))))))))));
    var_21 *= (~((((~(var_10))) ^ ((~(6593964124778959059ULL))))));
}
