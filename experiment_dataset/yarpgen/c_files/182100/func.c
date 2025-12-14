/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182100
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
    var_13 = ((/* implicit */signed char) var_6);
    var_14 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_5)))) ? (max((var_9), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-31719)) : (((/* implicit */int) (signed char)14)))))) == (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    arr_8 [i_2] [(short)10] [i_2] = ((/* implicit */int) var_12);
                    arr_9 [i_2] = ((/* implicit */unsigned short) (unsigned char)63);
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    var_15 = ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)56421)) : (((/* implicit */int) var_0)))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)46942)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (unsigned short)18593)));
                    arr_14 [i_0] [i_0] [i_1] [11LL] = ((/* implicit */unsigned long long int) var_11);
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(arr_10 [i_0 + 4] [i_1] [i_3 - 2] [i_1]))))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18594)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-47))))) ? (max((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])), (var_9))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) ^ (var_1)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)192)), (var_5)))) : (((/* implicit */int) min(((signed char)-114), ((signed char)32))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((unsigned char) var_6)))));
        var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (3165537998914299470LL) : (var_4))));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_20 -= ((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (signed char)-78))));
        var_21 = ((/* implicit */long long int) var_11);
        arr_21 [i_5] = max((((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */long long int) var_8)) : (arr_20 [i_5]))), ((+(arr_19 [i_5]))));
    }
}
