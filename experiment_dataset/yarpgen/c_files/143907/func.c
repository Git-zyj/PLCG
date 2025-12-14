/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143907
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
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1]))));
                    arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2 + 1]);
                    arr_11 [i_2] [i_2] [i_2 - 1] [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-33)) ? ((+(2054053462U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)-25033)))))));
                }
                for (signed char i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [5] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7980362534185291743ULL)) ? (((/* implicit */int) (unsigned short)12)) : (2068982489)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (8506446386836163376LL)))) ? ((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_4])))) : (((/* implicit */int) var_9))))) : ((-(min((3489246774U), (((/* implicit */unsigned int) (signed char)16)))))));
                        arr_18 [8U] [(unsigned short)9] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)51756)), (min((((unsigned int) (unsigned char)192)), (max((2150323951U), (var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 6; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((arr_21 [i_0] [i_1] [(unsigned char)6] [i_5 + 2] [i_6]), (((/* implicit */long long int) var_10))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -4643487470461020732LL))));
                                arr_25 [i_0] [i_1] [i_3] [i_3] [i_5 - 2] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (+(1572864U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4094))));
                                arr_32 [i_0] [4U] [4U] [i_1] [i_3] [i_7] [i_8] = ((/* implicit */signed char) (~(min((max((((/* implicit */unsigned long long int) -261748116268850119LL)), (5813206757954726945ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) arr_28 [i_0] [i_1] [i_1] [i_3 - 1] [i_3 - 1] [i_1] [i_0]);
                }
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) 23U))) ^ (((unsigned int) var_14))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))), (var_2))))))));
            }
        } 
    } 
}
