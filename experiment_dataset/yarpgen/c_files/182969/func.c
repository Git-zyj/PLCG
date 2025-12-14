/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182969
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) max((((/* implicit */unsigned short) (short)18111)), ((unsigned short)59058)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */unsigned short) var_8);
                            var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_3 [(short)7] [(short)10])) ? (var_10) : ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1] [i_0 + 3] [i_2] [i_0 + 3]))))))));
                            arr_10 [i_0] [9U] [9U] [i_2] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max(((unsigned short)6478), (((/* implicit */unsigned short) (short)3128)))))))));
                            var_18 &= ((/* implicit */unsigned int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [2LL]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((long long int) 0U));
                    var_20 -= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1]))) > (arr_4 [i_1 + 2] [i_0]))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned short)59058)) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) (unsigned short)6478)))))), (((((/* implicit */int) max(((short)4865), (var_9)))) % (((/* implicit */int) var_7))))));
}
