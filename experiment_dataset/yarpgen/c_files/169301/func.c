/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169301
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (var_1) : (((/* implicit */long long int) 4245169107U))));
    var_14 -= ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((72048797944905728LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), ((_Bool)1)));
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)156))))), (((((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) 0ULL);
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)58672)))))));
                        }
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-6880))));
                        var_21 = ((/* implicit */unsigned int) (unsigned short)41598);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_5)), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) var_2))))) || (((/* implicit */_Bool) 1253405191U))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2445))))) : (var_2))))))));
                    }
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) var_12))));
                        arr_18 [i_2] = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))))));
                        arr_19 [i_2] [i_2] [i_1] [i_2] = var_3;
                    }
                    var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2251799813554176LL)) & (18446744073709551612ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) | (18446744073709551615ULL))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))));
                    arr_20 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_5)))) - (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 19; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((var_3), (var_3))))))));
                        arr_23 [i_2] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) var_0)) & ((((_Bool)0) ? (67436596U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))), (max((((/* implicit */unsigned int) 1048576)), (((((/* implicit */_Bool) var_5)) ? (2425239250U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18)))))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_12))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))));
}
