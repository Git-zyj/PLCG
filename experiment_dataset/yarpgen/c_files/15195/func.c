/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15195
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
    var_13 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (524287LL));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((-524295LL) == (((/* implicit */long long int) arr_1 [14U])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6)));
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)46195)), (((((_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [18]) : (arr_1 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) var_9)) ? (524295LL) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (~(((var_6) % (var_3))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) -524296LL)) ? (524317LL) : (2860391330321777534LL))) : (((long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (3750382740U) : (((/* implicit */unsigned int) var_10)))))));
            var_16 = ((/* implicit */long long int) 2398143482U);
            var_17 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) & (1896823813U))))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((unsigned long long int) -524307LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (2238091151774680507ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (480762928U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
            var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(var_3)))) / (((((/* implicit */_Bool) var_6)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) var_6)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2])) : (min((((/* implicit */long long int) arr_8 [i_0] [i_0])), (arr_4 [i_0] [i_0] [17U]))))) << (((((((unsigned int) 17233448033395661780ULL)) >> (((((-16LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (36LL))))) - (984U)))));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_21 -= ((unsigned int) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0])))) ? (((arr_10 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) / (arr_3 [i_3]))))));
            var_22 = ((((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_3])) >= (var_4))) ? (((/* implicit */long long int) (+(1896823788U)))) : ((+(((((/* implicit */_Bool) -1132418127)) ? (var_4) : (arr_4 [(signed char)22] [i_0] [i_3]))))));
        }
    }
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (short)-31)))))) >= ((-(2398143478U))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (max((((long long int) var_9)), (((/* implicit */long long int) var_10))))));
}
