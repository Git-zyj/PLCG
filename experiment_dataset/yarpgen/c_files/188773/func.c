/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188773
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
    var_13 -= ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_16 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46389))) : (((((/* implicit */_Bool) var_3)) ? (-2LL) : (((/* implicit */long long int) arr_4 [i_2])))))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 + 4] [i_2 + 3])))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 65535ULL))));
                        var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_0 - 1] [(unsigned char)7] [i_0])), (var_4)));
                    }
                } 
            } 
        } 
        var_19 -= ((/* implicit */long long int) ((((2480857582282519369ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) % (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)11]))));
        var_20 -= ((/* implicit */unsigned short) (short)31605);
        var_21 |= ((/* implicit */unsigned char) max(((+((~(arr_4 [i_0 + 2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) > (2147483647))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_12 [(unsigned char)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15965886491427032247ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_4 - 1] [i_4 - 1])));
            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_4 [i_0])) : (var_8)))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3])) + (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 4])))))));
        }
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (~(949551954)))) - (arr_9 [i_5] [i_5]))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((long long int) var_5))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((min((arr_4 [i_5 + 3]), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -563724012)) ? (((((/* implicit */_Bool) max((3394431436U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))) : (((/* implicit */int) (unsigned short)0)))) : (var_2)));
    }
    var_27 &= ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)0))))))));
}
