/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108855
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (((unsigned char) var_6))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = var_10;
                    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_1))) ? ((+(var_5))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (var_5))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)230)) : (1843435959)));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 2; i_4 < 23; i_4 += 3) 
                    {
                        arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)13816)) ? ((-(-7603327486574118449LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) ((unsigned short) var_9))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : ((-(((/* implicit */int) var_7))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (~((~(var_5))))))));
                        arr_18 [i_0] [i_1] [i_0] [i_3] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) var_10)))) : (((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))), (((((/* implicit */long long int) ((var_1) / (var_1)))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))))));
                        var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
                        arr_21 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((var_5) | (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6))) : (((/* implicit */long long int) ((unsigned int) var_6)))));
                        var_17 = (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_9))));
                        var_18 += ((/* implicit */unsigned int) (+((-(var_5)))));
                    }
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~((~(((/* implicit */int) (unsigned char)238)))))) : (1843435959)));
                    var_20 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (min((var_6), (((/* implicit */long long int) var_7)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))), (min((var_9), (((/* implicit */long long int) var_0))))))));
                }
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 23; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_30 [i_8] [i_8 - 3] [i_8] [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) ((var_7) ? (var_5) : (((/* implicit */int) var_8))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_9)))));
                        }
                        for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            arr_33 [i_0] [i_8 - 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_8)))))) : (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_5)) || (var_8))))) ? (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (min((var_9), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_4))))))))))));
                        }
                        for (short i_11 = 3; i_11 < 24; i_11 += 2) 
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_0] [i_1] [i_11] = ((/* implicit */unsigned long long int) var_4);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (min((((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))) : ((-(((/* implicit */int) var_8)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_40 [i_8] [i_12] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */signed char) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] = (!(var_8));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            arr_44 [i_8] [i_8 + 1] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (var_1) : (var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_10))))), ((((!(((/* implicit */_Bool) var_6)))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))) : (((/* implicit */long long int) (-(var_2))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) : (max((var_9), (var_6)))));
                            arr_45 [i_0] [i_0] [i_0] [i_7] [i_0] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (1843435932) : (-1843435954)))) : ((~(var_9))))) <= (var_9)));
                        }
                        var_25 += ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) var_5))))), (((((/* implicit */long long int) var_1)) / (var_6))))), (((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */long long int) (-(var_5)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (var_9)))))));
                        arr_46 [i_1] [i_1] |= ((/* implicit */short) (+(min((((((/* implicit */_Bool) 2797410118854795649LL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_47 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)93)) ? (((281474976710655LL) / (((/* implicit */long long int) 1925630222)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned int) var_7)), (((/* implicit */unsigned int) max((var_8), (var_7))))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (var_2) : (((/* implicit */unsigned int) (~(var_5)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) var_7)))))))));
    var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((var_7) ? (((/* implicit */unsigned int) var_5)) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0)))))))), (var_6)));
}
