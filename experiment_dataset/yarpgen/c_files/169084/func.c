/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169084
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294966272U) == (((/* implicit */unsigned int) 1291681806)))))) <= ((+(2495904997U)))));
                        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */int) max((var_7), (((/* implicit */long long int) 664190105))));
                        var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (~(var_3)))), (min((1799062298U), (((/* implicit */unsigned int) var_5)))))) << (((3731809296149996416LL) - (3731809296149996390LL)))));
                        arr_13 [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((1628505092) ^ (((/* implicit */int) (unsigned short)47791)))), (((/* implicit */int) (!(((/* implicit */_Bool) 11LL)))))))), (2495904997U)));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 2196184966U);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [0ULL] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) ((signed char) var_1)))));
                        var_17 = ((/* implicit */signed char) ((unsigned int) var_10));
                        arr_19 [i_0] [2U] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) var_10));
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294966272U)) ? (21LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20286))))) >> (((((/* implicit */int) var_9)) - (10114)))));
                    }
                    var_19 *= ((/* implicit */unsigned int) -3815470330637142801LL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_13)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) -1314636540)), (var_7)))))) ? (((/* implicit */long long int) min((max((var_4), (((/* implicit */unsigned int) var_11)))), ((+(1033U)))))) : (((((/* implicit */_Bool) ((signed char) -2032887889))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) : (((long long int) var_1))))));
}
