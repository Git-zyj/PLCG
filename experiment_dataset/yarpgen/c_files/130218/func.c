/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130218
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13889))))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) min(((unsigned short)59581), ((unsigned short)55960))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (2596597208U)))), (1930320167U))) : ((-(2364647128U))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)181))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)78))))), ((+(1930320167U))))) : (((/* implicit */unsigned int) var_6))));
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */unsigned char) -1LL);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = var_12;
        arr_4 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (1930320157U)))) ^ ((~(arr_1 [i_0] [i_0])))))));
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55991)) ? (2364647136U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))));
        var_21 |= ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (unsigned short)47175)))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) > (((/* implicit */int) arr_7 [i_2])))))));
            arr_11 [i_1] [i_1] [i_1] = min((((/* implicit */int) (unsigned short)56000)), (353591328));
            var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) 1872373625))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)183)))) ? (((/* implicit */int) ((658733656U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85)))))) : (((/* implicit */int) arr_7 [i_1]))))) ? (min(((-(arr_10 [i_1] [i_2]))), ((((_Bool)1) ? (2364647112U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((6966195240794323388LL) >> (((6966195240794323373LL) - (6966195240794323312LL)))))) ? (2647847531U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        }
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned short)9544)) : (((/* implicit */int) (short)-23275))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (7799236325240194972LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))))));
        arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)50)), ((short)-17802)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) : (((unsigned long long int) arr_7 [i_1]))));
    }
}
