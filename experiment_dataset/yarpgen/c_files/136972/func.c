/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136972
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) | (((var_16) ^ (2147483647)))))) && (((/* implicit */_Bool) (unsigned char)8))));
                    var_18 ^= ((var_16) < (((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1609158220347867823LL)) && (((/* implicit */_Bool) 32512LL))))) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (2147483647))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_12 [i_2 + 1] &= ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */int) (~(var_3)));
                            arr_15 [i_0 - 1] [i_1] [(short)17] [i_3] [i_4] = ((/* implicit */unsigned short) 2147483647);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ^ (var_4)))) ? (var_15) : ((~(((/* implicit */int) var_12)))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_10)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 += (+(1709959287U));
                            var_22 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (-32513LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((/* implicit */int) ((32512LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65)))))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) == (((-1609158220347867823LL) / (var_5)))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5990))) >= (var_8))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_0] = ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)248)) - (240))));
                            var_24 = ((/* implicit */long long int) ((4294967292U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)4982)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */short) (+(var_4)));
                            var_26 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_15)) : (var_8))) << (((var_10) - (5009287984342941041LL)))));
                            var_27 = ((/* implicit */long long int) (((+(15250643494918591643ULL))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */int) ((0ULL) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31384))) + (3196100578790959973ULL)))));
                        arr_32 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_13))))) + (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1)), (4U)))) ? (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15856))) : (var_10))) : (((var_3) + (var_3)))))));
                    }
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 15250643494918591643ULL))));
                    var_30 = ((/* implicit */unsigned long long int) (~(max((min((var_14), (var_4))), (((/* implicit */long long int) var_12))))));
                }
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (short)23767))));
                arr_33 [(short)10] [i_1] = ((/* implicit */unsigned long long int) (short)-4982);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_32 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1174007570)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-5243))) % (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && ((_Bool)0)))))));
                    }
                    var_34 -= ((/* implicit */unsigned int) -32512LL);
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3352509233U)) ? (((/* implicit */int) var_11)) : (min((var_9), ((~(((/* implicit */int) (_Bool)0))))))));
}
