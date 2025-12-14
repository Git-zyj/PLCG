/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187046
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
    var_20 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((unsigned short) min((1536365154), ((-(((/* implicit */int) (unsigned short)29837)))))));
        var_21 = ((/* implicit */unsigned short) max(((~(((-2117271065) + (((/* implicit */int) var_2)))))), ((~(((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */int) (short)-1938)) : (((/* implicit */int) var_19))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_7 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(4294967289U)))) * (min((min((18446744073709420544ULL), (((/* implicit */unsigned long long int) 612089207U)))), (((/* implicit */unsigned long long int) arr_0 [0U]))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) min(((short)-1897), (((/* implicit */short) (unsigned char)56))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : ((~(((/* implicit */int) (short)1920)))))))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_2] [i_3] |= ((/* implicit */_Bool) min((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)32763))))), ((~(((/* implicit */int) (unsigned short)22148))))));
            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((8388608), (((/* implicit */int) arr_8 [i_2]))))), ((-(arr_9 [i_2])))));
        }
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        arr_17 [(_Bool)1] = ((/* implicit */int) max(((-(arr_2 [i_4]))), (((/* implicit */unsigned long long int) 8388608))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-2147483647 - 1)))));
        arr_18 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */unsigned int) ((int) max(((~(0U))), (((/* implicit */unsigned int) (unsigned short)10)))));
        arr_19 [i_4] [13ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (min((arr_10 [i_4] [i_4]), (((/* implicit */long long int) (short)-1920)))) : (((/* implicit */long long int) (~(((((/* implicit */int) var_0)) >> (((/* implicit */int) var_0)))))))));
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4294967272U))) ? (min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_19)))))) : (((/* implicit */int) var_12))));
    var_28 = ((/* implicit */long long int) var_8);
    var_29 |= ((/* implicit */unsigned char) var_7);
}
