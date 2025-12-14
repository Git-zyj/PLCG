/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167201
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3469659070U))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0 + 3] [i_0] |= ((/* implicit */_Bool) ((signed char) ((unsigned int) (signed char)-117)));
        arr_3 [4LL] [i_0 + 1] = (((!(((/* implicit */_Bool) var_12)))) ? ((~(((/* implicit */int) (unsigned short)64506)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)1031)), (-6295218964701257946LL))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)192)))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1 + 1])) > (((/* implicit */int) arr_4 [i_1 - 1])))) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) ((unsigned char) arr_4 [i_1 + 1])))));
        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) arr_5 [17ULL]))))) ? (((arr_5 [i_1]) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_13)))) : (((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) (unsigned short)1025)))))) : (((/* implicit */int) (signed char)16))));
    }
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)192)), ((unsigned short)65525)))) : (((/* implicit */int) max(((unsigned short)56569), (((/* implicit */unsigned short) (_Bool)1)))))));
                    arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)-33)) : (0))), (((/* implicit */int) arr_13 [i_2] [i_2 + 3]))))) ? ((+(((((/* implicit */_Bool) -1836990130372376128LL)) ? (((/* implicit */int) arr_13 [i_2] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_3])))))) : ((+(((((/* implicit */_Bool) -1836990130372376128LL)) ? (((/* implicit */int) arr_11 [13U] [(unsigned short)16])) : (((/* implicit */int) (unsigned short)27941))))))));
                }
            } 
        } 
        arr_17 [(_Bool)1] = ((/* implicit */signed char) min((max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (4675018814087500727LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_9 [i_2 - 1])), (arr_6 [8U] [i_2 - 1]))))));
    }
    var_19 = (+(((/* implicit */int) var_10)));
}
