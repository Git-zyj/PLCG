/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161963
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((-1096342067914331240LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) -1096342067914331240LL)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) | (arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_19 |= ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) -978680651)) ? (var_15) : (((/* implicit */long long int) arr_3 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16782))));
            var_20 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_1 + 1]);
        }
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) 0);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_17 [i_2] [i_2] = ((/* implicit */_Bool) 1096342067914331240LL);
                            var_22 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            arr_20 [i_6] [(_Bool)1] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -704126665)) ? (((/* implicit */long long int) arr_4 [6])) : (min(((-(-17LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (arr_2 [(_Bool)1]))))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_6])))))));
            arr_21 [i_0 - 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((int) 9223371968135299072ULL));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_31 [i_9] = ((/* implicit */unsigned char) ((var_3) + (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_6 + 1] [i_7] [i_8]))) : (484850986U))) - (((arr_4 [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_32 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))))), (2030699942U)));
                            arr_33 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_9] [i_9])) ? ((+(((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) arr_19 [i_7]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3631222438543256579LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_24 [i_0]))) : (((/* implicit */unsigned long long int) var_4))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_27 [i_0] [i_0] [i_0 + 1] [i_0]))));
            var_25 ^= ((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (-1582851727)));
        }
    }
    var_26 = ((/* implicit */int) ((min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)28672)), (var_5)))), (-1096342067914331216LL))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
