/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133615
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -24LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) > (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_3)))) && (((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)65535)), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65516)), (arr_1 [i_0])))) ? (max((((/* implicit */long long int) (unsigned char)255)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) 0))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0 + 1] [i_2] [i_3] = ((/* implicit */unsigned char) ((max((arr_10 [i_0 - 1] [i_1]), (arr_10 [i_0 + 1] [17LL]))) ? (((((/* implicit */_Bool) 421807948U)) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [19])))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19)) ? (arr_4 [(short)22] [i_1] [i_1]) : (((/* implicit */long long int) 1U)))) - (((/* implicit */long long int) ((unsigned int) var_1)))))) ? (((arr_5 [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (max((((((/* implicit */_Bool) (short)32767)) ? (var_7) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)65516)))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))) ? (max((8388608U), (arr_6 [i_0 + 1] [i_0 - 1]))) : (((arr_6 [i_0 + 1] [i_0 - 1]) & (arr_6 [i_0 + 1] [i_0 + 1])))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 4; i_5 < 17; i_5 += 4) /* same iter space */
        {
            arr_21 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) : (arr_6 [i_4] [i_4])))) ? (arr_28 [i_4] [i_5] [i_6] [i_7] [i_8 - 2]) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2506453063U)))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)40291)) * (((/* implicit */int) var_16)))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (~(arr_27 [i_5 - 1] [i_5 - 3] [i_5] [i_5 - 1] [i_5 + 1]))))));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 17; i_9 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) 1739810369U);
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_9 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_19 [i_9 - 3]))))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_4] [16U] [i_9 - 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_32 [12] [i_9 - 4] [i_9 - 2])))))));
        }
        for (int i_10 = 4; i_10 < 17; i_10 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (_Bool)1))));
            arr_35 [(_Bool)0] [(_Bool)0] [i_10] &= ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_3))) - ((+(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])))))))));
        }
        arr_36 [i_4] [(unsigned char)3] = ((/* implicit */short) arr_7 [i_4] [i_4] [i_4]);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (unsigned char)156))));
        var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 743116455)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) arr_9 [i_4]))))) : (1739810351U)))));
    }
}
