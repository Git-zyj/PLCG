/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139372
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 2] [(_Bool)1] [i_3 + 1] [i_3 - 3] [i_3])))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((!(((var_2) != (var_14))))) ? ((-(((((/* implicit */_Bool) -1)) ? (12469441326512680646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [i_3] [i_4]))))))) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)5] [(unsigned short)5])))))));
                                arr_13 [(unsigned short)8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((+(arr_6 [i_4] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_14 [10ULL] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_1] [i_1])))) ? (min((((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_1] [i_0])), ((+(arr_11 [i_0] [i_1] [i_2]))))) : ((~(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_21 = var_2;
    var_22 = ((/* implicit */unsigned char) (~(var_13)));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) (+(arr_17 [i_5])));
        var_24 *= ((/* implicit */unsigned long long int) arr_16 [i_5]);
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 4; i_7 < 13; i_7 += 4) 
        {
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-((~(((/* implicit */int) var_4)))))))));
                        arr_30 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4324)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28478)))));
                        var_26 = (~(((/* implicit */int) arr_26 [i_8 - 2] [i_7] [i_7 + 2] [i_6])));
                        arr_31 [i_6] [i_7] [i_8] [(short)8] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_28 [i_7] [(signed char)5] [i_8])) <= (var_15))))));
                        arr_32 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))));
                    }
                } 
            } 
        } 
        var_27 -= ((/* implicit */unsigned char) (!(arr_21 [(_Bool)1] [i_6])));
        arr_33 [i_6] [10U] = ((/* implicit */long long int) arr_25 [i_6] [i_6] [i_6 - 1] [i_6 - 1]);
    }
    var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_17)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (8217616643713849361ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))));
}
