/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116018
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (arr_3 [i_0] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-32), ((signed char)28))))))))));
                arr_5 [i_0] [2U] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) (unsigned short)32768)))) ? ((~(var_5))) : (((((/* implicit */_Bool) var_13)) ? (arr_2 [(unsigned char)6] [(unsigned char)6] [i_1 - 1]) : (((/* implicit */int) (signed char)-33)))))) > (((/* implicit */int) (signed char)-39))));
            }
        } 
    } 
    var_19 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (unsigned short)53725))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)32);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    arr_17 [i_2] [(signed char)1] = ((/* implicit */signed char) ((unsigned int) arr_13 [i_4 + 1] [i_4 + 1] [i_4]));
                    arr_18 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_8 [i_2] [i_3]))) ^ (((/* implicit */int) ((unsigned char) (signed char)36)))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_22 [i_5] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) == (arr_1 [i_2 + 1] [i_5])));
                    arr_23 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (arr_8 [i_2 + 2] [i_2 + 1])));
                }
            }
        } 
    } 
}
