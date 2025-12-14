/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139879
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
    var_11 *= ((/* implicit */unsigned short) var_6);
    var_12 = ((/* implicit */long long int) ((var_3) <= (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (7104324806244391804LL)))) / (var_3)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) max((var_3), (((/* implicit */unsigned long long int) var_7)))));
                            var_13 = ((/* implicit */_Bool) (-(((int) var_8))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_7)), (var_5))), (((/* implicit */long long int) (!((_Bool)1))))));
                    arr_17 [i_0] [i_1] [i_0 + 3] = ((/* implicit */int) (((+(var_0))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) <= (var_3)))))));
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((var_9) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32757))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_6)), (413397856U))) << (((min((var_3), (((/* implicit */unsigned long long int) var_4)))) - (208375084ULL)))));
                                arr_28 [i_0] [i_0 + 3] [(_Bool)1] [i_7 + 2] [13ULL] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_9)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_2))))));
                                arr_29 [i_0 - 1] [i_0] [i_0] [i_0] [(unsigned char)6] [i_7 + 2] [i_7 + 1] = ((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) (short)-19191)))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_6)))))))));
                                var_15 = ((/* implicit */_Bool) ((signed char) max((var_5), (((/* implicit */long long int) var_1)))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((_Bool) var_6))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((var_8) != (var_0))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1 + 1] [0ULL] [i_8] [i_0] = ((/* implicit */unsigned char) var_10);
                            var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_8)))))));
                            var_19 += ((/* implicit */unsigned short) (+(-5966142625899996384LL)));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(var_0))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned char) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            arr_38 [i_8] [i_0] [i_8] [i_5] [i_5] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_0)));
                        }
                        arr_39 [7LL] [7LL] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65522))));
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */int) var_9)) / (min((var_10), ((~(((/* implicit */int) (_Bool)1))))))));
                        var_23 = ((/* implicit */long long int) ((unsigned int) var_10));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2312)) + (((/* implicit */int) (short)1405))));
                    var_25 *= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) | (13629990732535218419ULL))));
                }
            }
        } 
    } 
    var_26 += ((/* implicit */_Bool) var_1);
}
