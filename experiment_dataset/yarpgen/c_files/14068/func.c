/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14068
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
    var_11 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (2147483645)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((int) var_7))));
            arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [10]))) >= (3279196382U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1937343281)) ? (arr_2 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [10ULL] [(short)2])))))))));
            var_12 = ((/* implicit */_Bool) ((signed char) min(((+(1937343282))), (((/* implicit */int) (_Bool)1)))));
        }
        arr_7 [i_0] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)7))) ^ (((/* implicit */int) (unsigned short)9966))));
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(arr_2 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((-234961338) | (((/* implicit */int) (unsigned short)0))))) : (max((arr_2 [0LL] [0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) + (-683491903423174618LL))))))));
        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)16320)) | (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_8)) : (2147483645))))), (max(((+(((/* implicit */int) var_9)))), ((+(-1937343281)))))));
    }
    for (int i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_2 - 4])), (arr_11 [i_2])))) - (((2291494481119685954LL) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))))))));
        var_15 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((3317930259696192677LL), (5812013801358259606LL)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)228)), ((short)16305))))))));
        arr_13 [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)17097)))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1937343253)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18))));
    }
}
