/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164405
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) (signed char)41))));
        var_19 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-41))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned char)81)))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)37859)) * (((/* implicit */int) (_Bool)0))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4973059703664978249LL)) ? (0LL) : (192LL)));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (4141732775U) : (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : ((-(((/* implicit */int) arr_3 [i_4 - 3] [i_1 + 1]))))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1 + 1]) >= (arr_7 [i_1]))))) + (((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_7 [i_1 + 3]) : (arr_7 [i_4 - 2])))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_1])) ? ((-(arr_0 [i_4] [i_4 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
        arr_16 [14U] |= ((/* implicit */unsigned char) min(((~(((arr_8 [i_1] [(signed char)10]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))))))), (((/* implicit */long long int) arr_2 [i_1 + 1] [i_1 + 1]))));
    }
    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned short) ((int) max((var_12), (((/* implicit */long long int) (_Bool)1)))));
        var_25 = ((/* implicit */short) arr_7 [i_5]);
        var_26 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */int) min((arr_6 [i_5] [(unsigned short)10]), (arr_10 [i_5] [(_Bool)1] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (43246569)))) == (((/* implicit */int) (signed char)127))));
        var_28 += max(((+(arr_18 [i_5]))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)0)))));
    }
    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
    var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13))))))) / (((/* implicit */int) ((unsigned short) ((signed char) (unsigned short)28398))))));
}
