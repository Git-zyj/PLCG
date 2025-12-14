/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172279
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
    var_17 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) var_12)), (3842232333U))));
    var_18 = ((var_0) == (((/* implicit */unsigned int) 0)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-32)) ? (-1) : (((/* implicit */int) (short)-18106)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_11);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-120)) ? (0U) : (((/* implicit */unsigned int) -1))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)23)) - (((/* implicit */int) (_Bool)0))));
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) & (0ULL))));
            arr_11 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) && (((arr_5 [i_0]) != (arr_1 [i_0] [i_0])))));
            var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0]))));
            arr_12 [i_0] [(short)13] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-39))))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_21 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)65162)) : (-410954788));
                var_22 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 17793062095522694990ULL)) ? ((((_Bool)0) ? (arr_8 [9U] [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)36))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
            }
            for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) -1)) ? (7952328855170834842LL) : (((/* implicit */long long int) -787629706))))));
                var_25 = ((int) (_Bool)1);
            }
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)12220))))), (((signed char) (-2147483647 - 1)))));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-17221))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (signed char)119)))));
                        arr_28 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) * (1740545731U)));
                    }
                } 
            } 
        }
        var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
    }
}
