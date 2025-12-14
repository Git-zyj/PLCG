/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101689
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) var_1)), (var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1153308218U)), (max((-4057886012579639844LL), (((/* implicit */long long int) 2350386120U))))))))))));
    var_12 += ((/* implicit */unsigned char) 4057886012579639843LL);
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)70)) ? (var_2) : (min((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (var_3)))), (var_5)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = var_2;
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((signed char)70), (min((var_1), (((/* implicit */signed char) (_Bool)1))))))), (min((((((/* implicit */_Bool) 3300810814791262008ULL)) ? (15145933258918289608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_4)))))))));
        var_15 += ((/* implicit */unsigned char) 1241081864718850369ULL);
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) min(((signed char)70), (var_1)))), (var_10)))));
        var_17 |= ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_6)), (4057886012579639843LL))), (((/* implicit */long long int) min(((short)15515), (((/* implicit */short) (signed char)-70)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */signed char) 458183644U);
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min(((+(max((((/* implicit */unsigned int) var_3)), (var_5))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_0))))))))))));
                }
            } 
        } 
        var_19 = min((((/* implicit */long long int) (+(var_6)))), (min((9223372036854775807LL), (((/* implicit */long long int) 3232338558U)))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (min((max((((/* implicit */long long int) var_0)), (4665737648236131070LL))), (((/* implicit */long long int) max((((/* implicit */int) (short)11538)), (var_3))))))));
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_21 += ((/* implicit */int) min((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 15145933258918289608ULL)) ? (3964955048U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */short) max(((unsigned char)115), (((/* implicit */unsigned char) (signed char)76))))), (var_4))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-4665737648236131070LL), (((/* implicit */long long int) min((var_3), (var_0))))))) ? (((/* implicit */unsigned int) max((-850025816), (((/* implicit */int) var_8))))) : (330012248U)));
            var_23 = ((/* implicit */signed char) min((3836783652U), (((/* implicit */unsigned int) (unsigned char)18))));
        }
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (max((((/* implicit */unsigned int) (signed char)64)), (3964955048U)))))) ? (var_3) : ((~(max((850025815), (((/* implicit */int) var_4))))))));
    }
    var_25 |= ((/* implicit */unsigned int) var_0);
}
