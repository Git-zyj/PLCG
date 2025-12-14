/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182200
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) 4194296ULL))));
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(35184372088831LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_8 [i_3] [(unsigned short)16] [i_2] [i_3]))));
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) -16LL))) < (((long long int) (short)-1))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)1))) % (max((((/* implicit */long long int) var_7)), ((+(arr_3 [i_0] [11LL] [i_0])))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_3 [i_0] [(unsigned short)16] [i_0]) : (((/* implicit */long long int) arr_4 [16LL]))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(unsigned short)0])) ? (((((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned short)6144)))) + (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-13)))))) : ((-(((/* implicit */int) (!((_Bool)1))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_0] = (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (arr_3 [i_0 + 1] [i_0 + 3] [i_0]))));
                    var_26 = ((/* implicit */signed char) ((int) (_Bool)1));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (short)-1))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */int) var_10);
                }
                var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551598ULL)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_27 [i_0] [i_0] [(unsigned short)17] = ((/* implicit */unsigned int) var_3);
                    var_29 = ((/* implicit */unsigned short) (((+((+(((/* implicit */int) (signed char)8)))))) < (((arr_1 [i_0]) ? (((/* implicit */int) (short)-15)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        for (short i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_30 *= ((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) > (17592186044415ULL)))) < (((/* implicit */int) var_14))))));
                                var_31 = ((/* implicit */unsigned char) arr_4 [7U]);
                                arr_33 [(_Bool)1] [i_0] [(short)12] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0 - 3] [i_8 + 1])))))) | (arr_25 [i_8] [i_0] [(unsigned char)2] [i_0])));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-4)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 288230371856744448LL))));
    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) 268435455U))));
}
