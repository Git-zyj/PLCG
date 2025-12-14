/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105512
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0])));
                    arr_11 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((int) min((arr_4 [i_0 + 1]), (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_2] [i_0 - 1])))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) max(((((_Bool)1) ? (arr_4 [i_0 + 1]) : (((/* implicit */int) (signed char)-96)))), (((/* implicit */int) ((((/* implicit */_Bool) ((short) 3932160ULL))) || (((var_13) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])))))))));
                        var_18 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2] [i_3])), (arr_5 [i_2])))))) != (((((/* implicit */_Bool) ((signed char) 2028718189366539230LL))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_3]))) : (((/* implicit */int) arr_5 [i_0]))))));
                        arr_14 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) -2028718189366539229LL);
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_2] [i_1] [i_2] [i_0]), (-2028718189366539238LL)))) || (((/* implicit */_Bool) ((int) arr_16 [i_0] [i_1] [i_2] [i_4]))))))) : ((-(arr_12 [i_4] [i_2] [i_2] [i_0])))));
                        arr_17 [i_2] [i_2] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((unsigned int) arr_1 [i_0])) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))))), (max((-2028718189366539232LL), (((/* implicit */long long int) var_5))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((((((/* implicit */long long int) min((arr_3 [i_4]), (arr_3 [i_0])))) + (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_4]))) & (2028718189366539229LL))))) ^ (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 1922021483)) && (((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1] [i_0]))))), (max((((/* implicit */int) arr_1 [i_1])), (-1922021483))))))))));
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((134213632), (((((/* implicit */int) (unsigned short)12300)) - (((/* implicit */int) (short)-5584)))))) : (arr_3 [i_0 + 1])));
                    }
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_22 = var_4;
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_0 + 1] [i_1 - 1] [i_5 + 2] [i_5] [i_5]), (arr_18 [i_0] [i_0 - 1] [i_1 + 1] [i_5 + 1] [i_5] [i_5])))) ? (((((/* implicit */_Bool) (short)5584)) ? ((+(2028718189366539238LL))) : (((/* implicit */long long int) arr_12 [i_0] [i_2] [i_2] [i_5])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2028718189366539224LL)) ? (-2028718189366539229LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (max((var_16), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2]))));
                }
                arr_20 [i_0] [i_1] = ((/* implicit */signed char) 6755399441055744ULL);
                var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2808238585715765789LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 1]))) : (max((((/* implicit */long long int) 2147483647)), (2028718189366539237LL))))), (((/* implicit */long long int) ((max((var_16), (((/* implicit */unsigned int) var_8)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) (!(((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-21714)) : (((/* implicit */int) var_9)))))));
    var_27 = ((/* implicit */short) -1922021505);
}
