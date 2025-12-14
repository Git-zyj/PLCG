/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18369
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 -= (~(((/* implicit */int) (signed char)105)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-2147483635) : (((/* implicit */int) ((((unsigned long long int) -2147483635)) <= (((/* implicit */unsigned long long int) var_14)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_21 = ((/* implicit */signed char) (((-(39555144))) > (2147483635)));
                arr_6 [i_0] [i_1 + 1] [i_0] [i_1] = ((/* implicit */int) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))));
            }
            for (int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                var_22 = ((/* implicit */long long int) (-(var_14)));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(-960982373))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4467570830351532032ULL)) ? (2147483624) : (((/* implicit */int) (signed char)45))));
                            var_25 &= ((/* implicit */signed char) var_6);
                            arr_13 [i_0] [i_0] [(signed char)0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_18)), (2391243819U)))) ? (((((/* implicit */_Bool) 7318016589343912791ULL)) ? (((/* implicit */int) var_13)) : ((-2147483647 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_14 [i_5] [i_1] [i_5] [i_5] [i_5] |= ((/* implicit */long long int) (~(((unsigned long long int) max((((/* implicit */long long int) var_14)), (var_9))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_20 [5] [5] = ((/* implicit */signed char) max((((4304206570961704981LL) ^ (-1440242713667036652LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551600ULL)) || (((/* implicit */_Bool) -2147483635)))))));
                            var_26 *= ((/* implicit */int) ((((var_4) | (((/* implicit */int) (unsigned short)0)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51656))) < (2391243819U))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((263749257450195148ULL), (((/* implicit */unsigned long long int) 12471305U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (var_4) : (var_14))))))))))));
                            var_28 *= ((/* implicit */unsigned long long int) (~((+(var_15)))));
                        }
                    } 
                } 
                arr_21 [i_0] [1] [9] = ((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), (var_15))), (((/* implicit */unsigned int) var_10))));
            }
            arr_22 [i_0] [i_1] = min((((/* implicit */unsigned long long int) var_16)), ((~(18446744073709551615ULL))));
            arr_23 [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_2))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_2))));
            var_30 = ((/* implicit */int) (signed char)-38);
        }
        arr_24 [i_0] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 4282495997U)))), (((var_12) >= (((((/* implicit */_Bool) (signed char)31)) ? (var_10) : (((/* implicit */int) (signed char)15))))))));
    }
    for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            arr_30 [i_8] = ((/* implicit */int) 7U);
            var_31 = ((((/* implicit */long long int) 222158956)) - (0LL));
        }
        arr_31 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) -2147483624)) ? (min((63ULL), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */int) var_2)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? ((-(-1273346388))) : (((/* implicit */int) (signed char)33)))))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(min((1675488819U), (((/* implicit */unsigned int) (signed char)31)))))))));
    }
    for (int i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) var_6);
        arr_34 [i_10] = (~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (max((var_5), ((unsigned short)0)))))));
    }
    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) 1466646123)) || (((/* implicit */_Bool) var_18)))))));
        arr_37 [i_11] = var_4;
    }
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (~(((/* implicit */int) var_16)))))));
}
