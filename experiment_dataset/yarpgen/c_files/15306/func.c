/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15306
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(6716747223690020283LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-108)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-46)) : (var_11)))), (var_13))) : (((((((/* implicit */_Bool) (signed char)46)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)39555)))))))));
    var_18 = ((/* implicit */signed char) var_12);
    var_19 += ((/* implicit */signed char) ((((var_2) + (9223372036854775807LL))) << (((((min((var_11), (((/* implicit */int) var_15)))) + (14581))) - (43)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    arr_6 [(short)21] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)29011))));
                    arr_7 [i_0] = ((/* implicit */long long int) ((signed char) ((((arr_4 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (120))))));
                    var_20 *= ((/* implicit */unsigned int) (unsigned char)0);
                }
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)29014))))));
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned short)29011)) : (((/* implicit */int) (signed char)-46))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4294967279U))))));
                        var_23 = ((/* implicit */unsigned long long int) var_12);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_5 - 1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1434)))))));
                            arr_24 [i_1] [i_1] [i_5] [i_1] [i_6] [i_6] = var_6;
                            arr_25 [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                        }
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned short) arr_20 [i_5 - 1] [i_3] [i_1] [i_0])))));
                        arr_26 [i_5] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        arr_27 [i_0] [i_1] [i_5 + 2] &= ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]);
                    }
                }
                for (unsigned char i_7 = 1; i_7 < 24; i_7 += 4) 
                {
                    var_25 = ((/* implicit */int) (short)-11135);
                    var_26 = ((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)48))));
                    arr_30 [i_0] [i_1] [i_1] [i_7 - 1] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((unsigned int) arr_3 [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)0))))))))));
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)52606)) < (((/* implicit */int) (unsigned char)193)))) ? (arr_29 [i_0] [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (signed char)48))))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)48))) : (((((/* implicit */_Bool) (unsigned short)2941)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_21 [i_0] [i_0] [i_1])))));
                arr_31 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)4260)) : (((/* implicit */int) var_6)))))))));
                var_28 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned char)12]))) : (((((/* implicit */_Bool) (unsigned char)199)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
