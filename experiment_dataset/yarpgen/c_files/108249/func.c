/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108249
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), ((unsigned char)86)));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_5 [i_2 + 1] [i_1 + 1]))))));
                    arr_9 [2] [i_1] [i_2] = arr_5 [(_Bool)1] [(_Bool)1];
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) arr_6 [i_0]);
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    var_19 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5])))) ? (((/* implicit */int) (short)-24315)) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), (arr_15 [3LL] [i_4] [(unsigned char)12]))))));
                    var_20 *= ((/* implicit */short) max((((/* implicit */unsigned short) arr_19 [i_3] [i_5 + 2] [i_5])), ((unsigned short)40234)));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_25 [i_3] [i_4] [i_6] [12U] = ((/* implicit */unsigned char) var_11);
                    var_21 += ((/* implicit */unsigned int) arr_13 [i_3]);
                }
                arr_26 [i_3] [14U] [(signed char)17] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_16))))))) % (((((/* implicit */_Bool) (((_Bool)0) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (max((1713036792), (-1040690682)))))));
                arr_27 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) var_11)) ? ((~(var_2))) : (min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)24318)) : (((/* implicit */int) arr_23 [(unsigned char)20] [(unsigned char)20])))))));
            }
        } 
    } 
}
