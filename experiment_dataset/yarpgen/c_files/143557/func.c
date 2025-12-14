/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143557
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
    var_18 |= ((/* implicit */int) max((((/* implicit */long long int) (-((-(((/* implicit */int) (short)-8940))))))), (((min((-2799887806117583612LL), (((/* implicit */long long int) (unsigned char)0)))) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (short)-30702);
        var_20 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-26))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_15)))) : (((/* implicit */int) var_8))));
            arr_7 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-8944)), (-2799887806117583615LL)));
            var_21 = ((/* implicit */signed char) var_3);
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)98)), ((unsigned char)11)))) || (((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), ((~((+(min((var_6), (((/* implicit */unsigned int) arr_0 [i_0] [(signed char)1]))))))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-3LL), (((/* implicit */long long int) 2374216950U))))) ? ((+(15645447000758361222ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0]))))));
        }
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8807223908247902667LL)) ? (1868182820) : (-665850658)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0])) % (((/* implicit */int) var_8))))), (((long long int) -2799887806117583609LL))))) : (min(((~(5ULL))), (((/* implicit */unsigned long long int) var_11))))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = (~(((/* implicit */int) ((signed char) min((-20LL), (((/* implicit */long long int) (unsigned short)32024)))))));
        var_24 = ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)7] [i_3])) >= (((/* implicit */int) arr_2 [i_3]))))))) <= (((/* implicit */int) ((short) arr_2 [i_3])))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? ((+(var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2056460181U)) <= (0LL)))))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((((long long int) var_3)) * (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-30712), (((/* implicit */short) (signed char)-32))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1750781350833264924LL))), (((/* implicit */long long int) 536870910))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16382)) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)0)))))) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (var_10)))))));
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */int) var_7)), ((+(((/* implicit */int) (short)17880)))))))));
}
