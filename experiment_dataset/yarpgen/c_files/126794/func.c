/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126794
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_19 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (((unsigned short) (unsigned char)218))))) << (((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_15))) - (2704770674435491810ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (((unsigned short) (unsigned char)218))))) << (((((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_15))) - (2704770674435491810ULL))) - (15741973399274088665ULL))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [(_Bool)1]), (arr_0 [0LL])))) ? (((/* implicit */long long int) min((-1439179809), (((/* implicit */int) var_11))))) : (((long long int) arr_0 [2]))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (((-(arr_1 [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
        var_23 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) -8297292937086248260LL)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_0)))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (var_9)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)255)))))))))));
        var_25 = ((/* implicit */unsigned int) var_16);
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((15801178472713500154ULL) << (((2390004839U) - (2390004824U))))))))));
    var_27 = ((/* implicit */short) var_8);
}
