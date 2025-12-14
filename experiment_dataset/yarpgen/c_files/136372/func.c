/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136372
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
    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_10))) + (((12178814915017841250ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)6))))) & (((((/* implicit */unsigned long long int) ((-1542437820) & (((/* implicit */int) (_Bool)1))))) | (arr_6 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (12178814915017841260ULL))) << (((((((/* implicit */_Bool) max((arr_5 [i_4] [i_4]), (((/* implicit */long long int) 1542437819))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (min((8725724278030336ULL), (((/* implicit */unsigned long long int) arr_0 [i_4])))))) - (18446744073709535022ULL)))));
                                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1542437820)) || (((/* implicit */_Bool) (unsigned char)85)))) ? (((/* implicit */int) (short)-6936)) : (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */unsigned long long int) min((arr_4 [i_0]), (((/* implicit */int) (_Bool)1))))) == (((((((/* implicit */unsigned long long int) arr_4 [i_0])) + (arr_8 [i_0] [i_1 - 3] [i_0]))) + (((8389119752908297219ULL) >> (((8389119752908297219ULL) - (8389119752908297157ULL))))))));
                    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)160))))), (((max((6267929158691710371ULL), (((/* implicit */unsigned long long int) var_9)))) ^ ((~(arr_6 [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max(((+(((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))) == (3173796060U)))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_12))))))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_12), (((/* implicit */signed char) var_4))))))))));
}
