/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159571
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) max(((+((+(-591821921))))), ((-(((((/* implicit */_Bool) -836169977)) ? (360626480) : (((/* implicit */int) (unsigned char)133))))))));
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((var_0) & ((-(arr_2 [i_1 - 1]))))))));
                var_11 &= max((((/* implicit */unsigned int) 834647547)), (((unsigned int) -775659834)));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) max((arr_3 [i_1 + 2] [i_1 - 2]), (((/* implicit */unsigned int) var_1)))))));
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 591821936)) <= (var_4))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (short i_3 = 4; i_3 < 12; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_3 - 3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 8442905155236241559LL)) ^ (18446744073709551612ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) var_9);
                                arr_19 [i_2] [i_4] [i_6] [i_5] [i_6] [6ULL] [i_3 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) || (((/* implicit */_Bool) 8442905155236241550LL))));
                                var_14 &= ((/* implicit */short) 134217727);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) -6815626109426942826LL)) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 834647547))))), (max((3LL), (8866159741419498250LL))))) : (((/* implicit */long long int) max((134217726), (((/* implicit */int) arr_12 [i_3 - 3] [i_3 - 4])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_24 [i_7 - 4] [i_7] [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7 - 3])), (arr_22 [i_7] [i_7 - 3] [i_7 - 2] [2U]))) << (((((((/* implicit */_Bool) (-(2147483647)))) ? (((unsigned int) -222065197)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) <= (((/* implicit */int) (signed char)1)))))))) - (4072902092U)))));
                                arr_27 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_7] [i_8])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 3])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 - 1] [i_7 - 3])) >= (((/* implicit */int) max((((/* implicit */short) arr_21 [i_2] [i_2] [i_4] [i_2] [i_8] [(unsigned short)12])), ((short)-8416)))))))));
                                arr_28 [(signed char)10] [i_3 - 4] = ((/* implicit */unsigned char) ((short) arr_16 [i_2] [i_3] [i_4] [i_7] [i_8]));
                                arr_29 [i_2] [i_3] [i_4] [i_7] [i_8] = ((/* implicit */unsigned long long int) 134217726);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
