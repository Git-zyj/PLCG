/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139041
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned long long int) (~(2111207208U)));
        var_18 = ((/* implicit */long long int) ((_Bool) (short)32757));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 2])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(-1)))) ? ((~(((/* implicit */int) (signed char)-38)))) : (((var_14) + (((/* implicit */int) (_Bool)1))))))));
                    var_19 |= ((/* implicit */unsigned long long int) var_7);
                    var_20 = ((/* implicit */short) min(((+(8502349578465634994LL))), (((6327988249616715919LL) - (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    }
    for (short i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((min((max((((/* implicit */int) var_2)), (-7))), (arr_0 [i_3] [i_3 - 2]))), (((/* implicit */int) (signed char)-61))));
        var_23 ^= ((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 1]);
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */short) max((((long long int) ((((/* implicit */unsigned int) arr_10 [i_4] [i_4])) + (arr_11 [i_4 - 1])))), (((/* implicit */long long int) (((-(var_13))) - ((+(((/* implicit */int) (short)32767)))))))));
        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))));
    }
    for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        arr_20 [i_5] [i_5 + 2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_18 [i_5])) - (((((/* implicit */_Bool) 12)) ? (((/* implicit */int) arr_18 [i_5 + 2])) : (((/* implicit */int) var_0))))))));
        var_26 = ((/* implicit */int) ((short) ((arr_19 [i_5 - 2] [i_5 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 4]))))));
        var_27 = ((/* implicit */_Bool) ((((min((var_4), (((/* implicit */unsigned int) var_7)))) ^ (((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (arr_19 [i_5] [i_5]) : (((/* implicit */unsigned int) 9)))))) * ((-(((3840162155U) - (((/* implicit */unsigned int) 9))))))));
        var_28 *= (~(min((((/* implicit */unsigned int) var_2)), (min((arr_19 [i_5] [i_5]), (arr_19 [11LL] [i_5]))))));
    }
    var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) (_Bool)1))))));
    var_30 = ((/* implicit */int) min((var_4), (((/* implicit */unsigned int) var_10))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_1))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) | (var_5))) - (4294941167U)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
