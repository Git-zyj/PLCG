/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117634
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((short)28911), (((/* implicit */short) (signed char)100))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) : (4294967286U)));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) == (((/* implicit */int) (signed char)-35))));
                        arr_15 [i_1] [i_1] [i_3] [i_3] [i_4] = (signed char)82;
                        var_17 -= 0U;
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)-35))));
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) * (((((/* implicit */int) var_14)) ^ (var_9)))));
        arr_17 [i_1] = ((/* implicit */short) (_Bool)1);
    }
    var_19 = ((((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)28915), (((/* implicit */short) var_13)))))))) * (((((/* implicit */unsigned int) min((-1471803415), (((/* implicit */int) (short)-5975))))) * (((((/* implicit */_Bool) 293283894)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1389461468)))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (signed char)-89)) ? ((+(((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (short)-21288)))))));
}
