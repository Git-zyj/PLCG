/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156837
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_1 - 1]);
                arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-32766)), (min(((-(var_6))), (((/* implicit */unsigned long long int) ((signed char) 6019258405067247142LL)))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_9));
            }
        } 
    } 
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (18446744073709551597ULL))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_11 += ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6019258405067247119LL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-98))))))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((657787517888521210ULL) << (((((/* implicit */int) (signed char)-121)) + (122)))))) ? ((-(6019258405067247102LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23258)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (signed char)81)))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_10 [i_2] [i_2] [i_2]))) / (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2])) ^ (((/* implicit */int) (unsigned char)199))))))))));
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_3] [i_3] [(unsigned short)6] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) var_7);
                                var_12 += ((/* implicit */unsigned char) max((((((((((/* implicit */_Bool) 657787517888521210ULL)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) max(((short)-32760), (((/* implicit */short) var_0))))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */short) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] [i_3] [i_4 + 3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9588022481839973869ULL))))), (((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5))) & (((/* implicit */long long int) (-(((/* implicit */int) (signed char)39)))))))));
                    arr_22 [i_3] [i_4] [i_3] [i_3] = 657787517888521217ULL;
                    var_13 = ((/* implicit */short) (((!(var_7))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 11444617064621692646ULL)))))) : (-7907365698807922002LL)));
                    arr_23 [i_2] [i_3] [i_4 + 2] [i_3] = ((/* implicit */signed char) (_Bool)1);
                }
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (207901613)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2147483644) << (((((((/* implicit */int) (signed char)-65)) + (93))) - (28)))))))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_15 [i_3])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10008))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2]))) + (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_26 [i_2 + 1] [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) (~((~(((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) arr_18 [i_2] [0LL] [0LL] [i_2] [i_2]))))))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_3] [(_Bool)1] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+((-(var_5)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) arr_11 [2])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) arr_10 [i_8] [i_8] [i_8 - 1])) : (arr_16 [i_8] [i_2])))))));
                    var_16 = ((13ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63119))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((max((((((/* implicit */int) (unsigned short)5053)) & (((/* implicit */int) (signed char)0)))), (-1026742950))), (((/* implicit */int) (unsigned char)8))));
                    arr_32 [(_Bool)1] [i_3] [i_9] [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) + ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2]))))))), (((long long int) (~(((/* implicit */int) var_9)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) min((-5808315749706896849LL), (var_5)))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)30874)) - (30864))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
}
