/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146174
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8272681983210701565LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (12755165254674391583ULL)))) ? ((+((~(4214069337U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5227)))));
        arr_4 [i_0] |= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))));
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(0ULL)))))))) == (((((((/* implicit */unsigned long long int) -7403114466777323614LL)) - (2080374784ULL))) / (((arr_0 [i_0] [i_1]) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))))));
            var_14 *= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
            var_15 *= ((/* implicit */long long int) 3932160U);
            var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2080374776ULL))))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((!(((((/* implicit */_Bool) (signed char)54)) || (((/* implicit */_Bool) 15630762661969192798ULL)))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_1 - 1])))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-23312)))) || (((/* implicit */_Bool) (short)-1738))))))))));
        }
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            arr_9 [14U] [i_0] [14U] = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4291035124U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 3932160U))))))));
            arr_10 [i_0] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)18804)) == (((/* implicit */int) (unsigned short)28126))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_13 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) 458752U);
            var_18 = ((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_3] [i_3])));
        }
    }
    var_19 = (~(((((((/* implicit */_Bool) var_10)) ? (5030305540262708533LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20710)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)25900))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) 1379044238779273577LL)))) ? (((/* implicit */int) (short)29081)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))))));
    var_21 = (+(-903418555983253976LL));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 16045442453047160846ULL)))) ? (((((((/* implicit */_Bool) 3955814418142735045LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15405))) : (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) (+(var_5)))))) : (((/* implicit */unsigned long long int) ((unsigned int) 3483206222930953156ULL))))))));
}
