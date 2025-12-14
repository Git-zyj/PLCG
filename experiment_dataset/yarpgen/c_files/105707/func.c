/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105707
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_10 = ((((/* implicit */_Bool) min((8099875533447709347LL), (arr_3 [i_0] [i_0] [i_0])))) ? (770689478) : (min((var_0), (arr_1 [i_1 - 1]))));
                        arr_10 [i_0] [i_0] [(unsigned char)11] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_1 - 2] [i_1] [i_2]) >= (((/* implicit */unsigned long long int) 2147483645))))) <= (1486621642)));
                        var_11 = ((/* implicit */int) ((-8099875533447709347LL) <= (-8099875533447709360LL)));
                        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4833726025960616684LL)) ? (var_2) : (arr_6 [i_0] [i_0])))) ? (((/* implicit */long long int) (-(var_0)))) : (min((((/* implicit */long long int) var_9)), (arr_8 [i_3] [i_2] [i_0] [i_0]))))) <= (((((/* implicit */_Bool) (-(-8099875533447709367LL)))) ? (((arr_6 [(unsigned short)12] [12LL]) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (var_4)))));
                    }
                } 
            } 
        } 
        arr_11 [6] = ((/* implicit */int) (signed char)0);
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_0])) : (-8099875533447709367LL))) + (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 1640102406)) : (-5578403911008458744LL)))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_14 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_6)))) - (((var_3) - (((/* implicit */unsigned long long int) -2105361544)))))), (((/* implicit */unsigned long long int) min((-1533405260), (var_5))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_6), (((((/* implicit */_Bool) (signed char)70)) ? (3250210133922797491LL) : (((/* implicit */long long int) arr_5 [i_4] [16] [i_4] [i_4]))))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        arr_28 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (-(var_4))))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (arr_21 [i_5] [i_5] [5] [i_5])))) ? (min((((/* implicit */int) var_1)), (arr_9 [i_5] [14] [i_7] [i_8]))) : (arr_27 [i_8] [i_8] [i_8] [i_8] [9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -408076511)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (((((((/* implicit */_Bool) -2105361520)) ? (((/* implicit */long long int) 1533405272)) : (-3250210133922797467LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 4193792)) ? (4130422427U) : (((/* implicit */unsigned int) -2105361559))))))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -650478168)) ? (((((/* implicit */_Bool) var_2)) ? (3250210133922797474LL) : (((/* implicit */long long int) arr_5 [i_5] [i_5] [(unsigned short)11] [i_5])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -504867622)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_24 [i_5] [2LL] [i_5] [i_5] [2LL]))))));
        var_18 ^= (+((-(arr_23 [i_5] [i_5] [6] [i_5]))));
        var_19 |= ((/* implicit */long long int) arr_23 [i_5] [i_5] [i_5] [i_5]);
    }
}
