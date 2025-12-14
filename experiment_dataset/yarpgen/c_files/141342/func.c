/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141342
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
    var_12 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (unsigned short)40206)) / (((/* implicit */int) (short)-32741)))), ((+(((/* implicit */int) var_8)))))) > (min((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_11))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) var_0);
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_2))));
                    var_15 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) (unsigned short)25324)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (65536U)))) > (((/* implicit */long long int) ((/* implicit */int) ((min(((_Bool)1), ((_Bool)1))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
                    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (signed char)-13))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) - (min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_6)) - (10458))))), (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned short)65524)))))))));
        var_17 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (short)32767))))) && (((/* implicit */_Bool) (unsigned short)2398))))), (max((var_6), (min((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])), ((unsigned short)63137))))));
        arr_9 [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_0]))) || ((!(((/* implicit */_Bool) (short)23402))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17722))))) ? (((arr_4 [i_3] [i_4 - 1] [i_3]) / (3749822221U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                    var_19 = ((/* implicit */int) (((((!(((/* implicit */_Bool) (unsigned short)41375)))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_4]))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((short) 68702699520ULL)))) + (arr_15 [i_4 - 1] [i_4] [i_5])))));
                    var_20 = ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((/* implicit */long long int) min(((+(var_0))), ((+(((/* implicit */int) (_Bool)0))))))) : (min(((~(2191524910844653157LL))), (((/* implicit */long long int) arr_17 [(_Bool)1] [i_4] [i_4 - 1]))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned char) (~(arr_15 [i_3] [i_3] [i_3])));
        var_22 = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) (unsigned short)32724)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) > (((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))))));
        arr_19 [i_3] [(short)13] = ((/* implicit */unsigned long long int) ((min((7055297742950372161LL), (((/* implicit */long long int) 72551695)))) * (((/* implicit */long long int) ((((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)40889)))) + (-72551695))))));
        arr_20 [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_3] [i_3] [i_3]))));
    }
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)68)) >> (((((/* implicit */int) var_3)) + (8012)))))))) ? ((-(((/* implicit */int) ((short) (signed char)-51))))) : (((/* implicit */int) var_2))));
    var_24 = ((/* implicit */_Bool) (~(min((18446744005006852082ULL), (((/* implicit */unsigned long long int) var_10))))));
}
