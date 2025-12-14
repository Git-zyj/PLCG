/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18816
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
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_18 = (+(((/* implicit */int) (unsigned short)27113)));
        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)17)) : (arr_0 [i_0] [12])));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)238)))))));
            arr_4 [(unsigned char)0] [(unsigned char)0] [i_0] = (-(arr_2 [i_0] [i_0 - 1]));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38423))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) -8713064534274539276LL)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (short)-9536))))));
    }
    for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
        var_23 = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)0)))), (max((arr_0 [16LL] [20LL]), (((/* implicit */int) (short)-15223))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)12), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) var_13)), (7176701620554646450LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-17))))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) != (max((arr_2 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7176701620554646450LL)) ? (-912397068675289386LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [(unsigned short)14]))))))))));
        var_25 = ((/* implicit */short) (unsigned char)0);
    }
    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 426328372)) ? (((/* implicit */int) arr_7 [2])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 2] [(unsigned short)0])))) != (((/* implicit */int) max(((unsigned short)27113), (arr_3 [i_3] [i_3 - 3] [22]))))));
        var_27 = ((/* implicit */short) arr_2 [i_3] [i_3]);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (-6981650638806433050LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (signed char)-41))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_3 - 2]), (arr_8 [i_3 + 1]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3 - 3])) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-9536)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_15)))))));
    }
    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
    {
        var_29 = ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) min(((unsigned short)6146), ((unsigned short)45009)))) : (((/* implicit */int) var_6)));
        var_30 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((int) var_2)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)10] [22U]))))))))));
        arr_13 [5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_4 - 2] [(unsigned short)16]), (arr_0 [i_4 - 2] [12ULL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4 + 1]))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)6132)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_0 [i_5] [i_5]))));
        var_32 = ((/* implicit */_Bool) (short)-13130);
        var_33 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) (unsigned char)17)))), (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? ((-(((/* implicit */int) (short)9521)))) : (((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [i_5])))))) : (((arr_2 [i_5] [i_5]) & (((/* implicit */unsigned long long int) var_13))))));
    }
    /* LoopSeq 1 */
    for (int i_6 = 1; i_6 < 13; i_6 += 4) 
    {
        var_35 = max((((/* implicit */unsigned int) (short)-27519)), (min((((/* implicit */unsigned int) arr_3 [i_6 + 2] [i_6] [i_6])), (arr_17 [i_6]))));
        arr_19 [i_6] [i_6] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))))));
    }
    var_36 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_0)))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6146))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6147)))))) ? (var_13) : (((/* implicit */int) var_7))));
}
