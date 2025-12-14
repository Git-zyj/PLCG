/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188123
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned long long int) var_15))))) ? (var_14) : (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4 + 1] [i_4] [i_4])))) || (arr_5 [i_0] [i_0] [i_0] [i_0])));
                                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))) : (arr_7 [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-8951104769144036861LL), (arr_4 [i_0] [i_0] [i_2])))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)9765)) && ((_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min(((-((-(((/* implicit */int) (signed char)-71)))))), (((/* implicit */int) ((unsigned short) arr_4 [i_0 - 4] [i_0 - 3] [i_0 - 3])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_18 [i_0 - 4] [i_1] [i_0 - 4]), (18446744073709551615ULL)))) ? ((((~(var_12))) | (((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_1] [i_5] [i_6])))))) : ((~((~(18446744073709551608ULL)))))));
                        }
                    } 
                } 
                arr_19 [i_1] [9ULL] = ((/* implicit */short) ((1032179608992732872ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752)))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 4]))))) >= (((((/* implicit */_Bool) (unsigned short)6361)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9)) << (((var_15) + (6440044856915085022LL)))))) : (arr_9 [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_7])), ((-(3461254853204578603ULL)))))) ? (min((min((5481424525821091297ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_7])) >= (((/* implicit */int) var_11))))))) : (min((var_6), (((/* implicit */unsigned long long int) ((unsigned short) var_0)))))))));
                arr_27 [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_26 [i_8] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)12838)) : (((/* implicit */int) arr_24 [i_7] [i_7]))))))), (var_7)));
                var_23 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2586))) : (17191662940610740148ULL))) < ((-(var_12)))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 17191662940610740148ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59189))) : (6452346443229330361ULL))))));
                var_25 = ((/* implicit */long long int) var_14);
            }
        } 
    } 
    var_26 |= ((/* implicit */unsigned short) var_1);
}
