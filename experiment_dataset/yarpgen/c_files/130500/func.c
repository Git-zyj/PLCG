/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130500
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_6 [10ULL] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) (~(18446744073709551608ULL)))) ? (-1333130555) : (((((/* implicit */int) (_Bool)0)) << (((18446744073709551588ULL) - (18446744073709551562ULL))))))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) arr_6 [i_2 - 1] [2U] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_6 [(unsigned char)16] [i_2] [i_2 + 1] [i_2 - 1])))) | (((/* implicit */int) ((536870911U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_20 += ((/* implicit */int) (!(((((/* implicit */_Bool) ((int) (_Bool)1))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0])))))))));
                            var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2 + 1] [i_2 + 1])), (1ULL))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [13ULL]))))), (max((arr_4 [i_5]), (arr_4 [i_1])))));
                                var_23 = ((/* implicit */signed char) min((-8093895644822460792LL), (((/* implicit */long long int) (signed char)-124))));
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((min((arr_6 [i_0] [i_0] [i_4] [i_5]), ((signed char)39))), (arr_3 [i_6])))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && ((_Bool)1)))), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_0] [i_1] [i_4] [i_5])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))))), (max(((signed char)111), ((signed char)-114))))))));
                            arr_34 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (3758096376U)))) ? (((/* implicit */unsigned int) max((arr_5 [i_7 + 4]), (((/* implicit */int) var_0))))) : (536870920U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 4; i_11 < 19; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) (_Bool)1);
                            arr_40 [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) max((((unsigned char) (signed char)-1)), (((/* implicit */unsigned char) arr_31 [i_7 - 1] [i_12] [i_7 - 1]))))), (max((((/* implicit */int) min((arr_39 [i_8] [i_8] [i_8] [i_8] [i_7]), ((signed char)123)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1))))))));
                            var_25 = ((/* implicit */_Bool) (((-(arr_20 [i_11]))) ^ (((/* implicit */int) max((min((((/* implicit */signed char) var_14)), (arr_25 [i_8]))), (arr_15 [i_11 - 3] [i_11 - 3] [18]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 19; i_13 += 3) 
                {
                    for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
                            var_27 = ((/* implicit */signed char) var_8);
                            var_28 = ((((/* implicit */_Bool) max((arr_19 [i_7] [i_8] [i_13 + 1] [2U] [i_13] [i_14 - 1]), (arr_19 [i_7 + 1] [i_7 + 1] [i_13] [i_13 + 1] [i_7 + 1] [i_7 + 1])))) ? (((/* implicit */int) ((signed char) (signed char)-87))) : ((+(((/* implicit */int) var_12)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
