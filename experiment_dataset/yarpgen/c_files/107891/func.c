/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107891
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
    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))) / (11U)));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned short)38647))));
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= ((-((-(((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned int) var_6);
        var_16 = ((/* implicit */unsigned short) min((var_16), (var_1)));
        var_17 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-592))));
    }
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7055))))) / ((((!(((/* implicit */_Bool) 1577545895)))) ? ((((_Bool)1) ? (9223372036854775778LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7056))))) : (((((/* implicit */_Bool) (short)11778)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        var_19 ^= ((/* implicit */unsigned short) ((var_8) ? (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))));
        arr_7 [i_1] |= ((/* implicit */unsigned char) (-((-(var_10)))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-10541))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27917))) ^ (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15042818930826159853ULL)) ? (((/* implicit */int) (unsigned short)13821)) : (((/* implicit */int) (short)-10522))))) ? (((/* implicit */int) (unsigned short)112)) : (((((/* implicit */_Bool) (unsigned short)23999)) ? (((/* implicit */int) (unsigned short)37608)) : (((/* implicit */int) (unsigned short)5470)))))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)14135)) / (((/* implicit */int) (signed char)127)))) >= (((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)1023))))))))))));
        var_21 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)591)) ? (-1577545903) : (((/* implicit */int) (unsigned short)24019))))));
    }
}
