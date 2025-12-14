/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145372
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
    var_17 = ((/* implicit */unsigned long long int) var_2);
    var_18 = ((/* implicit */_Bool) (unsigned short)1);
    var_19 |= ((/* implicit */_Bool) ((int) (unsigned short)65535));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) (unsigned short)12996))))));
        var_21 = ((((/* implicit */_Bool) (signed char)127)) ? (var_13) : (((/* implicit */int) (unsigned short)12986)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) (unsigned short)52539)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)4519)));
            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_23 = (_Bool)1;
            var_24 = ((/* implicit */_Bool) (unsigned short)32914);
            var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)62137)))) ? ((-(arr_0 [18LL] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-87))))));
        }
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */int) ((unsigned long long int) max(((unsigned short)65529), (((/* implicit */unsigned short) (unsigned char)85)))));
        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned short)42083)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))) : (((/* implicit */int) (unsigned short)65535))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)512))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                arr_18 [i_3] [i_4] [i_5] = ((/* implicit */short) (+(((((/* implicit */_Bool) 33546240ULL)) ? (((/* implicit */int) (unsigned short)345)) : (466894811)))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_6 [i_3]), (((/* implicit */unsigned short) (signed char)-125)))), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 4197818435U)) : (arr_16 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) : (arr_16 [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) (signed char)1))) + (((unsigned int) (unsigned char)161)))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_28 = (-(((/* implicit */int) ((unsigned short) var_15))));
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? ((~(-135995682888766260LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -466894795)) || (((/* implicit */_Bool) 466894795))))))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) min((-8545569166273567778LL), (-8545569166273567778LL)))) ? (((/* implicit */long long int) 2519173193U)) : (var_1))));
                var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1140831299)) ? (((/* implicit */unsigned long long int) var_16)) : (17052079986045720765ULL)))));
                var_31 *= ((/* implicit */int) (short)0);
                var_32 = var_7;
            }
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_33 = var_14;
                arr_23 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_17 [i_7] [i_4] [i_4] [i_3])), (arr_0 [i_3] [i_3]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_7])) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)65535)))))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_34 = ((/* implicit */int) min((var_34), (1073741824)));
            var_35 |= ((/* implicit */unsigned char) -1178040424);
            arr_27 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)60))));
        }
        arr_28 [i_3] = ((/* implicit */signed char) (+(min((arr_10 [i_3] [i_3]), (((/* implicit */unsigned int) var_13))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */short) min((((/* implicit */int) ((short) (-(4197818441U))))), (((((/* implicit */_Bool) ((long long int) 1439623791U))) ? (((/* implicit */int) (short)-20811)) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)1))))))));
                                var_37 = ((/* implicit */signed char) ((unsigned short) ((unsigned int) (-(var_1)))));
                            }
                        } 
                    } 
                    arr_38 [i_3] [i_9] [(short)4] = ((/* implicit */short) var_7);
                }
            } 
        } 
    }
    var_38 &= ((/* implicit */int) ((((/* implicit */int) min((min(((short)6958), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (signed char)-76))))) <= (((/* implicit */int) (unsigned short)1))));
}
