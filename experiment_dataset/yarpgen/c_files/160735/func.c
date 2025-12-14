/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160735
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
    var_17 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_0] [i_2] [i_3] [i_2] [i_3] = arr_7 [i_0] [i_0] [i_1] [i_3];
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((+(((/* implicit */int) ((214172311) == (((/* implicit */int) (_Bool)0))))))), (((/* implicit */int) (unsigned char)123)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (-(var_11)))))) < (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            {
                arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_4] [i_5 + 1]), (arr_5 [i_4] [i_5] [i_4])))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4] [i_4]))) : (((/* implicit */int) ((_Bool) arr_3 [i_5 + 1] [i_4])))))) ? (((((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4]))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */int) (_Bool)0)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) ((_Bool) arr_17 [i_6] [i_5 - 1] [i_5 - 1]));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) (~(2067139095)));
                                var_21 -= ((/* implicit */unsigned int) ((int) 1589963709U));
                            }
                        } 
                    } 
                    arr_28 [i_4] [i_4] [i_4] = (i_4 % 2 == zero) ? (((/* implicit */unsigned short) ((((3862025008460270781ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))))) >> (((arr_9 [i_4]) ? (var_11) : (0U)))))) : (((/* implicit */unsigned short) ((((3862025008460270781ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))))) >> (((((arr_9 [i_4]) ? (var_11) : (0U))) - (2497999573U))))));
                    arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) ((_Bool) (signed char)70))) : (arr_18 [i_5 - 1])));
                }
                for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((-2067139095), (var_3)))) && ((!(((/* implicit */_Bool) 214172311)))))));
                    arr_34 [i_4] [i_4] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (unsigned short)4827)))))) && (((/* implicit */_Bool) (((((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (arr_15 [i_5] [i_9 - 1]))))))))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 6011410645741171915ULL)) || (((/* implicit */_Bool) 2962830124U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (4561126453485474052ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-2147483647 - 1))))) * (((unsigned long long int) arr_1 [i_4]))))));
                    arr_38 [i_4] = ((/* implicit */signed char) (+((((-(((/* implicit */int) (unsigned char)163)))) % (min((arr_30 [i_10 - 1] [i_10 - 1] [i_10]), (((/* implicit */int) (_Bool)1))))))));
                }
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60708)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))))) | (-3818785456419902485LL))))));
                arr_39 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((~(-2067139096)))))) >= (min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_5 - 1] [i_5 - 1] [i_4])))));
                var_25 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)92)) == (arr_33 [i_4] [i_5 - 1] [i_4])))), (((arr_23 [i_4] [i_5 - 1] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
            }
        } 
    } 
    var_26 += ((/* implicit */unsigned int) 2147483647);
}
