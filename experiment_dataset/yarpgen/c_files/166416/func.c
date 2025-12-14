/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166416
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) 524032U)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) 2U)) ? (1743745692) : (((/* implicit */int) (short)1023)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) % (var_2)))) || (((/* implicit */_Bool) ((18446744073709551600ULL) - (18446744073709551609ULL)))))))));
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) arr_2 [i_2] [i_1]))) >= (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-8)) & (((/* implicit */int) (short)(-32767 - 1)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) * (0U))))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned char)0)))))))))));
                    arr_7 [6U] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 71776119061217280LL)) ? (17522420496927892211ULL) : (((/* implicit */unsigned long long int) 130944))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_6 [i_2] [i_2] [(unsigned short)15] [i_1])))))) : (((max((6005834570624451834ULL), (((/* implicit */unsigned long long int) (short)-1023)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) (+(7574881735422490159ULL)))) ? (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_1] [i_2]) + (2U)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * ((-9223372036854775807LL - 1LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 8; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_11)))))) ? (arr_11 [i_3] [i_3]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) % ((-(((/* implicit */int) (short)-2)))))))));
                    arr_17 [i_3] [i_3] &= ((/* implicit */_Bool) max((max((2269814212194729984LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((arr_12 [i_5 + 1] [i_5 + 2]) < (((/* implicit */long long int) 524160)))))));
                }
            } 
        } 
    } 
}
