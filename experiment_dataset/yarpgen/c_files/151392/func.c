/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151392
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (((~(var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1]))) - (arr_7 [i_1] [i_3 + 1] [i_1] [i_3 - 1] [i_3])));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) 0LL)) : (3347253528042583277ULL)));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) var_13);
        }
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_12 [i_4] [i_0] = arr_6 [i_0];
            var_22 -= ((/* implicit */signed char) ((((int) (signed char)28)) / (((((/* implicit */_Bool) 1794150266349793550ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)81))))));
        }
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 1889033016)) : (arr_11 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1914627814841825835LL)) ? (arr_10 [i_6] [i_7]) : (-1LL))))))));
                        arr_19 [i_0] [10LL] [i_5] = ((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) / (14264274814751605369ULL))) >> (((((/* implicit */int) var_16)) - (72))));
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_1)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_26 = ((/* implicit */signed char) min((var_26), (((signed char) ((((/* implicit */int) (unsigned char)0)) & (((((/* implicit */_Bool) 4650824586513542970LL)) ? (-572294586) : (((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_8] [i_8])) ? (((/* implicit */unsigned int) 847983608)) : (arr_0 [i_10] [i_9])));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) (signed char)108)) / (arr_33 [i_8] [i_9] [i_10] [i_11] [i_12])))));
                                var_29 = ((/* implicit */int) arr_0 [i_8] [(_Bool)1]);
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9] [i_9]))) : (var_9)));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2357512975U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (var_4) : (((/* implicit */int) (_Bool)1))))) : (13371821573909379517ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) arr_31 [i_14] [i_9] [i_14 - 2] [i_9] [i_9])))))));
                                arr_39 [i_8] [i_9] [i_13] [i_13] |= ((/* implicit */int) (!(((/* implicit */_Bool) 4294967272U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4862719558003849735LL)) ? (((long long int) (signed char)-48)) : (((((-8917023033359188139LL) + (9223372036854775807LL))) >> (((4294967264ULL) - (4294967248ULL)))))));
    }
    for (signed char i_15 = 1; i_15 < 10; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                {
                    var_34 = (((((~(7567378908535384072LL))) + (9223372036854775807LL))) << ((((((_Bool)0) ? (((/* implicit */long long int) arr_43 [i_15 + 1] [i_15 - 1] [i_15 - 1])) : (8289212396362523857LL))) - (8289212396362523857LL))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((max((max((15374463003462703978ULL), (68719476735ULL))), (((((/* implicit */_Bool) arr_2 [i_15 + 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_15 - 1] [i_15 - 1] [i_16] [i_17])) : (18446744073709551615ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16437066407530847980ULL)) ? ((~(arr_1 [i_16]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_0)))))))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) arr_40 [i_15]);
        arr_49 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)4))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 1036583031)))))))) : (((((/* implicit */_Bool) ((unsigned int) var_13))) ? (31LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26820)) >> ((((+(3060275371756240557LL))) - (3060275371756240533LL))))))));
}
