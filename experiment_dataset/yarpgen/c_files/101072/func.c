/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101072
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
    var_17 += ((/* implicit */signed char) var_12);
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_14))))) : (max((1789454243836937778LL), (6989836947529071882LL)))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)0)), (min((321560553U), (3973406743U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3973406743U))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_4] [i_2] [5LL] [i_0 + 1]))));
                                arr_12 [2] [i_1] [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */long long int) (unsigned short)13135);
                                var_22 -= ((/* implicit */long long int) ((96468326U) > (3611835558U)));
                                var_23 = ((/* implicit */unsigned long long int) (signed char)73);
                            }
                        } 
                    } 
                    arr_13 [i_1] [12U] [i_1] [i_1] &= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8));
                }
            } 
        } 
        var_24 |= ((/* implicit */long long int) ((((arr_2 [i_0] [i_0 - 1] [1LL]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((5782706137507390608LL) - (((/* implicit */long long int) 2533040657U)))))));
    }
    for (signed char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_23 [i_5] [i_8] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((((((-1777851797826247578LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_18 [i_5 + 1] [i_6] [15ULL])))) >= (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)213)), (-407431262)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 6293978252063273978LL)) ? (935847072U) : (3359120223U))))) : (((/* implicit */int) (short)-26431))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)187)) ? (2012200423U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20471)))));
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10LL])) ? ((+(arr_20 [i_5] [i_6 - 2] [i_7] [i_8 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14039))) >= (1947256341U)))))))) ? (((((/* implicit */_Bool) 10423939813218055140ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (3846707140887697496LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 5480256055612882671LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))));
        var_28 = ((/* implicit */int) 5986966254945894724LL);
    }
}
