/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117116
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-125)) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_1])), (arr_4 [i_0] [i_0]))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned char)164))))))) % (min(((((_Bool)1) ? (arr_3 [i_0]) : (((/* implicit */long long int) 2147483645)))), (((/* implicit */long long int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 9223372036854775786LL)) ? ((+(arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (unsigned char)28))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((((+(var_10))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39258))))) && (((/* implicit */_Bool) max(((+(((/* implicit */int) (short)29330)))), ((~(((/* implicit */int) (unsigned char)223)))))))));
                    var_13 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) * (arr_0 [i_0] [i_2])))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */long long int) (short)32767))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((var_8) >> (((((/* implicit */int) var_6)) + (64))))) : (((/* implicit */int) ((unsigned char) var_10)))))) : (((long long int) max((((/* implicit */long long int) var_6)), (-9223372036854775786LL))))));
                }
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) (~((-(2316827653U)))));
                    var_15 = min((min((((/* implicit */unsigned long long int) ((arr_6 [i_0]) << (((((/* implicit */int) (unsigned short)65534)) - (65507)))))), (max((((/* implicit */unsigned long long int) arr_6 [i_3])), (arr_10 [i_0] [i_0] [i_0]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21897))) / (arr_10 [i_3] [i_1] [i_0]))) >> (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                    var_16 = ((/* implicit */unsigned short) (unsigned char)0);
                    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-21662))));
                }
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_18 = min((min((var_10), (((/* implicit */unsigned int) max(((unsigned char)160), ((unsigned char)173)))))), (((((/* implicit */_Bool) 183261609U)) ? (max((((/* implicit */unsigned int) var_4)), (arr_11 [i_0] [i_4]))) : (4071737260U))));
                    arr_14 [i_0] [i_4] = (~((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (var_10))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)5));
                                arr_22 [i_0] [i_1] [i_1] [i_7] [i_6] = (~((~(((/* implicit */int) var_3)))));
                                var_20 = ((/* implicit */short) arr_3 [i_7 - 3]);
                                arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [2] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (-(arr_7 [i_0] [i_1] [i_5] [i_8])));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1978139643U)) ? (var_8) : (((/* implicit */int) arr_25 [(unsigned short)10] [i_1] [i_5] [i_5] [i_9] [i_9]))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */short) max((((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) * (((var_8) / (arr_27 [i_0] [12LL])))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12518))) / (-9223372036854775793LL)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) ((short) var_2))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (796845452090656508LL)))))));
}
