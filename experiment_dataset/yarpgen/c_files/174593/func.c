/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174593
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
    var_19 = ((/* implicit */unsigned long long int) ((var_18) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((16485570656050050941ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30770)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_2] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3])) >= (((/* implicit */int) var_17))))) : ((-(((/* implicit */int) var_18))))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-30773))))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_3])) != (((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) arr_7 [i_0 + 3] [i_1] [(unsigned char)2]);
                            /* LoopSeq 2 */
                            for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) ((arr_12 [i_0 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2])))))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 4])) > (((/* implicit */int) arr_4 [i_0 + 1]))))))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (arr_8 [i_6] [i_5] [i_1] [i_4] [i_1] [i_0])));
                            }
                            for (short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)30765)) == (arr_1 [i_4 + 3] [i_0]))) ? (((/* implicit */unsigned long long int) (~(arr_7 [i_0 + 4] [i_0] [i_0 + 4])))) : (((((((/* implicit */int) var_15)) > (((/* implicit */int) arr_9 [i_4] [(unsigned char)1])))) ? (arr_13 [(unsigned short)3] [i_0] [i_0 + 2] [i_0] [i_4 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                                var_27 = ((/* implicit */long long int) min((var_27), ((+(((((/* implicit */_Bool) max((16485570656050050941ULL), (((/* implicit */unsigned long long int) (unsigned short)4095))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(signed char)22] [(signed char)22] [i_7]))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [4U] [i_1] [i_5] [i_7])) ? (((/* implicit */int) arr_11 [i_7])) : (((/* implicit */int) arr_4 [i_7])))))))))));
                                var_28 = 520663052;
                                var_29 = ((long long int) ((((/* implicit */_Bool) (-(1023U)))) || (((arr_6 [i_4] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-30789)))))));
                            }
                            var_30 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                            var_31 -= ((/* implicit */long long int) ((max((arr_12 [i_0 + 3]), (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_4 + 1])))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) (~(((((/* implicit */int) (short)27638)) * ((-(((/* implicit */int) (unsigned short)2048))))))));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (+((~(var_6))))))));
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)30773)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
            }
        } 
    } 
}
