/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158519
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
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65535))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11980664984154150383ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) : (-8660943925247017422LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8660943925247017421LL)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned short)20975))))) : (((((/* implicit */_Bool) (short)29525)) ? (32767ULL) : (((/* implicit */unsigned long long int) -4764432360441157624LL))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_6))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)23245)) >= (((/* implicit */int) (unsigned short)41575))));
                                arr_13 [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((int) var_17))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (6466079089555401255ULL)))) : (((/* implicit */unsigned long long int) min((min((8660943925247017421LL), (((/* implicit */long long int) 2097151)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [(unsigned short)0] [i_4]))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [9U] [i_0] = (signed char)-1;
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1 - 1] [i_5] [i_5] [0ULL] = ((/* implicit */unsigned short) 2532639923U);
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))) <= (((/* implicit */int) arr_1 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [7ULL] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29526))))) ? (17773221719239779180ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (2131564960) : (((/* implicit */int) (unsigned short)28098))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_6 [i_0] [(_Bool)1]))))))))));
                            arr_22 [i_0] [i_0] [i_5] [i_6] = (-(max((((17312257094714868404ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_2 [(short)7] [i_0] [i_1 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
