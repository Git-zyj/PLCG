/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165916
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~((+(((/* implicit */int) var_2))))))), ((~(min((var_4), (((/* implicit */long long int) var_3))))))));
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 2]))))) ? (-8425568552781246010LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))))))))));
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2])))))));
        var_18 -= ((/* implicit */_Bool) (-((~(((/* implicit */int) max((var_9), (var_9))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [(signed char)12] &= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [12ULL]))))))), ((-((+(-1951200206)))))));
                    var_19 = ((/* implicit */int) ((min(((!(((/* implicit */_Bool) arr_3 [i_1])))), (((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)8))) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) (unsigned short)65527))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1]))) % (var_5)))))));
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) : (arr_3 [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2])))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_4] [i_4])))))))));
        var_22 += ((/* implicit */long long int) ((((((unsigned long long int) var_3)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((1951200190) > (((/* implicit */int) arr_0 [i_4])))))))) ? ((+(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4])))) : (max((((/* implicit */int) (short)27313)), (max((1859152733), (((/* implicit */int) (unsigned short)65525))))))));
    }
}
