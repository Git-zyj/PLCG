/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164572
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((-12) & (((/* implicit */int) (signed char)-127))))) + (((((/* implicit */_Bool) var_4)) ? (300999299U) : (((/* implicit */unsigned int) var_8)))))), (((unsigned int) max((((/* implicit */unsigned int) (unsigned char)31)), (3504434233U)))))))));
    var_18 = ((/* implicit */int) (+(3219229981U)));
    var_19 = ((/* implicit */int) var_0);
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (max(((+(1006632960U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_1)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (!(((_Bool) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */signed char) 4294967295U);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)14023))));
        var_22 = ((/* implicit */unsigned char) arr_6 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)86))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) arr_5 [i_2] [i_1]);
            var_23 ^= ((/* implicit */signed char) -9223372036854775793LL);
        }
        var_24 |= ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = (-((+(((/* implicit */int) (short)-14253)))));
        var_25 |= ((/* implicit */short) var_5);
        arr_17 [i_3] = (-(((/* implicit */int) (signed char)12)));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 19U)) ? (max((((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) var_16)))), (((((/* implicit */int) (unsigned char)160)) / (((/* implicit */int) (unsigned char)6)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_27 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [18LL] [18LL])))) == (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11)))))));
        var_28 -= ((/* implicit */unsigned long long int) (~(max((arr_18 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)65532))))));
    }
}
