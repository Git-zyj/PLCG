/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151344
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
    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */int) (unsigned short)16528))))) : (var_6)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))))));
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)98))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_1])))))) : (((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */long long int) (-2147483647 - 1))) : ((-9223372036854775807LL - 1LL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_2])) ? (((/* implicit */int) ((signed char) (signed char)106))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-103)) == (((/* implicit */int) (signed char)95)))))))) > (arr_8 [i_0 - 3] [i_0 - 3])));
                            var_16 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]);
                                var_18 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_4 + 1] [i_4 + 1] [i_3])) && (((/* implicit */_Bool) arr_10 [i_0 - 2] [i_4 + 1] [i_4 + 1] [i_1]))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)76))));
                            }
                            for (int i_5 = 2; i_5 < 10; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_15 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18413))) : (1484159253123626506ULL))), (max((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (12368417333844111227ULL))), (((/* implicit */unsigned long long int) (signed char)-85))))));
                                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (1766833344)));
                            }
                            var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned long long int) 6078326739865440388ULL))) ? (1060473418592052110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107)))))));
                            var_22 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1471587265U)) ? (((/* implicit */long long int) 2823380027U)) : (9223372036854775792LL)))) ? (arr_15 [i_2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2])))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_3])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) arr_15 [i_2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 3) 
                    {
                        {
                            arr_20 [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_0 + 1]);
                            /* LoopSeq 1 */
                            for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((-480876774) != (((/* implicit */int) (short)12658))))), (((((/* implicit */_Bool) 6715189228522667497ULL)) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_5 [i_0] [i_8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))))))));
                                arr_25 [i_0] = ((/* implicit */unsigned short) ((unsigned int) -353909643));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_6] [i_7] [i_8]))))), (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6 - 2] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7])))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))));
                                arr_26 [i_6] [i_7] [i_6] [i_1] [i_6] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1813776342U)), (9223372036854775806LL)));
                            }
                            var_25 *= ((/* implicit */short) ((int) ((arr_21 [i_0 + 1] [i_0 + 1] [i_1] [i_6] [i_6] [i_1]) & (arr_21 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [i_0 + 1] [i_6]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) : (((/* implicit */int) var_5))));
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27150))) : (1119441279U))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-29))))) : (var_6)));
}
