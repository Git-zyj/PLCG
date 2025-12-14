/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110266
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
    var_11 = ((/* implicit */signed char) var_6);
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_3))))) ? ((~(9763192275822753529ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))))));
    var_13 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((short) ((_Bool) arr_2 [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_3] [(unsigned char)1] = ((/* implicit */signed char) (!((((-(16334312493584360392ULL))) < (((unsigned long long int) arr_2 [i_0]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */long long int) ((16572855157228834931ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                                arr_19 [i_0] [i_1] [i_3] = ((/* implicit */short) ((unsigned char) arr_2 [i_0]));
                                var_16 = arr_16 [8ULL] [i_3] [i_2] [i_3 + 2] [i_4] [16ULL] [3ULL];
                                var_17 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_3] [i_4])) != (((/* implicit */int) (signed char)-1))))) >> (((var_9) - (2422349033154961508ULL)))));
                                var_18 = ((/* implicit */signed char) (unsigned char)106);
                            }
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_19 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_13 [i_5])) / (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3 - 1] [i_5]))) : (540696574112613961ULL))))) == (min((((/* implicit */unsigned long long int) (signed char)1)), (18446744073709551615ULL)))));
                                var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_13 [i_0]))) ? (arr_9 [(unsigned char)17] [i_2] [(unsigned short)16] [i_5]) : (arr_5 [7LL])))) && (((((/* implicit */int) arr_21 [i_1] [i_1] [i_2 - 2] [i_2 - 2])) >= (((/* implicit */int) arr_21 [i_0] [i_1] [i_2 - 3] [i_3]))))));
                            }
                        }
                    } 
                } 
                var_21 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_8 [13LL] [i_1])) / (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(unsigned char)10] [i_1] [i_1])) ? (9759772157638643206ULL) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [(unsigned char)4] [i_1] [i_0]))))));
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)38)), (arr_2 [i_0])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)63))))));
            }
        } 
    } 
}
