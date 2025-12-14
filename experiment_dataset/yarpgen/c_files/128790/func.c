/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128790
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) & (-6656843259195255350LL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) << (((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) min(((signed char)-80), (var_4)))))) + (89)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1906696640), (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_0 [i_0])))))))) ? (((max((((/* implicit */int) (short)0)), (-616289354))) ^ (1106228132))) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-88)), (var_13))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) var_7);
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((1293072605) < (var_12)))), (min((var_13), (((/* implicit */unsigned short) arr_2 [i_1 + 2]))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_20 = 371680122;
            arr_9 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1359960407)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-19734)))))));
        }
        var_22 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))) : (arr_7 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3155084086U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)-78))))) : (((/* implicit */int) (short)9889))))));
        var_23 = ((/* implicit */short) 1597804097U);
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */short) 0U);
        arr_13 [(signed char)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)56)), (1673069816U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_7 [i_3]))))));
        var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) < (2541859955U));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1753107321U)) && (((/* implicit */_Bool) var_6)))))) << (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4])), ((unsigned short)0))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 - 3])) ? (((/* implicit */int) arr_15 [i_6 + 1])) : (((/* implicit */int) arr_15 [i_6 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-24084)) >= (((/* implicit */int) arr_15 [i_6 - 3]))))) : (((/* implicit */int) max(((unsigned short)10685), (((/* implicit */unsigned short) arr_15 [i_6 - 2])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) (short)-23293)) < (((/* implicit */int) ((unsigned char) var_11)))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((/* implicit */int) (signed char)4)), (min((((((/* implicit */_Bool) 15761309946593637833ULL)) ? (var_8) : (((/* implicit */int) (unsigned char)178)))), (arr_14 [i_4]))))))));
                        var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) (signed char)-80)) & (((/* implicit */int) (short)19739)))))) : (((/* implicit */int) arr_18 [i_4]))));
                        var_28 = ((/* implicit */unsigned int) var_10);
                        var_29 = ((/* implicit */int) max((var_29), ((((((+(((/* implicit */int) (signed char)-104)))) <= ((-(((/* implicit */int) var_14)))))) ? (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned short)32247)))) <= (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (signed char)72))))) ? (((/* implicit */int) ((signed char) (unsigned short)61276))) : (((/* implicit */int) (_Bool)0))))))));
                    }
                }
            } 
        } 
        arr_25 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (min((var_12), (arr_14 [i_4]))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_4] [i_4] [i_4])), ((unsigned char)86))))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 3; i_8 < 17; i_8 += 1) 
    {
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_8 - 1]))));
        arr_28 [i_8] = ((/* implicit */_Bool) (-(2541859975U)));
    }
}
