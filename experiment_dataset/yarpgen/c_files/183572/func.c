/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183572
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3683345425461997103LL))))), ((-(var_18)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = arr_0 [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]))) ? (((/* implicit */long long int) (-(arr_6 [i_0] [i_1] [i_2] [i_2])))) : (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [1LL] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((var_15) / (((/* implicit */unsigned long long int) arr_10 [i_4 + 1] [i_4 - 1] [i_0] [(unsigned char)23] [17]))));
                                var_22 = ((_Bool) arr_8 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0]);
                                var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_3] [i_1] [i_0]))));
                                arr_14 [i_0] = ((/* implicit */signed char) ((((arr_11 [(unsigned short)0] [i_3] [i_1]) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_8 [i_0] [(_Bool)1] [i_2] [i_3] [15] [i_4 + 1])))) : (((((/* implicit */_Bool) 3683345425461997103LL)) ? (arr_1 [2LL] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)9] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_24 = ((((((/* implicit */long long int) arr_8 [i_0] [(short)23] [(short)23] [i_2] [(signed char)8] [(_Bool)1])) & (3683345425461997103LL))) - (((/* implicit */long long int) arr_8 [i_0] [8U] [i_2] [i_2] [13U] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [17LL] [i_0] [i_0] [i_0] [i_0] = ((int) var_6);
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_5] [i_6])) ? (((/* implicit */int) arr_9 [6U] [i_0] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [4LL] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_17 [(signed char)15] [i_0] [i_0] [i_0] [(unsigned short)17] [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (short i_7 = 2; i_7 < 24; i_7 += 4) 
        {
            var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) -2005087925053528614LL)) || (((/* implicit */_Bool) arr_3 [i_7]))))) : (((/* implicit */int) (!(arr_11 [12] [i_7] [i_7 - 1]))))));
            var_28 = ((/* implicit */unsigned short) (+(arr_3 [i_7])));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */int) -1074313302014324094LL);
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-3683345425461997115LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_15 [24LL])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_15 [10U]))) % (3683345425461997103LL)))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1605898533U)))) ? (-1074313302014324076LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-1074313302014324094LL) + (9223372036854775807LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))))));
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2987704634428552484LL))) || (((/* implicit */_Bool) var_4)))))));
    var_32 = var_7;
}
